/* PPX entry point for ReScript/BuckleScript compatibility */
/* Uses Ast_mapper.run_main instead of ppxlib driver */
let mapper = Mapper.getMapper(_ => ());

let () = Ast_mapper.run_main((_argv) => mapper);
