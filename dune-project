(lang dune 3.16)

(name res-react-intl)
(version 3.1.2)

(generate_opam_files true)

(source (github SimonDegraeve/res-react-intl))
(license MIT)
(authors "Simon Degraeve")
(maintainers "Simon Degraeve <simon.degraeve@gmail.com>")

(package
 (name res-react-intl)
 (synopsis "Reason/OCaml PPX generating ReactIntl id from defaultMessage")
 (description "Reason/OCaml PPX generating ReactIntl id from defaultMessage")
 (depends
  (ocaml (>= 4.14.0))
  (dune (>= 3.0))
  (reason (>= 3.10.0))
  (ppxlib (>= 0.35.0))
  (base (>= v0.16.0))
  (stdio (>= v0.16.0))
  (yojson (>= 2.0.0))
  (odoc :with-doc)))
