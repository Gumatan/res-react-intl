/* PPX entry point using Ppxlib driver */
/* The mapper uses compiler-libs AST types which are compatible with ppxlib's AST */
let mapper = Mapper.getMapper(_ => ());

let () =
  Ppxlib.Driver.register_transformation(
    ~impl=(structure => mapper.structure(mapper, structure)),
    "ReactIntl",
  );
