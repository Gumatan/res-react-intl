open Migrate_parsetree;

let mapper = (_, _) => Mapper.getMapper(_ => ());

let _ =
  Driver.register(~name="ReactIntl", ~args=[], Versions.ocaml_409, mapper);

// Source: https://github.com/reasonml-community/graphql_ppx/blob/master/src/bucklescript_bin/Bin.re
let argv =
  switch (Sys.argv |> Array.to_list) {
  | [program, ...rest] =>
    switch (List.rev(rest)) {
    | [output_file, input_file, ...args] =>
      List.concat([
        [program],
        List.rev(args),
        [input_file, "-o", output_file, "--dump-ast", "--embed-errors"],
      ])
      |> Array.of_list
    | _ => Sys.argv
    }
  | _ => Sys.argv
  };

let () = Driver.run_main(~argv, ());
