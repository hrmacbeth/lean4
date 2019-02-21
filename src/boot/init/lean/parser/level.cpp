// Lean compiler output
// Module: init.lean.parser.level
// Imports: init.lean.parser.pratt
#include "runtime/object.h"
#include "runtime/apply.h"
typedef lean::object obj;    typedef lean::usize  usize;
typedef lean::uint8  uint8;  typedef lean::uint16 uint16;
typedef lean::uint32 uint32; typedef lean::uint64 uint64;
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
obj* l_lean_parser_trailing__level__parser__m_monad__except;
extern obj* l_lean_parser_match__token___closed__2;
obj* l_lean_parser_parsec__t_bind__mk__res___rarg(obj*, obj*);
obj* l_lean_parser_level__parser__m;
obj* l_lean_parser_trie_match__prefix___rarg(obj*, obj*);
obj* l_lean_parser_level_parser_lean_parser_has__view(obj*);
obj* l_lean_parser_level__parser_run_lean_parser_has__view(obj*);
obj* l_lean_parser_level_app_has__view_x_27___lambda__2(obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_level_trailing_parser_lean_parser_has__tokens___spec__2(obj*);
extern obj* l_lean_parser_number_has__view_x_27___lambda__2___closed__1;
obj* l_lean_parser_number_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__2___rarg(obj*, obj*, obj*);
obj* l_lean_parser_trailing__level__parser__m_lean_parser_monad__parsec;
obj* l_lean_parser_level_add__lit_parser_lean_parser_has__tokens;
obj* l_reader__t_lift___rarg(obj*, obj*);
obj* l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__1;
obj* l_lean_parser_level_paren_has__view_x_27___lambda__2(obj*);
obj* l_lean_parser_level_leading_has__view;
obj* l_lean_parser_level__parser;
namespace lean {
obj* nat_add(obj*, obj*);
}
obj* l_lean_parser_level__parser__m_lean_parser_monad__parsec;
extern obj* l_mjoin___rarg___closed__1;
extern obj* l_lean_parser_basic__parser__m_monad;
obj* l_lean_parser_level_app;
obj* l_lean_parser_number_parser___at_lean_parser_level_add__lit_parser_lean_parser_has__tokens___spec__2(obj*, obj*);
obj* l_has__monad__lift__t__refl(obj*, obj*);
obj* l_list_mfoldl___main___at_lean_parser_level_paren_parser___spec__2(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_level_parser(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_level_leading_has__view_x_27___lambda__1(obj*);
obj* l_lean_parser_list_cons_tokens___rarg(obj*, obj*);
obj* l_lean_parser_number_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__2(obj*);
obj* l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_trailing__level__parser__m;
obj* l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__2;
obj* l_lean_parser_parsec__t_try__mk__res___rarg(obj*);
obj* l_lean_parser_level_add__lit_parser(obj*, obj*, obj*, obj*, obj*);
obj* l_list_reverse___rarg(obj*);
extern "C" obj* lean_name_mk_string(obj*, obj*);
obj* l_reader__t_alternative___rarg(obj*, obj*);
obj* l_lean_parser_rec__t_recurse___at_lean_parser_level_parser_lean_parser_has__tokens___spec__1(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_node___at_lean_parser_level_paren_parser___spec__1(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_level_parser___closed__1;
obj* l_lean_parser_level__parser__m_monad__reader;
obj* l_lean_parser_parsec__t_labels__mk__res___rarg(obj*, obj*);
obj* l_lean_parser_level_add__lit_has__view_x_27___lambda__1___closed__1;
extern obj* l___private_init_lean_parser_combinators_1__many1__aux___main___rarg___closed__1;
obj* l_lean_parser_combinators_choice__aux___main___at_lean_parser_level_trailing_parser_lean_parser_has__tokens___spec__1(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_level_trailing_parser_lean_parser_has__tokens;
obj* l_lean_parser_level_paren_has__view_x_27___lambda__1___closed__1;
obj* l_lean_parser_curr__lbp___at_lean_parser_level__parser_run___spec__4(obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_choice__aux___main___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__4(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_string_quote(obj*);
obj* l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__1;
obj* l_lean_parser_level__parser__coe;
obj* l_lean_parser_level_leading;
obj* l_lean_parser_level_get__leading(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_level_app_has__view;
obj* l_lean_parser_level_parser_lean_parser_has__view___closed__1;
obj* l_lean_parser_level__parser_run_lean_parser_has__tokens(obj*);
obj* l_reader__t_monad__functor(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_observing___at_lean_parser_peek__token___spec__2(obj*, obj*, obj*);
obj* l_lean_parser_level_app_parser_lean_parser_has__view;
obj* l_lean_parser_level__parser__m_alternative;
obj* l_lean_parser_trailing__level__parser__m_lean_parser_monad__rec;
obj* l_lean_parser_level_app_has__view_x_27___lambda__1(obj*);
obj* l_lean_parser_trailing__level__parser__m_monad;
obj* l_lean_parser_monad__parsec_error___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__5(obj*);
obj* l_lean_parser_level_app_parser___closed__1;
obj* l_lean_parser_level_parser_lean_parser_has__tokens___closed__1;
obj* l_lean_parser_combinators_label_view___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_try__view___at_lean_parser_number_parser___spec__1(obj*);
obj* l_lean_parser_level_add__lit;
obj* l_lean_parser_level_paren;
obj* l_lean_parser_level_leading_has__view_x_27;
obj* l_lean_parser_pratt__parser___at_lean_parser_level__parser_run___spec__1___lambda__1(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
obj* l_lean_parser_level_trailing_has__view_x_27___lambda__1(obj*);
extern obj* l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__1;
extern obj* l_lean_parser_curr__lbp___rarg___lambda__1___closed__1;
obj* l___private_init_lean_parser_rec_1__run__aux___at_lean_parser_level__parser_run___spec__7(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_level_trailing_has__view_x_27___lambda__2(obj*);
obj* l_lean_parser_level_leading_has__view_x_27___lambda__2___closed__1;
extern obj* l_lean_parser_number_has__view;
obj* l_lean_parser_level__parser_run(obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_number_has__view_x_27___lambda__2___closed__2;
obj* l_lean_parser_level__parser__m_monad;
obj* l_lean_parser_level_leading_has__view_x_27___lambda__2___closed__2;
obj* l_lean_parser_tokens___rarg(obj*);
obj* l_option_get__or__else___main___rarg(obj*, obj*);
obj* l_lean_parser_level__parser_run_lean_parser_has__view___closed__1;
obj* l_lean_parser_level_trailing_parser___closed__1;
obj* l_lean_parser_syntax_as__node___main(obj*);
obj* l_lean_parser_level_add__lit_has__view_x_27___lambda__1___closed__2;
obj* l_lean_parser_level_trailing;
obj* l_lean_parser_symbol__or__ident___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__1(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_symbol_tokens___rarg(obj*, obj*);
obj* l_lean_parser_pratt__parser___at_lean_parser_level__parser_run___spec__1(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_level_leading_parser_lean_parser_has__view;
namespace lean {
uint8 nat_dec_eq(obj*, obj*);
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_level__parser_run___spec__3___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_level_lean_parser_has__tokens;
extern obj* l_lean_parser_basic__parser__m_monad__reader;
obj* l_lean_parser_trailing__level__parser__coe(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_level__parser__m_monad__except;
obj* l_lean_parser_level_trailing_parser(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_node___at_lean_parser_level_app_parser___spec__1(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_trailing__level__parser;
obj* l_lean_parser_level__parser__m_lean_parser_monad__basic__parser;
obj* l_lean_parser_level_app_parser_lean_parser_has__view___lambda__1(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_node_view___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_level_app_parser_lean_parser_has__tokens;
obj* l_lean_parser_level_paren_parser___closed__1;
obj* l_lean_parser_trailing__level__parser__m_alternative;
obj* l_lean_parser_symbol__core___at_lean_parser_level_add__lit_parser_lean_parser_has__tokens___spec__1(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_ident_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__3(obj*);
extern obj* l_lean_parser_finish__comment__block___closed__2;
extern obj* l_string_join___closed__1;
obj* l_lean_parser_level_leading_parser(obj*, obj*, obj*, obj*);
obj* l_id___rarg(obj*);
obj* l_reader__t_read___rarg(obj*, obj*);
extern obj* l_lean_parser_max__prec;
obj* l_lean_parser_rec__t_lean_parser_monad__parsec___rarg(obj*, obj*, obj*);
obj* l_lean_parser_level_app_has__view_x_27___lambda__1___closed__1;
obj* l_lean_parser_syntax_mk__node(obj*, obj*);
obj* l_lean_parser_level_add__lit_parser_lean_parser_has__view;
obj* l_lean_parser_level_parser_lean_parser_has__tokens(obj*);
extern obj* l_lean_parser_rec__t_run__parsec___at_lean_parser_detail__ident_parser___spec__1___closed__1;
obj* l_lean_parser_symbol__core___at_lean_parser_level_paren_parser_lean_parser_has__tokens___spec__1(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_recurse_view___rarg(obj*, obj*);
obj* l_lean_parser_level_paren_parser_lean_parser_has__view;
obj* l_lean_parser_token(obj*, obj*, obj*);
obj* l_reader__t_monad__except___rarg(obj*);
obj* l_lean_parser_monad__parsec__trans___rarg(obj*, obj*, obj*);
obj* l_lean_parser_level_add__lit_has__view_x_27;
obj* l_lean_parser_level_leading_parser_lean_parser_has__tokens;
obj* l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__2;
extern obj* l_lean_parser_curr__lbp___rarg___lambda__3___closed__2;
obj* l_lean_parser_level__parser__m_lean_parser_monad__rec;
obj* l_lean_parser_substring_to__string(obj*);
obj* l_lean_parser_level__parser_run_lean_parser_has__view___closed__3;
obj* l_lean_parser_level_paren_parser(obj*, obj*, obj*, obj*);
extern "C" uint8 lean_name_dec_eq(obj*, obj*);
obj* l_lean_parser_rec__t_recurse___rarg(obj*, obj*, obj*);
namespace lean {
uint8 string_dec_eq(obj*, obj*);
}
obj* l_reader__t_lift(obj*, obj*, obj*, obj*);
obj* l_lean_parser_level_paren_has__view;
extern obj* l_lean_parser_combinators_choice__aux___main___rarg___closed__1;
obj* l_lean_parser_level_leading_has__view_x_27___lambda__2(obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_level__parser_run___spec__3(obj*);
obj* l_lean_parser_level__parser_run_lean_parser_has__view___closed__2;
obj* l_lean_parser_number_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__2___rarg___closed__1;
namespace lean {
obj* string_iterator_remaining(obj*);
}
namespace lean {
obj* string_mk_iterator(obj*);
}
extern obj* l_lean_parser_basic__parser__m_alternative;
obj* l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__4;
obj* l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__3;
obj* l_lean_parser_trailing__level__parser__m_monad__reader;
obj* l_lean_parser_level_add__lit_parser___closed__1;
obj* l_string_trim(obj*);
obj* l_list_mfoldl___main___at_lean_parser_level_app_parser___spec__2(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_option_get___main___at_lean_parser_run___spec__2(obj*);
extern obj* l_lean_parser_curr__lbp___rarg___lambda__3___closed__1;
obj* l_lean_parser_ident_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__3___rarg(obj*, obj*, obj*);
obj* l_reader__t_monad___rarg(obj*);
obj* l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__5;
extern "C" obj* lean_name_mk_numeral(obj*, obj*);
obj* l_has__monad__lift__t__trans___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_parser_level_add__lit_has__view;
obj* l_lean_parser_monad__parsec_error___at_lean_parser_level_trailing_parser_lean_parser_has__tokens___spec__2___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_level_app_parser(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_rec__t_run___at_lean_parser_level__parser_run___spec__6(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_pratt_1__trailing__loop___main___at_lean_parser_level__parser_run___spec__2(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_trailing__level__parser__m_lean_parser_monad__basic__parser;
obj* l_lean_parser_level_paren_has__view_x_27;
obj* l_lean_parser_pratt__parser_view___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_level_add__lit_has__view_x_27___lambda__1(obj*);
obj* l_lean_parser_level_trailing_parser_lean_parser_has__view;
namespace lean {
obj* nat_sub(obj*, obj*);
}
obj* l_lean_parser_level_app_has__view_x_27;
obj* l_lean_parser_monad__parsec_error___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__5___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_number_parser___at_lean_parser_level_add__lit_parser_lean_parser_has__tokens___spec__2___rarg(obj*, obj*, obj*);
extern obj* l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__2;
extern obj* l_lean_parser_basic__parser__m_lean_parser_monad__parsec;
obj* l_lean_parser_level_add__lit_has__view_x_27___lambda__2(obj*);
obj* l_lean_parser_level_lean_parser_has__view;
obj* l_dlist_singleton___rarg(obj*, obj*);
extern obj* l_lean_parser_basic__parser__m_monad__except;
obj* l_lean_parser_level_trailing_has__view;
obj* l_lean_parser_parsec__t_orelse__mk__res___rarg(obj*, obj*);
obj* l_list_append___rarg(obj*, obj*);
obj* l_lean_parser_level_paren_has__view_x_27___lambda__1(obj*);
extern obj* l_lean_parser_number_has__view_x_27___lambda__1___closed__6;
obj* l_option_map___rarg(obj*, obj*);
obj* l_lean_parser_rec__t_run__parsec___at_lean_parser_level__parser_run___spec__5(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_ident_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__3___rarg___closed__1;
obj* l_lean_parser_monad__rec_trans___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_parser_level_leading_parser___closed__1;
obj* l_lean_parser_substring_of__string(obj*);
namespace lean {
uint8 nat_dec_lt(obj*, obj*);
}
obj* l_lean_parser_level_paren_parser_lean_parser_has__tokens;
obj* l_lean_parser_level_trailing_has__view_x_27;
obj* l___private_init_lean_parser_rec_1__run__aux___main___rarg(obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_raw_view___rarg___lambda__3___closed__1;
obj* _init_l_lean_parser_level__parser__m_monad() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = l_lean_parser_basic__parser__m_monad;
x_1 = l_reader__t_monad___rarg(x_0);
return x_1;
}
}
obj* _init_l_lean_parser_level__parser__m_alternative() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = l_lean_parser_basic__parser__m_monad;
x_1 = l_lean_parser_basic__parser__m_alternative;
x_2 = l_reader__t_alternative___rarg(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_level__parser__m_monad__reader() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = l_lean_parser_basic__parser__m_monad__reader;
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift___rarg), 2, 1);
lean::closure_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_parser_level__parser__m_lean_parser_monad__parsec() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = l_lean_parser_basic__parser__m_monad;
x_1 = l_lean_parser_basic__parser__m_lean_parser_monad__parsec;
x_2 = l_lean_parser_rec__t_lean_parser_monad__parsec___rarg(x_0, lean::box(0), x_1);
return x_2;
}
}
obj* _init_l_lean_parser_level__parser__m_monad__except() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = l_lean_parser_basic__parser__m_monad__except;
x_1 = l_reader__t_monad__except___rarg(x_0);
return x_1;
}
}
obj* _init_l_lean_parser_level__parser__m_lean_parser_monad__rec() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = l_lean_parser_basic__parser__m_monad;
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_rec__t_recurse___rarg), 3, 1);
lean::closure_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_parser_level__parser__m_lean_parser_monad__basic__parser() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = l_lean_parser_basic__parser__m_monad;
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift), 4, 3);
lean::closure_set(x_1, 0, lean::box(0));
lean::closure_set(x_1, 1, lean::box(0));
lean::closure_set(x_1, 2, x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_has__monad__lift__t__refl), 2, 1);
lean::closure_set(x_2, 0, lean::box(0));
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_has__monad__lift__t__trans___rarg), 4, 2);
lean::closure_set(x_3, 0, x_1);
lean::closure_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_lean_parser_level__parser__m() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
return x_0;
}
}
obj* _init_l_lean_parser_level__parser() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
return x_0;
}
}
obj* _init_l_lean_parser_trailing__level__parser__m_monad() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = l_lean_parser_level__parser__m_monad;
x_1 = l_reader__t_monad___rarg(x_0);
return x_1;
}
}
obj* _init_l_lean_parser_trailing__level__parser__m_alternative() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = l_lean_parser_level__parser__m_monad;
x_1 = l_lean_parser_level__parser__m_alternative;
x_2 = l_reader__t_alternative___rarg(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_trailing__level__parser__m_monad__reader() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = l_lean_parser_level__parser__m_monad;
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_read___rarg), 2, 1);
lean::closure_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_parser_trailing__level__parser__m_lean_parser_monad__parsec() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_0 = l_lean_parser_level__parser__m_monad;
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift), 4, 3);
lean::closure_set(x_1, 0, lean::box(0));
lean::closure_set(x_1, 1, lean::box(0));
lean::closure_set(x_1, 2, x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_monad__functor), 6, 5);
lean::closure_set(x_2, 0, lean::box(0));
lean::closure_set(x_2, 1, lean::box(0));
lean::closure_set(x_2, 2, lean::box(0));
lean::closure_set(x_2, 3, x_0);
lean::closure_set(x_2, 4, x_0);
x_3 = l_lean_parser_level__parser__m_lean_parser_monad__parsec;
x_4 = l_lean_parser_monad__parsec__trans___rarg(x_1, x_2, x_3);
return x_4;
}
}
obj* _init_l_lean_parser_trailing__level__parser__m_monad__except() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = l_lean_parser_level__parser__m_monad__except;
x_1 = l_reader__t_monad__except___rarg(x_0);
return x_1;
}
}
obj* _init_l_lean_parser_trailing__level__parser__m_lean_parser_monad__rec() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = l_lean_parser_level__parser__m_monad;
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift), 4, 3);
lean::closure_set(x_1, 0, lean::box(0));
lean::closure_set(x_1, 1, lean::box(0));
lean::closure_set(x_1, 2, x_0);
x_2 = l_lean_parser_level__parser__m_lean_parser_monad__rec;
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__rec_trans___rarg), 4, 3);
lean::closure_set(x_3, 0, x_1);
lean::closure_set(x_3, 1, x_2);
lean::closure_set(x_3, 2, x_0);
return x_3;
}
}
obj* _init_l_lean_parser_trailing__level__parser__m_lean_parser_monad__basic__parser() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = l_lean_parser_level__parser__m_monad;
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift), 4, 3);
lean::closure_set(x_1, 0, lean::box(0));
lean::closure_set(x_1, 1, lean::box(0));
lean::closure_set(x_1, 2, x_0);
x_2 = l_lean_parser_level__parser__m_lean_parser_monad__basic__parser;
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_has__monad__lift__t__trans___rarg), 4, 2);
lean::closure_set(x_3, 0, x_1);
lean::closure_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_lean_parser_trailing__level__parser__m() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
return x_0;
}
}
obj* _init_l_lean_parser_trailing__level__parser() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
return x_0;
}
}
obj* l_lean_parser_trailing__level__parser__coe(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_7; 
lean::dec(x_1);
x_7 = lean::apply_4(x_0, x_2, x_3, x_4, x_5);
return x_7;
}
}
obj* l_lean_parser_rec__t_recurse___at_lean_parser_level_parser_lean_parser_has__tokens___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_8; obj* x_11; obj* x_12; obj* x_13; 
x_5 = lean::apply_4(x_1, x_0, x_2, x_3, x_4);
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
lean::dec(x_5);
x_11 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_12 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_6);
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_8);
return x_13;
}
}
obj* _init_l_lean_parser_level_parser_lean_parser_has__tokens___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = l_lean_parser_tokens___rarg(x_0);
return x_1;
}
}
obj* l_lean_parser_level_parser_lean_parser_has__tokens(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = l_lean_parser_level_parser_lean_parser_has__tokens___closed__1;
return x_2;
}
}
obj* _init_l_lean_parser_level_parser_lean_parser_has__view___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("universe level");
return x_0;
}
}
obj* l_lean_parser_level_parser_lean_parser_has__view(obj* x_0) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
lean::inc(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_rec__t_recurse___at_lean_parser_level_parser_lean_parser_has__tokens___spec__1), 5, 1);
lean::closure_set(x_2, 0, x_0);
x_3 = l_lean_parser_level__parser__m_lean_parser_monad__rec;
x_4 = l_lean_parser_combinators_recurse_view___rarg(x_0, x_3);
x_5 = l_lean_parser_level__parser__m_lean_parser_monad__parsec;
x_6 = l_lean_parser_level__parser__m_alternative;
x_7 = l_lean_parser_level_parser_lean_parser_has__view___closed__1;
x_8 = l_lean_parser_combinators_label_view___rarg(x_5, x_6, x_2, x_7, x_4);
return x_8;
}
}
obj* _init_l_lean_parser_level_parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("universe level");
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_lean_parser_level_parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_8; obj* x_11; obj* x_12; obj* x_13; 
x_5 = l_lean_parser_rec__t_recurse___at_lean_parser_level_parser_lean_parser_has__tokens___spec__1(x_0, x_1, x_2, x_3, x_4);
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
lean::dec(x_5);
x_11 = l_lean_parser_level_parser___closed__1;
x_12 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_6, x_11);
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_8);
return x_13;
}
}
obj* l_lean_parser_level_get__leading(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_2);
lean::dec(x_1);
x_7 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_8 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_8, 0, x_0);
lean::cnstr_set(x_8, 1, x_3);
lean::cnstr_set(x_8, 2, x_7);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_4);
return x_9;
}
}
obj* _init_l_lean_parser_level_lean_parser_has__tokens() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
return x_0;
}
}
obj* _init_l_lean_parser_level_lean_parser_has__view() {
_start:
{
obj* x_0; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_id___rarg), 1, 0);
lean::inc(x_0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_0);
return x_2;
}
}
obj* _init_l_lean_parser_level_paren() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("level");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("paren");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_parser_level_paren_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; obj* x_7; obj* x_8; 
x_7 = lean::box(0);
x_8 = lean::box(3);
x_4 = x_7;
x_5 = x_8;
goto lbl_6;
lbl_3:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_9; obj* x_10; 
x_9 = lean::box(0);
x_10 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_10, 0, x_0);
lean::cnstr_set(x_10, 1, x_1);
lean::cnstr_set(x_10, 2, x_9);
return x_10;
}
else
{
obj* x_11; 
x_11 = lean::cnstr_get(x_2, 0);
lean::inc(x_11);
lean::dec(x_2);
switch (lean::obj_tag(x_11)) {
case 0:
{
obj* x_14; obj* x_17; obj* x_18; 
x_14 = lean::cnstr_get(x_11, 0);
lean::inc(x_14);
lean::dec(x_11);
x_17 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_17, 0, x_14);
x_18 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_18, 0, x_0);
lean::cnstr_set(x_18, 1, x_1);
lean::cnstr_set(x_18, 2, x_17);
return x_18;
}
case 3:
{
obj* x_19; obj* x_20; 
x_19 = lean::box(0);
x_20 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_20, 0, x_0);
lean::cnstr_set(x_20, 1, x_1);
lean::cnstr_set(x_20, 2, x_19);
return x_20;
}
default:
{
obj* x_22; obj* x_23; 
lean::dec(x_11);
x_22 = lean::box(0);
x_23 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_23, 0, x_0);
lean::cnstr_set(x_23, 1, x_1);
lean::cnstr_set(x_23, 2, x_22);
return x_23;
}
}
}
}
lbl_6:
{
obj* x_24; 
switch (lean::obj_tag(x_5)) {
case 0:
{
obj* x_26; obj* x_29; 
x_26 = lean::cnstr_get(x_5, 0);
lean::inc(x_26);
lean::dec(x_5);
x_29 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_29, 0, x_26);
if (lean::obj_tag(x_4) == 0)
{
x_24 = x_29;
goto lbl_25;
}
else
{
obj* x_30; obj* x_32; 
x_30 = lean::cnstr_get(x_4, 0);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_4, 1);
lean::inc(x_32);
lean::dec(x_4);
x_0 = x_29;
x_1 = x_30;
x_2 = x_32;
goto lbl_3;
}
}
case 3:
{
obj* x_35; 
x_35 = lean::box(0);
if (lean::obj_tag(x_4) == 0)
{
x_24 = x_35;
goto lbl_25;
}
else
{
obj* x_36; obj* x_38; 
x_36 = lean::cnstr_get(x_4, 0);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_4, 1);
lean::inc(x_38);
lean::dec(x_4);
x_0 = x_35;
x_1 = x_36;
x_2 = x_38;
goto lbl_3;
}
}
default:
{
obj* x_42; 
lean::dec(x_5);
x_42 = lean::box(0);
if (lean::obj_tag(x_4) == 0)
{
x_24 = x_42;
goto lbl_25;
}
else
{
obj* x_43; obj* x_45; 
x_43 = lean::cnstr_get(x_4, 0);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_4, 1);
lean::inc(x_45);
lean::dec(x_4);
x_0 = x_42;
x_1 = x_43;
x_2 = x_45;
goto lbl_3;
}
}
}
lbl_25:
{
if (lean::obj_tag(x_4) == 0)
{
obj* x_48; obj* x_49; obj* x_50; 
x_48 = lean::box(0);
x_49 = lean::box(3);
x_50 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_50, 0, x_24);
lean::cnstr_set(x_50, 1, x_49);
lean::cnstr_set(x_50, 2, x_48);
return x_50;
}
else
{
obj* x_51; 
x_51 = lean::cnstr_get(x_4, 0);
lean::inc(x_51);
lean::dec(x_4);
switch (lean::obj_tag(x_51)) {
case 0:
{
obj* x_54; obj* x_57; obj* x_58; obj* x_59; 
x_54 = lean::cnstr_get(x_51, 0);
lean::inc(x_54);
lean::dec(x_51);
x_57 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_57, 0, x_54);
x_58 = lean::box(3);
x_59 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_59, 0, x_24);
lean::cnstr_set(x_59, 1, x_58);
lean::cnstr_set(x_59, 2, x_57);
return x_59;
}
case 3:
{
obj* x_60; obj* x_61; obj* x_62; 
x_60 = lean::box(0);
x_61 = lean::box(3);
x_62 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_62, 0, x_24);
lean::cnstr_set(x_62, 1, x_61);
lean::cnstr_set(x_62, 2, x_60);
return x_62;
}
default:
{
obj* x_64; obj* x_65; obj* x_66; 
lean::dec(x_51);
x_64 = lean::box(0);
x_65 = lean::box(3);
x_66 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_66, 0, x_24);
lean::cnstr_set(x_66, 1, x_65);
lean::cnstr_set(x_66, 2, x_64);
return x_66;
}
}
}
}
}
}
}
obj* l_lean_parser_level_paren_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_5; obj* x_6; obj* x_8; 
x_8 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_8) == 0)
{
obj* x_9; 
x_9 = l_lean_parser_level_paren_has__view_x_27___lambda__1___closed__1;
return x_9;
}
else
{
obj* x_10; obj* x_13; 
x_10 = lean::cnstr_get(x_8, 0);
lean::inc(x_10);
lean::dec(x_8);
x_13 = lean::cnstr_get(x_10, 1);
lean::inc(x_13);
lean::dec(x_10);
if (lean::obj_tag(x_13) == 0)
{
obj* x_16; 
x_16 = lean::box(3);
x_5 = x_13;
x_6 = x_16;
goto lbl_7;
}
else
{
obj* x_17; obj* x_19; 
x_17 = lean::cnstr_get(x_13, 0);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_13, 1);
lean::inc(x_19);
lean::dec(x_13);
x_5 = x_19;
x_6 = x_17;
goto lbl_7;
}
}
lbl_4:
{
if (lean::obj_tag(x_3) == 0)
{
obj* x_22; obj* x_23; 
x_22 = lean::box(0);
x_23 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_23, 0, x_1);
lean::cnstr_set(x_23, 1, x_2);
lean::cnstr_set(x_23, 2, x_22);
return x_23;
}
else
{
obj* x_24; 
x_24 = lean::cnstr_get(x_3, 0);
lean::inc(x_24);
lean::dec(x_3);
switch (lean::obj_tag(x_24)) {
case 0:
{
obj* x_27; obj* x_30; obj* x_31; 
x_27 = lean::cnstr_get(x_24, 0);
lean::inc(x_27);
lean::dec(x_24);
x_30 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_30, 0, x_27);
x_31 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_31, 0, x_1);
lean::cnstr_set(x_31, 1, x_2);
lean::cnstr_set(x_31, 2, x_30);
return x_31;
}
case 3:
{
obj* x_32; obj* x_33; 
x_32 = lean::box(0);
x_33 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_33, 0, x_1);
lean::cnstr_set(x_33, 1, x_2);
lean::cnstr_set(x_33, 2, x_32);
return x_33;
}
default:
{
obj* x_35; obj* x_36; 
lean::dec(x_24);
x_35 = lean::box(0);
x_36 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_36, 0, x_1);
lean::cnstr_set(x_36, 1, x_2);
lean::cnstr_set(x_36, 2, x_35);
return x_36;
}
}
}
}
lbl_7:
{
obj* x_37; 
switch (lean::obj_tag(x_6)) {
case 0:
{
obj* x_39; obj* x_42; 
x_39 = lean::cnstr_get(x_6, 0);
lean::inc(x_39);
lean::dec(x_6);
x_42 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_42, 0, x_39);
if (lean::obj_tag(x_5) == 0)
{
x_37 = x_42;
goto lbl_38;
}
else
{
obj* x_43; obj* x_45; 
x_43 = lean::cnstr_get(x_5, 0);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_5, 1);
lean::inc(x_45);
lean::dec(x_5);
x_1 = x_42;
x_2 = x_43;
x_3 = x_45;
goto lbl_4;
}
}
case 3:
{
obj* x_48; 
x_48 = lean::box(0);
if (lean::obj_tag(x_5) == 0)
{
x_37 = x_48;
goto lbl_38;
}
else
{
obj* x_49; obj* x_51; 
x_49 = lean::cnstr_get(x_5, 0);
lean::inc(x_49);
x_51 = lean::cnstr_get(x_5, 1);
lean::inc(x_51);
lean::dec(x_5);
x_1 = x_48;
x_2 = x_49;
x_3 = x_51;
goto lbl_4;
}
}
default:
{
obj* x_55; 
lean::dec(x_6);
x_55 = lean::box(0);
if (lean::obj_tag(x_5) == 0)
{
x_37 = x_55;
goto lbl_38;
}
else
{
obj* x_56; obj* x_58; 
x_56 = lean::cnstr_get(x_5, 0);
lean::inc(x_56);
x_58 = lean::cnstr_get(x_5, 1);
lean::inc(x_58);
lean::dec(x_5);
x_1 = x_55;
x_2 = x_56;
x_3 = x_58;
goto lbl_4;
}
}
}
lbl_38:
{
if (lean::obj_tag(x_5) == 0)
{
obj* x_61; obj* x_62; obj* x_63; 
x_61 = lean::box(0);
x_62 = lean::box(3);
x_63 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_63, 0, x_37);
lean::cnstr_set(x_63, 1, x_62);
lean::cnstr_set(x_63, 2, x_61);
return x_63;
}
else
{
obj* x_64; 
x_64 = lean::cnstr_get(x_5, 0);
lean::inc(x_64);
lean::dec(x_5);
switch (lean::obj_tag(x_64)) {
case 0:
{
obj* x_67; obj* x_70; obj* x_71; obj* x_72; 
x_67 = lean::cnstr_get(x_64, 0);
lean::inc(x_67);
lean::dec(x_64);
x_70 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_70, 0, x_67);
x_71 = lean::box(3);
x_72 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_72, 0, x_37);
lean::cnstr_set(x_72, 1, x_71);
lean::cnstr_set(x_72, 2, x_70);
return x_72;
}
case 3:
{
obj* x_73; obj* x_74; obj* x_75; 
x_73 = lean::box(0);
x_74 = lean::box(3);
x_75 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_75, 0, x_37);
lean::cnstr_set(x_75, 1, x_74);
lean::cnstr_set(x_75, 2, x_73);
return x_75;
}
default:
{
obj* x_77; obj* x_78; obj* x_79; 
lean::dec(x_64);
x_77 = lean::box(0);
x_78 = lean::box(3);
x_79 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_79, 0, x_37);
lean::cnstr_set(x_79, 1, x_78);
lean::cnstr_set(x_79, 2, x_77);
return x_79;
}
}
}
}
}
}
}
obj* l_lean_parser_level_paren_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 2);
lean::inc(x_5);
lean::dec(x_0);
x_8 = l_lean_parser_raw_view___rarg___lambda__3___closed__1;
x_9 = l_option_map___rarg(x_8, x_1);
x_10 = lean::box(3);
x_11 = l_option_get__or__else___main___rarg(x_9, x_10);
x_12 = l_option_map___rarg(x_8, x_5);
x_13 = l_option_get__or__else___main___rarg(x_12, x_10);
x_14 = lean::box(0);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_13);
lean::cnstr_set(x_15, 1, x_14);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_3);
lean::cnstr_set(x_16, 1, x_15);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_11);
lean::cnstr_set(x_17, 1, x_16);
x_18 = l_lean_parser_level_paren;
x_19 = l_lean_parser_syntax_mk__node(x_18, x_17);
return x_19;
}
}
obj* _init_l_lean_parser_level_paren_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_level_paren_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_level_paren_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_level_paren_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_level_paren_has__view_x_27;
return x_0;
}
}
obj* l_lean_parser_symbol__core___at_lean_parser_level_paren_parser_lean_parser_has__tokens___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_11; obj* x_12; obj* x_14; obj* x_18; 
lean::dec(x_3);
lean::dec(x_1);
lean::inc(x_5);
lean::inc(x_4);
x_11 = l_lean_parser_token(x_4, x_5, x_6);
x_12 = lean::cnstr_get(x_11, 0);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_11, 1);
lean::inc(x_14);
lean::dec(x_11);
lean::inc(x_0);
x_18 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_18, 0, x_0);
if (lean::obj_tag(x_12) == 0)
{
obj* x_19; obj* x_21; obj* x_23; obj* x_25; obj* x_26; 
x_19 = lean::cnstr_get(x_12, 0);
x_21 = lean::cnstr_get(x_12, 1);
x_23 = lean::cnstr_get(x_12, 2);
if (lean::is_exclusive(x_12)) {
 lean::cnstr_set(x_12, 0, lean::box(0));
 lean::cnstr_set(x_12, 1, lean::box(0));
 lean::cnstr_set(x_12, 2, lean::box(0));
 x_25 = x_12;
} else {
 lean::inc(x_19);
 lean::inc(x_21);
 lean::inc(x_23);
 lean::dec(x_12);
 x_25 = lean::box(0);
}
switch (lean::obj_tag(x_19)) {
case 0:
{
obj* x_28; obj* x_30; uint8 x_33; 
x_28 = lean::cnstr_get(x_19, 0);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_28, 1);
lean::inc(x_30);
lean::dec(x_28);
x_33 = lean::string_dec_eq(x_0, x_30);
lean::dec(x_0);
if (x_33 == 0)
{
obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
lean::dec(x_25);
x_36 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_36, 0, x_5);
x_37 = lean::box(0);
x_38 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_30, x_2, x_36, x_37, x_4, x_21, x_14);
x_39 = lean::cnstr_get(x_38, 0);
lean::inc(x_39);
if (lean::obj_tag(x_39) == 0)
{
obj* x_41; obj* x_44; obj* x_46; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; 
x_41 = lean::cnstr_get(x_38, 1);
lean::inc(x_41);
lean::dec(x_38);
x_44 = lean::cnstr_get(x_39, 1);
x_46 = lean::cnstr_get(x_39, 2);
if (lean::is_exclusive(x_39)) {
 lean::cnstr_release(x_39, 0);
 x_48 = x_39;
} else {
 lean::inc(x_44);
 lean::inc(x_46);
 lean::dec(x_39);
 x_48 = lean::box(0);
}
x_49 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_48)) {
 x_50 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_50 = x_48;
}
lean::cnstr_set(x_50, 0, x_19);
lean::cnstr_set(x_50, 1, x_44);
lean::cnstr_set(x_50, 2, x_49);
x_51 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_46, x_50);
x_52 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_23, x_51);
x_53 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_49, x_52);
x_54 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_53, x_18);
x_55 = l_lean_parser_parsec__t_try__mk__res___rarg(x_54);
x_56 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_56, 0, x_55);
lean::cnstr_set(x_56, 1, x_41);
return x_56;
}
else
{
obj* x_58; obj* x_61; uint8 x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; 
lean::dec(x_19);
x_58 = lean::cnstr_get(x_38, 1);
lean::inc(x_58);
lean::dec(x_38);
x_61 = lean::cnstr_get(x_39, 0);
x_63 = lean::cnstr_get_scalar<uint8>(x_39, sizeof(void*)*1);
if (lean::is_exclusive(x_39)) {
 x_64 = x_39;
} else {
 lean::inc(x_61);
 lean::dec(x_39);
 x_64 = lean::box(0);
}
if (lean::is_scalar(x_64)) {
 x_65 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_65 = x_64;
}
lean::cnstr_set(x_65, 0, x_61);
lean::cnstr_set_scalar(x_65, sizeof(void*)*1, x_63);
x_66 = x_65;
x_67 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_23, x_66);
x_68 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_69 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_68, x_67);
x_70 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_69, x_18);
x_71 = l_lean_parser_parsec__t_try__mk__res___rarg(x_70);
x_72 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_72, 0, x_71);
lean::cnstr_set(x_72, 1, x_58);
return x_72;
}
}
else
{
obj* x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_83; obj* x_84; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_2);
lean::dec(x_30);
x_77 = l_lean_parser_finish__comment__block___closed__2;
if (lean::is_scalar(x_25)) {
 x_78 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_78 = x_25;
}
lean::cnstr_set(x_78, 0, x_19);
lean::cnstr_set(x_78, 1, x_21);
lean::cnstr_set(x_78, 2, x_77);
x_79 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_23, x_78);
x_80 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_81 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_80, x_79);
x_82 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_81, x_18);
x_83 = l_lean_parser_parsec__t_try__mk__res___rarg(x_82);
x_84 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_84, 0, x_83);
lean::cnstr_set(x_84, 1, x_14);
return x_84;
}
}
case 3:
{
obj* x_87; 
lean::dec(x_0);
lean::dec(x_25);
x_87 = lean::box(0);
x_26 = x_87;
goto lbl_27;
}
default:
{
obj* x_91; 
lean::dec(x_0);
lean::dec(x_19);
lean::dec(x_25);
x_91 = lean::box(0);
x_26 = x_91;
goto lbl_27;
}
}
lbl_27:
{
obj* x_93; obj* x_94; obj* x_95; obj* x_96; obj* x_97; obj* x_99; obj* x_102; obj* x_103; obj* x_104; obj* x_105; obj* x_106; obj* x_107; 
lean::dec(x_26);
x_93 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_93, 0, x_5);
x_94 = lean::box(0);
x_95 = l_string_join___closed__1;
x_96 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_95, x_2, x_93, x_94, x_4, x_21, x_14);
x_97 = lean::cnstr_get(x_96, 0);
lean::inc(x_97);
x_99 = lean::cnstr_get(x_96, 1);
lean::inc(x_99);
lean::dec(x_96);
x_102 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_23, x_97);
x_103 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_104 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_103, x_102);
x_105 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_104, x_18);
x_106 = l_lean_parser_parsec__t_try__mk__res___rarg(x_105);
x_107 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_107, 0, x_106);
lean::cnstr_set(x_107, 1, x_99);
return x_107;
}
}
else
{
obj* x_112; uint8 x_114; obj* x_115; obj* x_116; obj* x_117; obj* x_118; obj* x_119; obj* x_120; obj* x_121; obj* x_122; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_0);
lean::dec(x_2);
x_112 = lean::cnstr_get(x_12, 0);
x_114 = lean::cnstr_get_scalar<uint8>(x_12, sizeof(void*)*1);
if (lean::is_exclusive(x_12)) {
 x_115 = x_12;
} else {
 lean::inc(x_112);
 lean::dec(x_12);
 x_115 = lean::box(0);
}
if (lean::is_scalar(x_115)) {
 x_116 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_116 = x_115;
}
lean::cnstr_set(x_116, 0, x_112);
lean::cnstr_set_scalar(x_116, sizeof(void*)*1, x_114);
x_117 = x_116;
x_118 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_119 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_118, x_117);
x_120 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_119, x_18);
x_121 = l_lean_parser_parsec__t_try__mk__res___rarg(x_120);
x_122 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_122, 0, x_121);
lean::cnstr_set(x_122, 1, x_14);
return x_122;
}
}
}
obj* _init_l_lean_parser_level_paren_parser_lean_parser_has__tokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_0 = lean::mk_string("(");
x_1 = l_lean_parser_max__prec;
x_2 = l_lean_parser_symbol_tokens___rarg(x_0, x_1);
x_3 = lean::mk_string(")");
x_4 = lean::mk_nat_obj(0u);
x_5 = l_lean_parser_symbol_tokens___rarg(x_3, x_4);
x_6 = lean::box(0);
x_7 = l_lean_parser_list_cons_tokens___rarg(x_5, x_6);
x_8 = l_lean_parser_level_parser_lean_parser_has__tokens___closed__1;
x_9 = l_lean_parser_list_cons_tokens___rarg(x_8, x_7);
x_10 = l_lean_parser_list_cons_tokens___rarg(x_2, x_9);
x_11 = l_lean_parser_tokens___rarg(x_10);
return x_11;
}
}
obj* _init_l_lean_parser_level_paren_parser_lean_parser_has__view() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_0 = lean::mk_string("(");
x_1 = l_string_trim(x_0);
lean::inc(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_3, 0, x_1);
x_4 = l_lean_parser_max__prec;
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_level_paren_parser_lean_parser_has__tokens___spec__1), 7, 3);
lean::closure_set(x_5, 0, x_1);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::mk_nat_obj(0u);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_level_parser), 5, 1);
lean::closure_set(x_7, 0, x_6);
x_8 = lean::mk_string(")");
x_9 = l_string_trim(x_8);
lean::inc(x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_11, 0, x_9);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_level_paren_parser_lean_parser_has__tokens___spec__1), 7, 3);
lean::closure_set(x_12, 0, x_9);
lean::closure_set(x_12, 1, x_6);
lean::closure_set(x_12, 2, x_11);
x_13 = lean::box(0);
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_12);
lean::cnstr_set(x_14, 1, x_13);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_7);
lean::cnstr_set(x_15, 1, x_14);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_5);
lean::cnstr_set(x_16, 1, x_15);
x_17 = l_lean_parser_level__parser__m_monad;
x_18 = l_lean_parser_level__parser__m_monad__except;
x_19 = l_lean_parser_level__parser__m_lean_parser_monad__parsec;
x_20 = l_lean_parser_level__parser__m_alternative;
x_21 = l_lean_parser_level_paren;
x_22 = l_lean_parser_level_paren_has__view;
x_23 = l_lean_parser_combinators_node_view___rarg(x_17, x_18, x_19, x_20, x_21, x_16, x_22);
return x_23;
}
}
obj* l_list_mfoldl___main___at_lean_parser_level_paren_parser___spec__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_10; obj* x_11; obj* x_12; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_0);
x_10 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_11 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_11, 0, x_1);
lean::cnstr_set(x_11, 1, x_5);
lean::cnstr_set(x_11, 2, x_10);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_6);
return x_12;
}
else
{
obj* x_13; obj* x_15; obj* x_17; obj* x_18; obj* x_19; obj* x_23; obj* x_24; 
x_13 = lean::cnstr_get(x_2, 0);
x_15 = lean::cnstr_get(x_2, 1);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_set(x_2, 0, lean::box(0));
 lean::cnstr_set(x_2, 1, lean::box(0));
 x_17 = x_2;
} else {
 lean::inc(x_13);
 lean::inc(x_15);
 lean::dec(x_2);
 x_17 = lean::box(0);
}
lean::inc(x_4);
lean::inc(x_3);
x_23 = lean::apply_4(x_13, x_3, x_4, x_5, x_6);
x_24 = lean::cnstr_get(x_23, 0);
lean::inc(x_24);
if (lean::obj_tag(x_24) == 0)
{
obj* x_26; 
x_26 = lean::cnstr_get(x_23, 1);
lean::inc(x_26);
lean::dec(x_23);
x_18 = x_24;
x_19 = x_26;
goto lbl_20;
}
else
{
obj* x_29; obj* x_32; uint8 x_34; obj* x_35; 
x_29 = lean::cnstr_get(x_23, 1);
lean::inc(x_29);
lean::dec(x_23);
x_32 = lean::cnstr_get(x_24, 0);
x_34 = lean::cnstr_get_scalar<uint8>(x_24, sizeof(void*)*1);
if (lean::is_exclusive(x_24)) {
 lean::cnstr_set(x_24, 0, lean::box(0));
 x_35 = x_24;
} else {
 lean::inc(x_32);
 lean::dec(x_24);
 x_35 = lean::box(0);
}
if (lean::obj_tag(x_1) == 0)
{
if (x_34 == 0)
{
uint8 x_36; obj* x_37; obj* x_38; 
x_36 = 0;
if (lean::is_scalar(x_35)) {
 x_37 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_37 = x_35;
}
lean::cnstr_set(x_37, 0, x_32);
lean::cnstr_set_scalar(x_37, sizeof(void*)*1, x_36);
x_38 = x_37;
x_18 = x_38;
x_19 = x_29;
goto lbl_20;
}
else
{
obj* x_39; obj* x_40; 
if (lean::is_scalar(x_35)) {
 x_39 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_39 = x_35;
}
lean::cnstr_set(x_39, 0, x_32);
lean::cnstr_set_scalar(x_39, sizeof(void*)*1, x_34);
x_40 = x_39;
x_18 = x_40;
x_19 = x_29;
goto lbl_20;
}
}
else
{
obj* x_41; obj* x_43; obj* x_45; obj* x_46; obj* x_48; obj* x_50; obj* x_53; obj* x_55; obj* x_56; obj* x_57; 
x_41 = lean::cnstr_get(x_32, 3);
lean::inc(x_41);
x_43 = l_option_get___main___at_lean_parser_run___spec__2(x_41);
lean::inc(x_1);
x_45 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_45, 0, x_43);
lean::cnstr_set(x_45, 1, x_1);
x_46 = lean::cnstr_get(x_32, 0);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_32, 1);
lean::inc(x_48);
x_50 = lean::cnstr_get(x_32, 2);
lean::inc(x_50);
lean::dec(x_32);
x_53 = l_list_reverse___rarg(x_45);
lean::inc(x_0);
x_55 = l_lean_parser_syntax_mk__node(x_0, x_53);
x_56 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_56, 0, x_55);
x_57 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_57, 0, x_46);
lean::cnstr_set(x_57, 1, x_48);
lean::cnstr_set(x_57, 2, x_50);
lean::cnstr_set(x_57, 3, x_56);
if (x_34 == 0)
{
uint8 x_58; obj* x_59; obj* x_60; 
x_58 = 0;
if (lean::is_scalar(x_35)) {
 x_59 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_59 = x_35;
}
lean::cnstr_set(x_59, 0, x_57);
lean::cnstr_set_scalar(x_59, sizeof(void*)*1, x_58);
x_60 = x_59;
x_18 = x_60;
x_19 = x_29;
goto lbl_20;
}
else
{
obj* x_61; obj* x_62; 
if (lean::is_scalar(x_35)) {
 x_61 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_61 = x_35;
}
lean::cnstr_set(x_61, 0, x_57);
lean::cnstr_set_scalar(x_61, sizeof(void*)*1, x_34);
x_62 = x_61;
x_18 = x_62;
x_19 = x_29;
goto lbl_20;
}
}
}
lbl_20:
{
if (lean::obj_tag(x_18) == 0)
{
obj* x_63; obj* x_65; obj* x_67; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; 
x_63 = lean::cnstr_get(x_18, 0);
x_65 = lean::cnstr_get(x_18, 1);
x_67 = lean::cnstr_get(x_18, 2);
if (lean::is_exclusive(x_18)) {
 x_69 = x_18;
} else {
 lean::inc(x_63);
 lean::inc(x_65);
 lean::inc(x_67);
 lean::dec(x_18);
 x_69 = lean::box(0);
}
if (lean::is_scalar(x_17)) {
 x_70 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_70 = x_17;
}
lean::cnstr_set(x_70, 0, x_63);
lean::cnstr_set(x_70, 1, x_1);
x_71 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_69)) {
 x_72 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_72 = x_69;
}
lean::cnstr_set(x_72, 0, x_70);
lean::cnstr_set(x_72, 1, x_65);
lean::cnstr_set(x_72, 2, x_71);
x_73 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_67, x_72);
if (lean::obj_tag(x_73) == 0)
{
obj* x_74; obj* x_76; obj* x_78; obj* x_81; obj* x_82; obj* x_84; obj* x_87; obj* x_88; 
x_74 = lean::cnstr_get(x_73, 0);
lean::inc(x_74);
x_76 = lean::cnstr_get(x_73, 1);
lean::inc(x_76);
x_78 = lean::cnstr_get(x_73, 2);
lean::inc(x_78);
lean::dec(x_73);
x_81 = l_list_mfoldl___main___at_lean_parser_level_paren_parser___spec__2(x_0, x_74, x_15, x_3, x_4, x_76, x_19);
x_82 = lean::cnstr_get(x_81, 0);
lean::inc(x_82);
x_84 = lean::cnstr_get(x_81, 1);
lean::inc(x_84);
lean::dec(x_81);
x_87 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_78, x_82);
x_88 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_88, 0, x_87);
lean::cnstr_set(x_88, 1, x_84);
return x_88;
}
else
{
obj* x_93; uint8 x_95; obj* x_96; obj* x_97; obj* x_98; obj* x_99; 
lean::dec(x_15);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_0);
x_93 = lean::cnstr_get(x_73, 0);
x_95 = lean::cnstr_get_scalar<uint8>(x_73, sizeof(void*)*1);
if (lean::is_exclusive(x_73)) {
 x_96 = x_73;
} else {
 lean::inc(x_93);
 lean::dec(x_73);
 x_96 = lean::box(0);
}
if (lean::is_scalar(x_96)) {
 x_97 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_97 = x_96;
}
lean::cnstr_set(x_97, 0, x_93);
lean::cnstr_set_scalar(x_97, sizeof(void*)*1, x_95);
x_98 = x_97;
x_99 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_99, 0, x_98);
lean::cnstr_set(x_99, 1, x_19);
return x_99;
}
}
else
{
obj* x_106; uint8 x_108; obj* x_109; obj* x_110; obj* x_111; obj* x_112; 
lean::dec(x_15);
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_17);
x_106 = lean::cnstr_get(x_18, 0);
x_108 = lean::cnstr_get_scalar<uint8>(x_18, sizeof(void*)*1);
if (lean::is_exclusive(x_18)) {
 x_109 = x_18;
} else {
 lean::inc(x_106);
 lean::dec(x_18);
 x_109 = lean::box(0);
}
if (lean::is_scalar(x_109)) {
 x_110 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_110 = x_109;
}
lean::cnstr_set(x_110, 0, x_106);
lean::cnstr_set_scalar(x_110, sizeof(void*)*1, x_108);
x_111 = x_110;
x_112 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_112, 0, x_111);
lean::cnstr_set(x_112, 1, x_19);
return x_112;
}
}
}
}
}
obj* l_lean_parser_combinators_node___at_lean_parser_level_paren_parser___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_8; obj* x_9; 
x_6 = lean::box(0);
lean::inc(x_0);
x_8 = l_list_mfoldl___main___at_lean_parser_level_paren_parser___spec__2(x_0, x_6, x_1, x_2, x_3, x_4, x_5);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
if (lean::obj_tag(x_9) == 0)
{
obj* x_11; obj* x_14; obj* x_16; obj* x_18; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
lean::dec(x_8);
x_14 = lean::cnstr_get(x_9, 0);
x_16 = lean::cnstr_get(x_9, 1);
x_18 = lean::cnstr_get(x_9, 2);
if (lean::is_exclusive(x_9)) {
 x_20 = x_9;
} else {
 lean::inc(x_14);
 lean::inc(x_16);
 lean::inc(x_18);
 lean::dec(x_9);
 x_20 = lean::box(0);
}
x_21 = l_list_reverse___rarg(x_14);
x_22 = l_lean_parser_syntax_mk__node(x_0, x_21);
x_23 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_20)) {
 x_24 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_24 = x_20;
}
lean::cnstr_set(x_24, 0, x_22);
lean::cnstr_set(x_24, 1, x_16);
lean::cnstr_set(x_24, 2, x_23);
x_25 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_18, x_24);
x_26 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_11);
return x_26;
}
else
{
obj* x_28; obj* x_31; uint8 x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; 
lean::dec(x_0);
x_28 = lean::cnstr_get(x_8, 1);
lean::inc(x_28);
lean::dec(x_8);
x_31 = lean::cnstr_get(x_9, 0);
x_33 = lean::cnstr_get_scalar<uint8>(x_9, sizeof(void*)*1);
if (lean::is_exclusive(x_9)) {
 x_34 = x_9;
} else {
 lean::inc(x_31);
 lean::dec(x_9);
 x_34 = lean::box(0);
}
if (lean::is_scalar(x_34)) {
 x_35 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_35 = x_34;
}
lean::cnstr_set(x_35, 0, x_31);
lean::cnstr_set_scalar(x_35, sizeof(void*)*1, x_33);
x_36 = x_35;
x_37 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_28);
return x_37;
}
}
}
obj* _init_l_lean_parser_level_paren_parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_0 = lean::mk_string("(");
x_1 = l_string_trim(x_0);
lean::inc(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_3, 0, x_1);
x_4 = l_lean_parser_max__prec;
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_level_paren_parser_lean_parser_has__tokens___spec__1), 7, 3);
lean::closure_set(x_5, 0, x_1);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::mk_nat_obj(0u);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_level_parser), 5, 1);
lean::closure_set(x_7, 0, x_6);
x_8 = lean::mk_string(")");
x_9 = l_string_trim(x_8);
lean::inc(x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_11, 0, x_9);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_level_paren_parser_lean_parser_has__tokens___spec__1), 7, 3);
lean::closure_set(x_12, 0, x_9);
lean::closure_set(x_12, 1, x_6);
lean::closure_set(x_12, 2, x_11);
x_13 = lean::box(0);
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_12);
lean::cnstr_set(x_14, 1, x_13);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_7);
lean::cnstr_set(x_15, 1, x_14);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_5);
lean::cnstr_set(x_16, 1, x_15);
return x_16;
}
}
obj* l_lean_parser_level_paren_parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = l_lean_parser_level_paren;
x_5 = l_lean_parser_level_paren_parser___closed__1;
x_6 = l_lean_parser_combinators_node___at_lean_parser_level_paren_parser___spec__1(x_4, x_5, x_0, x_1, x_2, x_3);
return x_6;
}
}
obj* _init_l_lean_parser_level_leading() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("level");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("leading");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("NOT_AN_IDENT");
lean::inc(x_1);
x_3 = l_lean_parser_substring_of__string(x_1);
x_4 = lean::box(0);
x_5 = lean_name_mk_string(x_4, x_1);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_7, 0, x_0);
lean::cnstr_set(x_7, 1, x_3);
lean::cnstr_set(x_7, 2, x_5);
lean::cnstr_set(x_7, 3, x_6);
lean::cnstr_set(x_7, 4, x_6);
x_8 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
return x_8;
}
}
obj* _init_l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__1;
return x_0;
}
}
obj* _init_l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__3() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_3 = lean::box(3);
x_4 = lean::mk_nat_obj(0u);
x_0 = x_3;
x_1 = x_4;
goto lbl_2;
lbl_2:
{
obj* x_5; uint8 x_6; 
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::nat_dec_eq(x_1, x_5);
if (x_6 == 0)
{
obj* x_7; uint8 x_8; 
x_7 = lean::mk_nat_obj(1u);
x_8 = lean::nat_dec_eq(x_1, x_7);
if (x_8 == 0)
{
obj* x_9; uint8 x_10; 
x_9 = lean::mk_nat_obj(2u);
x_10 = lean::nat_dec_eq(x_1, x_9);
if (x_10 == 0)
{
obj* x_11; uint8 x_12; 
x_11 = lean::mk_nat_obj(3u);
x_12 = lean::nat_dec_eq(x_1, x_11);
if (x_12 == 0)
{
obj* x_13; uint8 x_14; 
x_13 = lean::mk_nat_obj(4u);
x_14 = lean::nat_dec_eq(x_1, x_13);
lean::dec(x_1);
if (x_14 == 0)
{
switch (lean::obj_tag(x_0)) {
case 1:
{
obj* x_16; obj* x_19; 
x_16 = lean::cnstr_get(x_0, 0);
lean::inc(x_16);
lean::dec(x_0);
x_19 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_19, 0, x_16);
return x_19;
}
case 3:
{
obj* x_20; 
x_20 = l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__2;
return x_20;
}
default:
{
obj* x_22; 
lean::dec(x_0);
x_22 = l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__2;
return x_22;
}
}
}
else
{
obj* x_23; obj* x_24; obj* x_27; obj* x_28; 
x_23 = l_lean_parser_number_has__view;
x_24 = lean::cnstr_get(x_23, 0);
lean::inc(x_24);
lean::dec(x_23);
x_27 = lean::apply_1(x_24, x_0);
x_28 = lean::alloc_cnstr(4, 1, 0);
lean::cnstr_set(x_28, 0, x_27);
return x_28;
}
}
else
{
obj* x_30; obj* x_31; obj* x_34; obj* x_35; 
lean::dec(x_1);
x_30 = l_lean_parser_level_paren_has__view;
x_31 = lean::cnstr_get(x_30, 0);
lean::inc(x_31);
lean::dec(x_30);
x_34 = lean::apply_1(x_31, x_0);
x_35 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_35, 0, x_34);
return x_35;
}
}
else
{
lean::dec(x_1);
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_37; obj* x_40; obj* x_41; 
x_37 = lean::cnstr_get(x_0, 0);
lean::inc(x_37);
lean::dec(x_0);
x_40 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_40, 0, x_37);
x_41 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_41, 0, x_40);
return x_41;
}
case 3:
{
obj* x_42; 
x_42 = l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__3;
return x_42;
}
default:
{
obj* x_44; 
lean::dec(x_0);
x_44 = l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__3;
return x_44;
}
}
}
}
else
{
obj* x_46; 
lean::dec(x_1);
x_46 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_46, 0, x_0);
return x_46;
}
}
else
{
obj* x_48; 
lean::dec(x_1);
x_48 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_48, 0, x_0);
return x_48;
}
}
}
}
obj* _init_l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__5() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("level");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("leading");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* l_lean_parser_level_leading_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__4;
return x_5;
}
else
{
obj* x_6; obj* x_9; obj* x_11; obj* x_14; uint8 x_15; 
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
x_9 = lean::cnstr_get(x_6, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_6, 1);
lean::inc(x_11);
lean::dec(x_6);
x_14 = l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__5;
x_15 = lean_name_dec_eq(x_9, x_14);
lean::dec(x_9);
if (x_15 == 0)
{
obj* x_18; 
lean::dec(x_11);
x_18 = l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__4;
return x_18;
}
else
{
if (lean::obj_tag(x_11) == 0)
{
obj* x_19; 
x_19 = l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__4;
return x_19;
}
else
{
obj* x_20; 
x_20 = lean::cnstr_get(x_11, 1);
lean::inc(x_20);
if (lean::obj_tag(x_20) == 0)
{
obj* x_22; obj* x_25; 
x_22 = lean::cnstr_get(x_11, 0);
lean::inc(x_22);
lean::dec(x_11);
x_25 = l_lean_parser_syntax_as__node___main(x_22);
if (lean::obj_tag(x_25) == 0)
{
obj* x_26; 
x_26 = l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__4;
return x_26;
}
else
{
obj* x_27; obj* x_30; 
x_27 = lean::cnstr_get(x_25, 0);
lean::inc(x_27);
lean::dec(x_25);
x_30 = lean::cnstr_get(x_27, 0);
lean::inc(x_30);
switch (lean::obj_tag(x_30)) {
case 0:
{
obj* x_33; 
lean::dec(x_27);
x_33 = l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__4;
return x_33;
}
case 1:
{
obj* x_36; 
lean::dec(x_27);
lean::dec(x_30);
x_36 = l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__4;
return x_36;
}
default:
{
obj* x_37; obj* x_40; obj* x_42; obj* x_45; uint8 x_46; 
x_37 = lean::cnstr_get(x_27, 1);
lean::inc(x_37);
lean::dec(x_27);
x_40 = lean::cnstr_get(x_30, 0);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_30, 1);
lean::inc(x_42);
lean::dec(x_30);
x_45 = lean::box(0);
x_46 = lean_name_dec_eq(x_40, x_45);
lean::dec(x_40);
if (x_46 == 0)
{
obj* x_50; 
lean::dec(x_42);
lean::dec(x_37);
x_50 = l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__4;
return x_50;
}
else
{
if (lean::obj_tag(x_37) == 0)
{
obj* x_52; 
lean::dec(x_42);
x_52 = l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__4;
return x_52;
}
else
{
obj* x_53; 
x_53 = lean::cnstr_get(x_37, 1);
lean::inc(x_53);
if (lean::obj_tag(x_53) == 0)
{
obj* x_55; 
x_55 = lean::cnstr_get(x_37, 0);
lean::inc(x_55);
lean::dec(x_37);
x_1 = x_55;
x_2 = x_42;
goto lbl_3;
}
else
{
obj* x_61; 
lean::dec(x_42);
lean::dec(x_53);
lean::dec(x_37);
x_61 = l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__4;
return x_61;
}
}
}
}
}
}
}
else
{
obj* x_64; 
lean::dec(x_11);
lean::dec(x_20);
x_64 = l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__4;
return x_64;
}
}
}
}
lbl_3:
{
obj* x_65; uint8 x_66; 
x_65 = lean::mk_nat_obj(0u);
x_66 = lean::nat_dec_eq(x_2, x_65);
if (x_66 == 0)
{
obj* x_67; uint8 x_68; 
x_67 = lean::mk_nat_obj(1u);
x_68 = lean::nat_dec_eq(x_2, x_67);
if (x_68 == 0)
{
obj* x_69; uint8 x_70; 
x_69 = lean::mk_nat_obj(2u);
x_70 = lean::nat_dec_eq(x_2, x_69);
if (x_70 == 0)
{
obj* x_71; uint8 x_72; 
x_71 = lean::mk_nat_obj(3u);
x_72 = lean::nat_dec_eq(x_2, x_71);
if (x_72 == 0)
{
obj* x_73; uint8 x_74; 
x_73 = lean::mk_nat_obj(4u);
x_74 = lean::nat_dec_eq(x_2, x_73);
lean::dec(x_2);
if (x_74 == 0)
{
switch (lean::obj_tag(x_1)) {
case 1:
{
obj* x_76; obj* x_79; 
x_76 = lean::cnstr_get(x_1, 0);
lean::inc(x_76);
lean::dec(x_1);
x_79 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_79, 0, x_76);
return x_79;
}
case 3:
{
obj* x_80; 
x_80 = l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__2;
return x_80;
}
default:
{
obj* x_82; 
lean::dec(x_1);
x_82 = l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__2;
return x_82;
}
}
}
else
{
obj* x_83; obj* x_84; obj* x_87; obj* x_88; 
x_83 = l_lean_parser_number_has__view;
x_84 = lean::cnstr_get(x_83, 0);
lean::inc(x_84);
lean::dec(x_83);
x_87 = lean::apply_1(x_84, x_1);
x_88 = lean::alloc_cnstr(4, 1, 0);
lean::cnstr_set(x_88, 0, x_87);
return x_88;
}
}
else
{
obj* x_90; obj* x_91; obj* x_94; obj* x_95; 
lean::dec(x_2);
x_90 = l_lean_parser_level_paren_has__view;
x_91 = lean::cnstr_get(x_90, 0);
lean::inc(x_91);
lean::dec(x_90);
x_94 = lean::apply_1(x_91, x_1);
x_95 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_95, 0, x_94);
return x_95;
}
}
else
{
lean::dec(x_2);
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_97; obj* x_100; obj* x_101; 
x_97 = lean::cnstr_get(x_1, 0);
lean::inc(x_97);
lean::dec(x_1);
x_100 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_100, 0, x_97);
x_101 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_101, 0, x_100);
return x_101;
}
case 3:
{
obj* x_102; 
x_102 = l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__3;
return x_102;
}
default:
{
obj* x_104; 
lean::dec(x_1);
x_104 = l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__3;
return x_104;
}
}
}
}
else
{
obj* x_106; 
lean::dec(x_2);
x_106 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_106, 0, x_1);
return x_106;
}
}
else
{
obj* x_108; 
lean::dec(x_2);
x_108 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_108, 0, x_1);
return x_108;
}
}
}
}
obj* _init_l_lean_parser_level_leading_has__view_x_27___lambda__2___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_nat_obj(4u);
x_2 = lean_name_mk_numeral(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_level_leading_has__view_x_27___lambda__2___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_nat_obj(5u);
x_2 = lean_name_mk_numeral(x_0, x_1);
return x_2;
}
}
obj* l_lean_parser_level_leading_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::box(0);
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_2; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_2);
lean::cnstr_set(x_5, 1, x_1);
x_6 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__1;
x_7 = l_lean_parser_syntax_mk__node(x_6, x_5);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_1);
x_9 = l_lean_parser_level_leading;
x_10 = l_lean_parser_syntax_mk__node(x_9, x_8);
return x_10;
}
case 1:
{
obj* x_11; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_11 = lean::cnstr_get(x_0, 0);
lean::inc(x_11);
lean::dec(x_0);
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_11);
lean::cnstr_set(x_14, 1, x_1);
x_15 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__2;
x_16 = l_lean_parser_syntax_mk__node(x_15, x_14);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_1);
x_18 = l_lean_parser_level_leading;
x_19 = l_lean_parser_syntax_mk__node(x_18, x_17);
return x_19;
}
case 2:
{
obj* x_20; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; 
x_20 = lean::cnstr_get(x_0, 0);
lean::inc(x_20);
lean::dec(x_0);
x_23 = l_lean_parser_raw_view___rarg___lambda__3___closed__1;
x_24 = l_option_map___rarg(x_23, x_20);
x_25 = lean::box(3);
x_26 = l_option_get__or__else___main___rarg(x_24, x_25);
x_27 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_1);
x_28 = l_lean_parser_number_has__view_x_27___lambda__2___closed__1;
x_29 = l_lean_parser_syntax_mk__node(x_28, x_27);
x_30 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_1);
x_31 = l_lean_parser_level_leading;
x_32 = l_lean_parser_syntax_mk__node(x_31, x_30);
return x_32;
}
case 3:
{
obj* x_33; obj* x_36; obj* x_37; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
x_33 = lean::cnstr_get(x_0, 0);
lean::inc(x_33);
lean::dec(x_0);
x_36 = l_lean_parser_level_paren_has__view;
x_37 = lean::cnstr_get(x_36, 1);
lean::inc(x_37);
lean::dec(x_36);
x_40 = lean::apply_1(x_37, x_33);
x_41 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_41, 0, x_40);
lean::cnstr_set(x_41, 1, x_1);
x_42 = l_lean_parser_number_has__view_x_27___lambda__2___closed__2;
x_43 = l_lean_parser_syntax_mk__node(x_42, x_41);
x_44 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_44, 0, x_43);
lean::cnstr_set(x_44, 1, x_1);
x_45 = l_lean_parser_level_leading;
x_46 = l_lean_parser_syntax_mk__node(x_45, x_44);
return x_46;
}
case 4:
{
obj* x_47; obj* x_50; obj* x_51; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
x_47 = lean::cnstr_get(x_0, 0);
lean::inc(x_47);
lean::dec(x_0);
x_50 = l_lean_parser_number_has__view;
x_51 = lean::cnstr_get(x_50, 1);
lean::inc(x_51);
lean::dec(x_50);
x_54 = lean::apply_1(x_51, x_47);
x_55 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_55, 0, x_54);
lean::cnstr_set(x_55, 1, x_1);
x_56 = l_lean_parser_level_leading_has__view_x_27___lambda__2___closed__1;
x_57 = l_lean_parser_syntax_mk__node(x_56, x_55);
x_58 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_58, 0, x_57);
lean::cnstr_set(x_58, 1, x_1);
x_59 = l_lean_parser_level_leading;
x_60 = l_lean_parser_syntax_mk__node(x_59, x_58);
return x_60;
}
default:
{
obj* x_61; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; 
x_61 = lean::cnstr_get(x_0, 0);
lean::inc(x_61);
lean::dec(x_0);
x_64 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_64, 0, x_61);
x_65 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_65, 0, x_64);
lean::cnstr_set(x_65, 1, x_1);
x_66 = l_lean_parser_level_leading_has__view_x_27___lambda__2___closed__2;
x_67 = l_lean_parser_syntax_mk__node(x_66, x_65);
x_68 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_68, 0, x_67);
lean::cnstr_set(x_68, 1, x_1);
x_69 = l_lean_parser_level_leading;
x_70 = l_lean_parser_syntax_mk__node(x_69, x_68);
return x_70;
}
}
}
}
obj* _init_l_lean_parser_level_leading_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_level_leading_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_level_leading_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_level_leading_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_level_leading_has__view_x_27;
return x_0;
}
}
obj* l_lean_parser_symbol__or__ident___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_8; obj* x_9; 
lean::dec(x_1);
lean::inc(x_3);
lean::inc(x_2);
x_8 = l_lean_parser_token(x_2, x_3, x_4);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
if (lean::obj_tag(x_9) == 0)
{
obj* x_11; obj* x_14; obj* x_16; obj* x_18; obj* x_20; obj* x_21; 
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
lean::dec(x_8);
x_14 = lean::cnstr_get(x_9, 0);
x_16 = lean::cnstr_get(x_9, 1);
x_18 = lean::cnstr_get(x_9, 2);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_set(x_9, 0, lean::box(0));
 lean::cnstr_set(x_9, 1, lean::box(0));
 lean::cnstr_set(x_9, 2, lean::box(0));
 x_20 = x_9;
} else {
 lean::inc(x_14);
 lean::inc(x_16);
 lean::inc(x_18);
 lean::dec(x_9);
 x_20 = lean::box(0);
}
switch (lean::obj_tag(x_14)) {
case 0:
{
obj* x_23; obj* x_25; obj* x_28; 
x_23 = lean::cnstr_get(x_14, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_23, 1);
lean::inc(x_25);
lean::dec(x_23);
x_28 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_28, 0, x_25);
x_21 = x_28;
goto lbl_22;
}
case 1:
{
obj* x_29; obj* x_31; obj* x_34; obj* x_35; 
x_29 = lean::cnstr_get(x_14, 0);
lean::inc(x_29);
x_31 = lean::cnstr_get(x_29, 1);
lean::inc(x_31);
lean::dec(x_29);
x_34 = l_lean_parser_substring_to__string(x_31);
x_35 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_35, 0, x_34);
x_21 = x_35;
goto lbl_22;
}
default:
{
obj* x_36; 
x_36 = lean::box(0);
x_21 = x_36;
goto lbl_22;
}
}
lbl_22:
{
uint8 x_37; 
if (lean::obj_tag(x_21) == 0)
{
uint8 x_39; 
x_39 = 1;
x_37 = x_39;
goto lbl_38;
}
else
{
obj* x_40; uint8 x_43; 
x_40 = lean::cnstr_get(x_21, 0);
lean::inc(x_40);
lean::dec(x_21);
x_43 = lean::string_dec_eq(x_40, x_0);
lean::dec(x_40);
if (x_43 == 0)
{
uint8 x_45; 
x_45 = 1;
x_37 = x_45;
goto lbl_38;
}
else
{
uint8 x_46; 
x_46 = 0;
x_37 = x_46;
goto lbl_38;
}
}
lbl_38:
{
if (x_37 == 0)
{
obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
x_50 = l_lean_parser_finish__comment__block___closed__2;
if (lean::is_scalar(x_20)) {
 x_51 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_51 = x_20;
}
lean::cnstr_set(x_51, 0, x_14);
lean::cnstr_set(x_51, 1, x_16);
lean::cnstr_set(x_51, 2, x_50);
x_52 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_18, x_51);
x_53 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_54 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_53, x_52);
x_55 = l_lean_parser_parsec__t_try__mk__res___rarg(x_54);
x_56 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_56, 0, x_55);
lean::cnstr_set(x_56, 1, x_11);
return x_56;
}
else
{
obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; 
lean::dec(x_20);
x_58 = l_string_quote(x_0);
x_59 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_59, 0, x_58);
x_60 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_60, 0, x_3);
x_61 = lean::box(0);
x_62 = l_string_join___closed__1;
x_63 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_62, x_59, x_60, x_61, x_2, x_16, x_11);
x_64 = lean::cnstr_get(x_63, 0);
lean::inc(x_64);
if (lean::obj_tag(x_64) == 0)
{
obj* x_66; obj* x_69; obj* x_71; obj* x_73; obj* x_74; obj* x_75; obj* x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; 
x_66 = lean::cnstr_get(x_63, 1);
lean::inc(x_66);
lean::dec(x_63);
x_69 = lean::cnstr_get(x_64, 1);
x_71 = lean::cnstr_get(x_64, 2);
if (lean::is_exclusive(x_64)) {
 lean::cnstr_release(x_64, 0);
 x_73 = x_64;
} else {
 lean::inc(x_69);
 lean::inc(x_71);
 lean::dec(x_64);
 x_73 = lean::box(0);
}
x_74 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_73)) {
 x_75 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_75 = x_73;
}
lean::cnstr_set(x_75, 0, x_14);
lean::cnstr_set(x_75, 1, x_69);
lean::cnstr_set(x_75, 2, x_74);
x_76 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_71, x_75);
x_77 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_18, x_76);
x_78 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_74, x_77);
x_79 = l_lean_parser_parsec__t_try__mk__res___rarg(x_78);
x_80 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_80, 0, x_79);
lean::cnstr_set(x_80, 1, x_66);
return x_80;
}
else
{
obj* x_82; obj* x_85; uint8 x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; obj* x_93; obj* x_94; obj* x_95; 
lean::dec(x_14);
x_82 = lean::cnstr_get(x_63, 1);
lean::inc(x_82);
lean::dec(x_63);
x_85 = lean::cnstr_get(x_64, 0);
x_87 = lean::cnstr_get_scalar<uint8>(x_64, sizeof(void*)*1);
if (lean::is_exclusive(x_64)) {
 x_88 = x_64;
} else {
 lean::inc(x_85);
 lean::dec(x_64);
 x_88 = lean::box(0);
}
if (lean::is_scalar(x_88)) {
 x_89 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_89 = x_88;
}
lean::cnstr_set(x_89, 0, x_85);
lean::cnstr_set_scalar(x_89, sizeof(void*)*1, x_87);
x_90 = x_89;
x_91 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_18, x_90);
x_92 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_93 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_92, x_91);
x_94 = l_lean_parser_parsec__t_try__mk__res___rarg(x_93);
x_95 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_95, 0, x_94);
lean::cnstr_set(x_95, 1, x_82);
return x_95;
}
}
}
}
}
else
{
obj* x_99; obj* x_102; uint8 x_104; obj* x_105; obj* x_106; obj* x_107; obj* x_108; obj* x_109; obj* x_110; obj* x_111; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
x_99 = lean::cnstr_get(x_8, 1);
lean::inc(x_99);
lean::dec(x_8);
x_102 = lean::cnstr_get(x_9, 0);
x_104 = lean::cnstr_get_scalar<uint8>(x_9, sizeof(void*)*1);
if (lean::is_exclusive(x_9)) {
 x_105 = x_9;
} else {
 lean::inc(x_102);
 lean::dec(x_9);
 x_105 = lean::box(0);
}
if (lean::is_scalar(x_105)) {
 x_106 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_106 = x_105;
}
lean::cnstr_set(x_106, 0, x_102);
lean::cnstr_set_scalar(x_106, sizeof(void*)*1, x_104);
x_107 = x_106;
x_108 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_109 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_108, x_107);
x_110 = l_lean_parser_parsec__t_try__mk__res___rarg(x_109);
x_111 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_111, 0, x_110);
lean::cnstr_set(x_111, 1, x_99);
return x_111;
}
}
}
obj* _init_l_lean_parser_number_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__2___rarg___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("number");
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_lean_parser_number_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_5; obj* x_6; 
lean::inc(x_1);
lean::inc(x_0);
x_5 = l_lean_parser_token(x_0, x_1, x_2);
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_8; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_19; 
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
lean::dec(x_5);
x_11 = lean::cnstr_get(x_6, 0);
x_13 = lean::cnstr_get(x_6, 1);
x_15 = lean::cnstr_get(x_6, 2);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_set(x_6, 0, lean::box(0));
 lean::cnstr_set(x_6, 1, lean::box(0));
 lean::cnstr_set(x_6, 2, lean::box(0));
 x_17 = x_6;
} else {
 lean::inc(x_11);
 lean::inc(x_13);
 lean::inc(x_15);
 lean::dec(x_6);
 x_17 = lean::box(0);
}
lean::inc(x_11);
x_19 = l_lean_parser_try__view___at_lean_parser_number_parser___spec__1(x_11);
if (lean::obj_tag(x_19) == 0)
{
obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_29; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; 
lean::dec(x_17);
lean::dec(x_11);
x_22 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_22, 0, x_1);
x_23 = lean::box(0);
x_24 = l_string_join___closed__1;
x_25 = l_lean_parser_number_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__2___rarg___closed__1;
x_26 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_24, x_25, x_22, x_23, x_0, x_13, x_8);
x_27 = lean::cnstr_get(x_26, 0);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_26, 1);
lean::inc(x_29);
lean::dec(x_26);
x_32 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_33 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_32, x_27);
x_34 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_33);
x_35 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_32, x_34);
x_36 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_35, x_25);
x_37 = l_lean_parser_parsec__t_try__mk__res___rarg(x_36);
x_38 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_38, 0, x_37);
lean::cnstr_set(x_38, 1, x_29);
return x_38;
}
else
{
obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; 
lean::dec(x_19);
lean::dec(x_1);
lean::dec(x_0);
x_42 = l_lean_parser_finish__comment__block___closed__2;
if (lean::is_scalar(x_17)) {
 x_43 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_43 = x_17;
}
lean::cnstr_set(x_43, 0, x_11);
lean::cnstr_set(x_43, 1, x_13);
lean::cnstr_set(x_43, 2, x_42);
x_44 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_43);
x_45 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_46 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_45, x_44);
x_47 = l_lean_parser_number_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__2___rarg___closed__1;
x_48 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_46, x_47);
x_49 = l_lean_parser_parsec__t_try__mk__res___rarg(x_48);
x_50 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_50, 0, x_49);
lean::cnstr_set(x_50, 1, x_8);
return x_50;
}
}
else
{
obj* x_53; obj* x_56; uint8 x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; 
lean::dec(x_1);
lean::dec(x_0);
x_53 = lean::cnstr_get(x_5, 1);
lean::inc(x_53);
lean::dec(x_5);
x_56 = lean::cnstr_get(x_6, 0);
x_58 = lean::cnstr_get_scalar<uint8>(x_6, sizeof(void*)*1);
if (lean::is_exclusive(x_6)) {
 x_59 = x_6;
} else {
 lean::inc(x_56);
 lean::dec(x_6);
 x_59 = lean::box(0);
}
if (lean::is_scalar(x_59)) {
 x_60 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_60 = x_59;
}
lean::cnstr_set(x_60, 0, x_56);
lean::cnstr_set_scalar(x_60, sizeof(void*)*1, x_58);
x_61 = x_60;
x_62 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_63 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_62, x_61);
x_64 = l_lean_parser_number_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__2___rarg___closed__1;
x_65 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_63, x_64);
x_66 = l_lean_parser_parsec__t_try__mk__res___rarg(x_65);
x_67 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_67, 0, x_66);
lean::cnstr_set(x_67, 1, x_53);
return x_67;
}
}
}
obj* l_lean_parser_number_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__2(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_number_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__2___rarg), 3, 0);
return x_2;
}
}
obj* _init_l_lean_parser_ident_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__3___rarg___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("identifier");
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_lean_parser_ident_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__3___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_5; obj* x_6; 
lean::inc(x_1);
lean::inc(x_0);
x_5 = l_lean_parser_token(x_0, x_1, x_2);
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_8; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_18; 
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
lean::dec(x_5);
x_11 = lean::cnstr_get(x_6, 0);
x_13 = lean::cnstr_get(x_6, 1);
x_15 = lean::cnstr_get(x_6, 2);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_set(x_6, 0, lean::box(0));
 lean::cnstr_set(x_6, 1, lean::box(0));
 lean::cnstr_set(x_6, 2, lean::box(0));
 x_17 = x_6;
} else {
 lean::inc(x_11);
 lean::inc(x_13);
 lean::inc(x_15);
 lean::dec(x_6);
 x_17 = lean::box(0);
}
switch (lean::obj_tag(x_11)) {
case 1:
{
obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; 
lean::dec(x_1);
lean::dec(x_0);
x_22 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_17)) {
 x_23 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_23 = x_17;
}
lean::cnstr_set(x_23, 0, x_11);
lean::cnstr_set(x_23, 1, x_13);
lean::cnstr_set(x_23, 2, x_22);
x_24 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_23);
x_25 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_22, x_24);
x_26 = l_lean_parser_ident_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__3___rarg___closed__1;
x_27 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_25, x_26);
x_28 = l_lean_parser_parsec__t_try__mk__res___rarg(x_27);
x_29 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_29, 0, x_28);
lean::cnstr_set(x_29, 1, x_8);
return x_29;
}
case 3:
{
obj* x_31; 
lean::dec(x_17);
x_31 = lean::box(0);
x_18 = x_31;
goto lbl_19;
}
default:
{
obj* x_34; 
lean::dec(x_17);
lean::dec(x_11);
x_34 = lean::box(0);
x_18 = x_34;
goto lbl_19;
}
}
lbl_19:
{
obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_43; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; 
lean::dec(x_18);
x_36 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_36, 0, x_1);
x_37 = lean::box(0);
x_38 = l_string_join___closed__1;
x_39 = l_lean_parser_ident_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__3___rarg___closed__1;
x_40 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_38, x_39, x_36, x_37, x_0, x_13, x_8);
x_41 = lean::cnstr_get(x_40, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_40, 1);
lean::inc(x_43);
lean::dec(x_40);
x_46 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_41);
x_47 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_48 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_47, x_46);
x_49 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_48, x_39);
x_50 = l_lean_parser_parsec__t_try__mk__res___rarg(x_49);
x_51 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_51, 0, x_50);
lean::cnstr_set(x_51, 1, x_43);
return x_51;
}
}
else
{
obj* x_54; obj* x_57; uint8 x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; 
lean::dec(x_1);
lean::dec(x_0);
x_54 = lean::cnstr_get(x_5, 1);
lean::inc(x_54);
lean::dec(x_5);
x_57 = lean::cnstr_get(x_6, 0);
x_59 = lean::cnstr_get_scalar<uint8>(x_6, sizeof(void*)*1);
if (lean::is_exclusive(x_6)) {
 x_60 = x_6;
} else {
 lean::inc(x_57);
 lean::dec(x_6);
 x_60 = lean::box(0);
}
if (lean::is_scalar(x_60)) {
 x_61 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_61 = x_60;
}
lean::cnstr_set(x_61, 0, x_57);
lean::cnstr_set_scalar(x_61, sizeof(void*)*1, x_59);
x_62 = x_61;
x_63 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_64 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_63, x_62);
x_65 = l_lean_parser_ident_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__3___rarg___closed__1;
x_66 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_64, x_65);
x_67 = l_lean_parser_parsec__t_try__mk__res___rarg(x_66);
x_68 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_68, 0, x_67);
lean::cnstr_set(x_68, 1, x_54);
return x_68;
}
}
}
obj* l_lean_parser_ident_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__3(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_ident_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__3___rarg), 3, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__5___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_10; obj* x_11; uint8 x_12; obj* x_13; obj* x_14; obj* x_15; 
lean::dec(x_5);
lean::dec(x_4);
x_10 = l_option_get__or__else___main___rarg(x_2, x_6);
x_11 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_0);
lean::cnstr_set(x_11, 2, x_1);
lean::cnstr_set(x_11, 3, x_3);
x_12 = 0;
x_13 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_13, 0, x_11);
lean::cnstr_set_scalar(x_13, sizeof(void*)*1, x_12);
x_14 = x_13;
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_7);
return x_15;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__5(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__5___rarg), 8, 0);
return x_2;
}
}
obj* l_lean_parser_combinators_choice__aux___main___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
lean::dec(x_1);
x_7 = lean::box(0);
x_8 = l_lean_parser_combinators_choice__aux___main___rarg___closed__1;
x_9 = l_mjoin___rarg___closed__1;
x_10 = l_lean_parser_monad__parsec_error___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__5___rarg(x_8, x_9, x_7, x_7, x_2, x_3, x_4, x_5);
return x_10;
}
else
{
obj* x_11; obj* x_13; obj* x_15; obj* x_19; obj* x_20; obj* x_22; obj* x_25; obj* x_26; 
x_11 = lean::cnstr_get(x_0, 0);
x_13 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_15 = x_0;
} else {
 lean::inc(x_11);
 lean::inc(x_13);
 lean::dec(x_0);
 x_15 = lean::box(0);
}
lean::inc(x_4);
lean::inc(x_3);
lean::inc(x_2);
x_19 = lean::apply_4(x_11, x_2, x_3, x_4, x_5);
x_20 = lean::cnstr_get(x_19, 0);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_19, 1);
lean::inc(x_22);
lean::dec(x_19);
x_25 = lean::mk_nat_obj(1u);
x_26 = lean::nat_add(x_1, x_25);
if (lean::obj_tag(x_20) == 0)
{
obj* x_27; obj* x_29; obj* x_31; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
x_27 = lean::cnstr_get(x_20, 0);
x_29 = lean::cnstr_get(x_20, 1);
x_31 = lean::cnstr_get(x_20, 2);
if (lean::is_exclusive(x_20)) {
 x_33 = x_20;
} else {
 lean::inc(x_27);
 lean::inc(x_29);
 lean::inc(x_31);
 lean::dec(x_20);
 x_33 = lean::box(0);
}
x_34 = lean::box(0);
x_35 = lean_name_mk_numeral(x_34, x_1);
x_36 = lean::box(0);
if (lean::is_scalar(x_15)) {
 x_37 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_37 = x_15;
}
lean::cnstr_set(x_37, 0, x_27);
lean::cnstr_set(x_37, 1, x_36);
x_38 = l_lean_parser_syntax_mk__node(x_35, x_37);
x_39 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_33)) {
 x_40 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_40 = x_33;
}
lean::cnstr_set(x_40, 0, x_38);
lean::cnstr_set(x_40, 1, x_29);
lean::cnstr_set(x_40, 2, x_39);
x_41 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_31, x_40);
if (lean::obj_tag(x_41) == 0)
{
obj* x_47; 
lean::dec(x_13);
lean::dec(x_26);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
x_47 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_47, 0, x_41);
lean::cnstr_set(x_47, 1, x_22);
return x_47;
}
else
{
obj* x_48; uint8 x_50; 
x_48 = lean::cnstr_get(x_41, 0);
lean::inc(x_48);
x_50 = lean::cnstr_get_scalar<uint8>(x_41, sizeof(void*)*1);
if (x_50 == 0)
{
obj* x_52; obj* x_53; obj* x_55; obj* x_58; obj* x_59; 
lean::dec(x_41);
x_52 = l_lean_parser_combinators_choice__aux___main___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__4(x_13, x_26, x_2, x_3, x_4, x_22);
x_53 = lean::cnstr_get(x_52, 0);
lean::inc(x_53);
x_55 = lean::cnstr_get(x_52, 1);
lean::inc(x_55);
lean::dec(x_52);
x_58 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_48, x_53);
x_59 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_59, 0, x_58);
lean::cnstr_set(x_59, 1, x_55);
return x_59;
}
else
{
obj* x_66; 
lean::dec(x_13);
lean::dec(x_26);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_48);
x_66 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_66, 0, x_41);
lean::cnstr_set(x_66, 1, x_22);
return x_66;
}
}
}
else
{
obj* x_69; uint8 x_71; obj* x_72; 
lean::dec(x_1);
lean::dec(x_15);
x_69 = lean::cnstr_get(x_20, 0);
x_71 = lean::cnstr_get_scalar<uint8>(x_20, sizeof(void*)*1);
if (lean::is_exclusive(x_20)) {
 lean::cnstr_set(x_20, 0, lean::box(0));
 x_72 = x_20;
} else {
 lean::inc(x_69);
 lean::dec(x_20);
 x_72 = lean::box(0);
}
if (x_71 == 0)
{
obj* x_74; obj* x_75; obj* x_77; obj* x_80; obj* x_81; 
lean::dec(x_72);
x_74 = l_lean_parser_combinators_choice__aux___main___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__4(x_13, x_26, x_2, x_3, x_4, x_22);
x_75 = lean::cnstr_get(x_74, 0);
lean::inc(x_75);
x_77 = lean::cnstr_get(x_74, 1);
lean::inc(x_77);
lean::dec(x_74);
x_80 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_69, x_75);
x_81 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_81, 0, x_80);
lean::cnstr_set(x_81, 1, x_77);
return x_81;
}
else
{
obj* x_87; obj* x_88; obj* x_89; 
lean::dec(x_13);
lean::dec(x_26);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
if (lean::is_scalar(x_72)) {
 x_87 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_87 = x_72;
}
lean::cnstr_set(x_87, 0, x_69);
lean::cnstr_set_scalar(x_87, sizeof(void*)*1, x_71);
x_88 = x_87;
x_89 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_89, 0, x_88);
lean::cnstr_set(x_89, 1, x_22);
return x_89;
}
}
}
}
}
obj* _init_l_lean_parser_level_leading_parser_lean_parser_has__tokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_0 = lean::box(0);
x_1 = lean::mk_string("_");
x_2 = l_lean_parser_max__prec;
x_3 = l_lean_parser_symbol_tokens___rarg(x_1, x_2);
x_4 = l_lean_parser_list_cons_tokens___rarg(x_0, x_0);
x_5 = l_lean_parser_list_cons_tokens___rarg(x_0, x_4);
x_6 = l_lean_parser_level_paren_parser_lean_parser_has__tokens;
x_7 = l_lean_parser_list_cons_tokens___rarg(x_6, x_5);
x_8 = l_lean_parser_list_cons_tokens___rarg(x_3, x_7);
x_9 = l_lean_parser_list_cons_tokens___rarg(x_0, x_8);
x_10 = l_lean_parser_list_cons_tokens___rarg(x_0, x_9);
x_11 = l_lean_parser_tokens___rarg(x_10);
x_12 = l_lean_parser_list_cons_tokens___rarg(x_11, x_0);
x_13 = l_lean_parser_tokens___rarg(x_12);
return x_13;
}
}
obj* _init_l_lean_parser_level_leading_parser_lean_parser_has__view() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; 
x_0 = lean::mk_string("max");
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__or__ident___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__1), 5, 1);
lean::closure_set(x_1, 0, x_0);
x_2 = lean::mk_string("imax");
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__or__ident___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__1), 5, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::mk_string("_");
x_5 = l_string_trim(x_4);
lean::inc(x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_7, 0, x_5);
x_8 = l_lean_parser_max__prec;
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_level_paren_parser_lean_parser_has__tokens___spec__1), 7, 3);
lean::closure_set(x_9, 0, x_5);
lean::closure_set(x_9, 1, x_8);
lean::closure_set(x_9, 2, x_7);
x_10 = lean::box(0);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_ident_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__3), 1, 0);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_10);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_number_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__2), 1, 0);
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_12);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_level_paren_parser), 4, 0);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_15);
lean::cnstr_set(x_16, 1, x_14);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_9);
lean::cnstr_set(x_17, 1, x_16);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_3);
lean::cnstr_set(x_18, 1, x_17);
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_1);
lean::cnstr_set(x_19, 1, x_18);
x_20 = lean::mk_nat_obj(0u);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_choice__aux___main___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__4), 6, 2);
lean::closure_set(x_21, 0, x_19);
lean::closure_set(x_21, 1, x_20);
x_22 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_22, 0, x_21);
lean::cnstr_set(x_22, 1, x_10);
x_23 = l_lean_parser_level__parser__m_monad;
x_24 = l_lean_parser_level__parser__m_monad__except;
x_25 = l_lean_parser_level__parser__m_lean_parser_monad__parsec;
x_26 = l_lean_parser_level__parser__m_alternative;
x_27 = l_lean_parser_level_leading;
x_28 = l_lean_parser_level_leading_has__view;
x_29 = l_lean_parser_combinators_node_view___rarg(x_23, x_24, x_25, x_26, x_27, x_22, x_28);
return x_29;
}
}
obj* _init_l_lean_parser_level_leading_parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_0 = lean::mk_string("max");
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__or__ident___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__1), 5, 1);
lean::closure_set(x_1, 0, x_0);
x_2 = lean::mk_string("imax");
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__or__ident___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__1), 5, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::mk_string("_");
x_5 = l_string_trim(x_4);
lean::inc(x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_7, 0, x_5);
x_8 = l_lean_parser_max__prec;
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_level_paren_parser_lean_parser_has__tokens___spec__1), 7, 3);
lean::closure_set(x_9, 0, x_5);
lean::closure_set(x_9, 1, x_8);
lean::closure_set(x_9, 2, x_7);
x_10 = lean::box(0);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_ident_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__3), 1, 0);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_10);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_number_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__2), 1, 0);
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_12);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_level_paren_parser), 4, 0);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_15);
lean::cnstr_set(x_16, 1, x_14);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_9);
lean::cnstr_set(x_17, 1, x_16);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_3);
lean::cnstr_set(x_18, 1, x_17);
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_1);
lean::cnstr_set(x_19, 1, x_18);
x_20 = lean::mk_nat_obj(0u);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_choice__aux___main___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__4), 6, 2);
lean::closure_set(x_21, 0, x_19);
lean::closure_set(x_21, 1, x_20);
x_22 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_22, 0, x_21);
lean::cnstr_set(x_22, 1, x_10);
return x_22;
}
}
obj* l_lean_parser_level_leading_parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = l_lean_parser_level_leading;
x_5 = l_lean_parser_level_leading_parser___closed__1;
x_6 = l_lean_parser_combinators_node___at_lean_parser_level_paren_parser___spec__1(x_4, x_5, x_0, x_1, x_2, x_3);
return x_6;
}
}
obj* _init_l_lean_parser_level_app() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("level");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("app");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_parser_level_app_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(3);
x_1 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1, 0, x_0);
lean::cnstr_set(x_1, 1, x_0);
return x_1;
}
}
obj* l_lean_parser_level_app_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; 
x_2 = l_lean_parser_level_app_has__view_x_27___lambda__1___closed__1;
return x_2;
}
else
{
obj* x_3; obj* x_6; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
lean::dec(x_1);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
if (lean::obj_tag(x_6) == 0)
{
if (lean::obj_tag(x_6) == 0)
{
obj* x_9; 
x_9 = l_lean_parser_level_app_has__view_x_27___lambda__1___closed__1;
return x_9;
}
else
{
obj* x_10; obj* x_13; obj* x_14; 
x_10 = lean::cnstr_get(x_6, 0);
lean::inc(x_10);
lean::dec(x_6);
x_13 = lean::box(3);
x_14 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_10);
return x_14;
}
}
else
{
obj* x_15; 
x_15 = lean::cnstr_get(x_6, 1);
lean::inc(x_15);
if (lean::obj_tag(x_15) == 0)
{
obj* x_17; obj* x_20; obj* x_21; 
x_17 = lean::cnstr_get(x_6, 0);
lean::inc(x_17);
lean::dec(x_6);
x_20 = lean::box(3);
x_21 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_21, 0, x_17);
lean::cnstr_set(x_21, 1, x_20);
return x_21;
}
else
{
obj* x_22; obj* x_25; obj* x_28; 
x_22 = lean::cnstr_get(x_6, 0);
lean::inc(x_22);
lean::dec(x_6);
x_25 = lean::cnstr_get(x_15, 0);
lean::inc(x_25);
lean::dec(x_15);
x_28 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_28, 0, x_22);
lean::cnstr_set(x_28, 1, x_25);
return x_28;
}
}
}
}
}
obj* l_lean_parser_level_app_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_3);
lean::cnstr_set(x_7, 1, x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_1);
lean::cnstr_set(x_8, 1, x_7);
x_9 = l_lean_parser_level_app;
x_10 = l_lean_parser_syntax_mk__node(x_9, x_8);
return x_10;
}
}
obj* _init_l_lean_parser_level_app_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_level_app_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_level_app_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_level_app_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_level_app_has__view_x_27;
return x_0;
}
}
obj* _init_l_lean_parser_level_app_parser_lean_parser_has__tokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = l_lean_parser_level_parser_lean_parser_has__tokens___closed__1;
x_1 = l_lean_parser_tokens___rarg(x_0);
x_2 = lean::box(0);
x_3 = l_lean_parser_list_cons_tokens___rarg(x_1, x_2);
x_4 = l_lean_parser_level_lean_parser_has__tokens;
x_5 = l_lean_parser_list_cons_tokens___rarg(x_4, x_3);
x_6 = l_lean_parser_tokens___rarg(x_5);
return x_6;
}
}
obj* l_lean_parser_level_app_parser_lean_parser_has__view___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_6; obj* x_7; 
lean::dec(x_0);
x_6 = l_lean_parser_max__prec;
x_7 = l_lean_parser_level_parser(x_6, x_1, x_2, x_3, x_4);
return x_7;
}
}
obj* _init_l_lean_parser_level_app_parser_lean_parser_has__view() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_0 = lean::box(0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_level_app_parser_lean_parser_has__view___lambda__1), 5, 0);
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_1);
lean::cnstr_set(x_2, 1, x_0);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_level_get__leading), 5, 0);
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_3);
lean::cnstr_set(x_4, 1, x_2);
x_5 = l_lean_parser_trailing__level__parser__m_monad;
x_6 = l_lean_parser_trailing__level__parser__m_monad__except;
x_7 = l_lean_parser_trailing__level__parser__m_lean_parser_monad__parsec;
x_8 = l_lean_parser_trailing__level__parser__m_alternative;
x_9 = l_lean_parser_level_app;
x_10 = l_lean_parser_level_app_has__view;
x_11 = l_lean_parser_combinators_node_view___rarg(x_5, x_6, x_7, x_8, x_9, x_4, x_10);
return x_11;
}
}
obj* l_list_mfoldl___main___at_lean_parser_level_app_parser___spec__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_12; obj* x_13; obj* x_14; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_0);
x_12 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_13 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_13, 0, x_1);
lean::cnstr_set(x_13, 1, x_6);
lean::cnstr_set(x_13, 2, x_12);
x_14 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_7);
return x_14;
}
else
{
obj* x_15; obj* x_17; obj* x_19; obj* x_20; obj* x_21; obj* x_26; obj* x_27; 
x_15 = lean::cnstr_get(x_2, 0);
x_17 = lean::cnstr_get(x_2, 1);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_set(x_2, 0, lean::box(0));
 lean::cnstr_set(x_2, 1, lean::box(0));
 x_19 = x_2;
} else {
 lean::inc(x_15);
 lean::inc(x_17);
 lean::dec(x_2);
 x_19 = lean::box(0);
}
lean::inc(x_5);
lean::inc(x_4);
lean::inc(x_3);
x_26 = lean::apply_5(x_15, x_3, x_4, x_5, x_6, x_7);
x_27 = lean::cnstr_get(x_26, 0);
lean::inc(x_27);
if (lean::obj_tag(x_27) == 0)
{
obj* x_29; 
x_29 = lean::cnstr_get(x_26, 1);
lean::inc(x_29);
lean::dec(x_26);
x_20 = x_27;
x_21 = x_29;
goto lbl_22;
}
else
{
obj* x_32; obj* x_35; uint8 x_37; obj* x_38; 
x_32 = lean::cnstr_get(x_26, 1);
lean::inc(x_32);
lean::dec(x_26);
x_35 = lean::cnstr_get(x_27, 0);
x_37 = lean::cnstr_get_scalar<uint8>(x_27, sizeof(void*)*1);
if (lean::is_exclusive(x_27)) {
 lean::cnstr_set(x_27, 0, lean::box(0));
 x_38 = x_27;
} else {
 lean::inc(x_35);
 lean::dec(x_27);
 x_38 = lean::box(0);
}
if (lean::obj_tag(x_1) == 0)
{
if (x_37 == 0)
{
uint8 x_39; obj* x_40; obj* x_41; 
x_39 = 0;
if (lean::is_scalar(x_38)) {
 x_40 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_40 = x_38;
}
lean::cnstr_set(x_40, 0, x_35);
lean::cnstr_set_scalar(x_40, sizeof(void*)*1, x_39);
x_41 = x_40;
x_20 = x_41;
x_21 = x_32;
goto lbl_22;
}
else
{
obj* x_42; obj* x_43; 
if (lean::is_scalar(x_38)) {
 x_42 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_42 = x_38;
}
lean::cnstr_set(x_42, 0, x_35);
lean::cnstr_set_scalar(x_42, sizeof(void*)*1, x_37);
x_43 = x_42;
x_20 = x_43;
x_21 = x_32;
goto lbl_22;
}
}
else
{
obj* x_44; obj* x_46; obj* x_48; obj* x_49; obj* x_51; obj* x_53; obj* x_56; obj* x_58; obj* x_59; obj* x_60; 
x_44 = lean::cnstr_get(x_35, 3);
lean::inc(x_44);
x_46 = l_option_get___main___at_lean_parser_run___spec__2(x_44);
lean::inc(x_1);
x_48 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_48, 0, x_46);
lean::cnstr_set(x_48, 1, x_1);
x_49 = lean::cnstr_get(x_35, 0);
lean::inc(x_49);
x_51 = lean::cnstr_get(x_35, 1);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_35, 2);
lean::inc(x_53);
lean::dec(x_35);
x_56 = l_list_reverse___rarg(x_48);
lean::inc(x_0);
x_58 = l_lean_parser_syntax_mk__node(x_0, x_56);
x_59 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_59, 0, x_58);
x_60 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_60, 0, x_49);
lean::cnstr_set(x_60, 1, x_51);
lean::cnstr_set(x_60, 2, x_53);
lean::cnstr_set(x_60, 3, x_59);
if (x_37 == 0)
{
uint8 x_61; obj* x_62; obj* x_63; 
x_61 = 0;
if (lean::is_scalar(x_38)) {
 x_62 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_62 = x_38;
}
lean::cnstr_set(x_62, 0, x_60);
lean::cnstr_set_scalar(x_62, sizeof(void*)*1, x_61);
x_63 = x_62;
x_20 = x_63;
x_21 = x_32;
goto lbl_22;
}
else
{
obj* x_64; obj* x_65; 
if (lean::is_scalar(x_38)) {
 x_64 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_64 = x_38;
}
lean::cnstr_set(x_64, 0, x_60);
lean::cnstr_set_scalar(x_64, sizeof(void*)*1, x_37);
x_65 = x_64;
x_20 = x_65;
x_21 = x_32;
goto lbl_22;
}
}
}
lbl_22:
{
if (lean::obj_tag(x_20) == 0)
{
obj* x_66; obj* x_68; obj* x_70; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_76; 
x_66 = lean::cnstr_get(x_20, 0);
x_68 = lean::cnstr_get(x_20, 1);
x_70 = lean::cnstr_get(x_20, 2);
if (lean::is_exclusive(x_20)) {
 x_72 = x_20;
} else {
 lean::inc(x_66);
 lean::inc(x_68);
 lean::inc(x_70);
 lean::dec(x_20);
 x_72 = lean::box(0);
}
if (lean::is_scalar(x_19)) {
 x_73 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_73 = x_19;
}
lean::cnstr_set(x_73, 0, x_66);
lean::cnstr_set(x_73, 1, x_1);
x_74 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_72)) {
 x_75 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_75 = x_72;
}
lean::cnstr_set(x_75, 0, x_73);
lean::cnstr_set(x_75, 1, x_68);
lean::cnstr_set(x_75, 2, x_74);
x_76 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_70, x_75);
if (lean::obj_tag(x_76) == 0)
{
obj* x_77; obj* x_79; obj* x_81; obj* x_84; obj* x_85; obj* x_87; obj* x_90; obj* x_91; 
x_77 = lean::cnstr_get(x_76, 0);
lean::inc(x_77);
x_79 = lean::cnstr_get(x_76, 1);
lean::inc(x_79);
x_81 = lean::cnstr_get(x_76, 2);
lean::inc(x_81);
lean::dec(x_76);
x_84 = l_list_mfoldl___main___at_lean_parser_level_app_parser___spec__2(x_0, x_77, x_17, x_3, x_4, x_5, x_79, x_21);
x_85 = lean::cnstr_get(x_84, 0);
lean::inc(x_85);
x_87 = lean::cnstr_get(x_84, 1);
lean::inc(x_87);
lean::dec(x_84);
x_90 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_81, x_85);
x_91 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_91, 0, x_90);
lean::cnstr_set(x_91, 1, x_87);
return x_91;
}
else
{
obj* x_97; uint8 x_99; obj* x_100; obj* x_101; obj* x_102; obj* x_103; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_17);
x_97 = lean::cnstr_get(x_76, 0);
x_99 = lean::cnstr_get_scalar<uint8>(x_76, sizeof(void*)*1);
if (lean::is_exclusive(x_76)) {
 x_100 = x_76;
} else {
 lean::inc(x_97);
 lean::dec(x_76);
 x_100 = lean::box(0);
}
if (lean::is_scalar(x_100)) {
 x_101 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_101 = x_100;
}
lean::cnstr_set(x_101, 0, x_97);
lean::cnstr_set_scalar(x_101, sizeof(void*)*1, x_99);
x_102 = x_101;
x_103 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_103, 0, x_102);
lean::cnstr_set(x_103, 1, x_21);
return x_103;
}
}
else
{
obj* x_111; uint8 x_113; obj* x_114; obj* x_115; obj* x_116; obj* x_117; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_17);
lean::dec(x_19);
x_111 = lean::cnstr_get(x_20, 0);
x_113 = lean::cnstr_get_scalar<uint8>(x_20, sizeof(void*)*1);
if (lean::is_exclusive(x_20)) {
 x_114 = x_20;
} else {
 lean::inc(x_111);
 lean::dec(x_20);
 x_114 = lean::box(0);
}
if (lean::is_scalar(x_114)) {
 x_115 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_115 = x_114;
}
lean::cnstr_set(x_115, 0, x_111);
lean::cnstr_set_scalar(x_115, sizeof(void*)*1, x_113);
x_116 = x_115;
x_117 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_117, 0, x_116);
lean::cnstr_set(x_117, 1, x_21);
return x_117;
}
}
}
}
}
obj* l_lean_parser_combinators_node___at_lean_parser_level_app_parser___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; obj* x_9; obj* x_10; 
x_7 = lean::box(0);
lean::inc(x_0);
x_9 = l_list_mfoldl___main___at_lean_parser_level_app_parser___spec__2(x_0, x_7, x_1, x_2, x_3, x_4, x_5, x_6);
x_10 = lean::cnstr_get(x_9, 0);
lean::inc(x_10);
if (lean::obj_tag(x_10) == 0)
{
obj* x_12; obj* x_15; obj* x_17; obj* x_19; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; 
x_12 = lean::cnstr_get(x_9, 1);
lean::inc(x_12);
lean::dec(x_9);
x_15 = lean::cnstr_get(x_10, 0);
x_17 = lean::cnstr_get(x_10, 1);
x_19 = lean::cnstr_get(x_10, 2);
if (lean::is_exclusive(x_10)) {
 x_21 = x_10;
} else {
 lean::inc(x_15);
 lean::inc(x_17);
 lean::inc(x_19);
 lean::dec(x_10);
 x_21 = lean::box(0);
}
x_22 = l_list_reverse___rarg(x_15);
x_23 = l_lean_parser_syntax_mk__node(x_0, x_22);
x_24 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_21)) {
 x_25 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_25 = x_21;
}
lean::cnstr_set(x_25, 0, x_23);
lean::cnstr_set(x_25, 1, x_17);
lean::cnstr_set(x_25, 2, x_24);
x_26 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_25);
x_27 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_12);
return x_27;
}
else
{
obj* x_29; obj* x_32; uint8 x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; 
lean::dec(x_0);
x_29 = lean::cnstr_get(x_9, 1);
lean::inc(x_29);
lean::dec(x_9);
x_32 = lean::cnstr_get(x_10, 0);
x_34 = lean::cnstr_get_scalar<uint8>(x_10, sizeof(void*)*1);
if (lean::is_exclusive(x_10)) {
 x_35 = x_10;
} else {
 lean::inc(x_32);
 lean::dec(x_10);
 x_35 = lean::box(0);
}
if (lean::is_scalar(x_35)) {
 x_36 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_36 = x_35;
}
lean::cnstr_set(x_36, 0, x_32);
lean::cnstr_set_scalar(x_36, sizeof(void*)*1, x_34);
x_37 = x_36;
x_38 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_38, 0, x_37);
lean::cnstr_set(x_38, 1, x_29);
return x_38;
}
}
}
obj* _init_l_lean_parser_level_app_parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_0 = lean::box(0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_level_app_parser_lean_parser_has__view___lambda__1), 5, 0);
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_1);
lean::cnstr_set(x_2, 1, x_0);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_level_get__leading), 5, 0);
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_3);
lean::cnstr_set(x_4, 1, x_2);
return x_4;
}
}
obj* l_lean_parser_level_app_parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; 
x_5 = l_lean_parser_level_app;
x_6 = l_lean_parser_level_app_parser___closed__1;
x_7 = l_lean_parser_combinators_node___at_lean_parser_level_app_parser___spec__1(x_5, x_6, x_0, x_1, x_2, x_3, x_4);
return x_7;
}
}
obj* _init_l_lean_parser_level_add__lit() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("level");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("add_lit");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_parser_level_add__lit_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; 
x_0 = l_lean_parser_number_has__view;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
x_4 = lean::box(3);
x_5 = lean::apply_1(x_1, x_4);
return x_5;
}
}
obj* _init_l_lean_parser_level_add__lit_has__view_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_3 = lean::box(0);
x_4 = lean::box(3);
x_0 = x_3;
x_1 = x_4;
goto lbl_2;
lbl_2:
{
obj* x_5; obj* x_6; 
if (lean::obj_tag(x_0) == 0)
{
obj* x_8; 
x_8 = lean::box(3);
x_5 = x_0;
x_6 = x_8;
goto lbl_7;
}
else
{
obj* x_9; obj* x_11; 
x_9 = lean::cnstr_get(x_0, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 1);
lean::inc(x_11);
lean::dec(x_0);
x_5 = x_11;
x_6 = x_9;
goto lbl_7;
}
lbl_7:
{
switch (lean::obj_tag(x_6)) {
case 0:
{
obj* x_14; obj* x_17; 
x_14 = lean::cnstr_get(x_6, 0);
lean::inc(x_14);
lean::dec(x_6);
x_17 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_17, 0, x_14);
if (lean::obj_tag(x_5) == 0)
{
obj* x_18; obj* x_19; 
x_18 = l_lean_parser_level_add__lit_has__view_x_27___lambda__1___closed__1;
x_19 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_19, 0, x_1);
lean::cnstr_set(x_19, 1, x_17);
lean::cnstr_set(x_19, 2, x_18);
return x_19;
}
else
{
obj* x_20; obj* x_23; obj* x_24; obj* x_27; obj* x_28; 
x_20 = lean::cnstr_get(x_5, 0);
lean::inc(x_20);
lean::dec(x_5);
x_23 = l_lean_parser_number_has__view;
x_24 = lean::cnstr_get(x_23, 0);
lean::inc(x_24);
lean::dec(x_23);
x_27 = lean::apply_1(x_24, x_20);
x_28 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_28, 0, x_1);
lean::cnstr_set(x_28, 1, x_17);
lean::cnstr_set(x_28, 2, x_27);
return x_28;
}
}
case 3:
{
obj* x_29; 
x_29 = lean::box(0);
if (lean::obj_tag(x_5) == 0)
{
obj* x_30; obj* x_31; 
x_30 = l_lean_parser_level_add__lit_has__view_x_27___lambda__1___closed__1;
x_31 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_31, 0, x_1);
lean::cnstr_set(x_31, 1, x_29);
lean::cnstr_set(x_31, 2, x_30);
return x_31;
}
else
{
obj* x_32; obj* x_35; obj* x_36; obj* x_39; obj* x_40; 
x_32 = lean::cnstr_get(x_5, 0);
lean::inc(x_32);
lean::dec(x_5);
x_35 = l_lean_parser_number_has__view;
x_36 = lean::cnstr_get(x_35, 0);
lean::inc(x_36);
lean::dec(x_35);
x_39 = lean::apply_1(x_36, x_32);
x_40 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_40, 0, x_1);
lean::cnstr_set(x_40, 1, x_29);
lean::cnstr_set(x_40, 2, x_39);
return x_40;
}
}
default:
{
obj* x_42; 
lean::dec(x_6);
x_42 = lean::box(0);
if (lean::obj_tag(x_5) == 0)
{
obj* x_43; obj* x_44; 
x_43 = l_lean_parser_level_add__lit_has__view_x_27___lambda__1___closed__1;
x_44 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_44, 0, x_1);
lean::cnstr_set(x_44, 1, x_42);
lean::cnstr_set(x_44, 2, x_43);
return x_44;
}
else
{
obj* x_45; obj* x_48; obj* x_49; obj* x_52; obj* x_53; 
x_45 = lean::cnstr_get(x_5, 0);
lean::inc(x_45);
lean::dec(x_5);
x_48 = l_lean_parser_number_has__view;
x_49 = lean::cnstr_get(x_48, 0);
lean::inc(x_49);
lean::dec(x_48);
x_52 = lean::apply_1(x_49, x_45);
x_53 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_53, 0, x_1);
lean::cnstr_set(x_53, 1, x_42);
lean::cnstr_set(x_53, 2, x_52);
return x_53;
}
}
}
}
}
}
}
obj* l_lean_parser_level_add__lit_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_lean_parser_level_add__lit_has__view_x_27___lambda__1___closed__2;
return x_5;
}
else
{
obj* x_6; obj* x_9; 
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
lean::dec(x_6);
if (lean::obj_tag(x_9) == 0)
{
obj* x_12; 
x_12 = lean::box(3);
x_1 = x_9;
x_2 = x_12;
goto lbl_3;
}
else
{
obj* x_13; obj* x_15; 
x_13 = lean::cnstr_get(x_9, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_9, 1);
lean::inc(x_15);
lean::dec(x_9);
x_1 = x_15;
x_2 = x_13;
goto lbl_3;
}
}
lbl_3:
{
obj* x_18; obj* x_19; 
if (lean::obj_tag(x_1) == 0)
{
obj* x_21; 
x_21 = lean::box(3);
x_18 = x_1;
x_19 = x_21;
goto lbl_20;
}
else
{
obj* x_22; obj* x_24; 
x_22 = lean::cnstr_get(x_1, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_1, 1);
lean::inc(x_24);
lean::dec(x_1);
x_18 = x_24;
x_19 = x_22;
goto lbl_20;
}
lbl_20:
{
switch (lean::obj_tag(x_19)) {
case 0:
{
obj* x_27; obj* x_30; 
x_27 = lean::cnstr_get(x_19, 0);
lean::inc(x_27);
lean::dec(x_19);
x_30 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_30, 0, x_27);
if (lean::obj_tag(x_18) == 0)
{
obj* x_31; obj* x_32; 
x_31 = l_lean_parser_level_add__lit_has__view_x_27___lambda__1___closed__1;
x_32 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_32, 0, x_2);
lean::cnstr_set(x_32, 1, x_30);
lean::cnstr_set(x_32, 2, x_31);
return x_32;
}
else
{
obj* x_33; obj* x_36; obj* x_37; obj* x_40; obj* x_41; 
x_33 = lean::cnstr_get(x_18, 0);
lean::inc(x_33);
lean::dec(x_18);
x_36 = l_lean_parser_number_has__view;
x_37 = lean::cnstr_get(x_36, 0);
lean::inc(x_37);
lean::dec(x_36);
x_40 = lean::apply_1(x_37, x_33);
x_41 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_41, 0, x_2);
lean::cnstr_set(x_41, 1, x_30);
lean::cnstr_set(x_41, 2, x_40);
return x_41;
}
}
case 3:
{
obj* x_42; 
x_42 = lean::box(0);
if (lean::obj_tag(x_18) == 0)
{
obj* x_43; obj* x_44; 
x_43 = l_lean_parser_level_add__lit_has__view_x_27___lambda__1___closed__1;
x_44 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_44, 0, x_2);
lean::cnstr_set(x_44, 1, x_42);
lean::cnstr_set(x_44, 2, x_43);
return x_44;
}
else
{
obj* x_45; obj* x_48; obj* x_49; obj* x_52; obj* x_53; 
x_45 = lean::cnstr_get(x_18, 0);
lean::inc(x_45);
lean::dec(x_18);
x_48 = l_lean_parser_number_has__view;
x_49 = lean::cnstr_get(x_48, 0);
lean::inc(x_49);
lean::dec(x_48);
x_52 = lean::apply_1(x_49, x_45);
x_53 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_53, 0, x_2);
lean::cnstr_set(x_53, 1, x_42);
lean::cnstr_set(x_53, 2, x_52);
return x_53;
}
}
default:
{
obj* x_55; 
lean::dec(x_19);
x_55 = lean::box(0);
if (lean::obj_tag(x_18) == 0)
{
obj* x_56; obj* x_57; 
x_56 = l_lean_parser_level_add__lit_has__view_x_27___lambda__1___closed__1;
x_57 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_57, 0, x_2);
lean::cnstr_set(x_57, 1, x_55);
lean::cnstr_set(x_57, 2, x_56);
return x_57;
}
else
{
obj* x_58; obj* x_61; obj* x_62; obj* x_65; obj* x_66; 
x_58 = lean::cnstr_get(x_18, 0);
lean::inc(x_58);
lean::dec(x_18);
x_61 = l_lean_parser_number_has__view;
x_62 = lean::cnstr_get(x_61, 0);
lean::inc(x_62);
lean::dec(x_61);
x_65 = lean::apply_1(x_62, x_58);
x_66 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_66, 0, x_2);
lean::cnstr_set(x_66, 1, x_55);
lean::cnstr_set(x_66, 2, x_65);
return x_66;
}
}
}
}
}
}
}
obj* l_lean_parser_level_add__lit_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 2);
lean::inc(x_5);
lean::dec(x_0);
x_8 = l_lean_parser_raw_view___rarg___lambda__3___closed__1;
x_9 = l_option_map___rarg(x_8, x_3);
x_10 = lean::box(3);
x_11 = l_option_get__or__else___main___rarg(x_9, x_10);
x_12 = l_lean_parser_number_has__view;
x_13 = lean::cnstr_get(x_12, 1);
lean::inc(x_13);
lean::dec(x_12);
x_16 = lean::apply_1(x_13, x_5);
x_17 = lean::box(0);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_16);
lean::cnstr_set(x_18, 1, x_17);
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_11);
lean::cnstr_set(x_19, 1, x_18);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_1);
lean::cnstr_set(x_20, 1, x_19);
x_21 = l_lean_parser_level_add__lit;
x_22 = l_lean_parser_syntax_mk__node(x_21, x_20);
return x_22;
}
}
obj* _init_l_lean_parser_level_add__lit_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_level_add__lit_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_level_add__lit_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_level_add__lit_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_level_add__lit_has__view_x_27;
return x_0;
}
}
obj* l_lean_parser_symbol__core___at_lean_parser_level_add__lit_parser_lean_parser_has__tokens___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_13; obj* x_14; obj* x_16; obj* x_20; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_1);
lean::inc(x_6);
lean::inc(x_5);
x_13 = l_lean_parser_token(x_5, x_6, x_7);
x_14 = lean::cnstr_get(x_13, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_13, 1);
lean::inc(x_16);
lean::dec(x_13);
lean::inc(x_0);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_20, 0, x_0);
if (lean::obj_tag(x_14) == 0)
{
obj* x_21; obj* x_23; obj* x_25; obj* x_27; obj* x_28; 
x_21 = lean::cnstr_get(x_14, 0);
x_23 = lean::cnstr_get(x_14, 1);
x_25 = lean::cnstr_get(x_14, 2);
if (lean::is_exclusive(x_14)) {
 lean::cnstr_set(x_14, 0, lean::box(0));
 lean::cnstr_set(x_14, 1, lean::box(0));
 lean::cnstr_set(x_14, 2, lean::box(0));
 x_27 = x_14;
} else {
 lean::inc(x_21);
 lean::inc(x_23);
 lean::inc(x_25);
 lean::dec(x_14);
 x_27 = lean::box(0);
}
switch (lean::obj_tag(x_21)) {
case 0:
{
obj* x_30; obj* x_32; uint8 x_35; 
x_30 = lean::cnstr_get(x_21, 0);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_30, 1);
lean::inc(x_32);
lean::dec(x_30);
x_35 = lean::string_dec_eq(x_0, x_32);
lean::dec(x_0);
if (x_35 == 0)
{
obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
lean::dec(x_27);
x_38 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_38, 0, x_6);
x_39 = lean::box(0);
x_40 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_32, x_2, x_38, x_39, x_5, x_23, x_16);
x_41 = lean::cnstr_get(x_40, 0);
lean::inc(x_41);
if (lean::obj_tag(x_41) == 0)
{
obj* x_43; obj* x_46; obj* x_48; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; 
x_43 = lean::cnstr_get(x_40, 1);
lean::inc(x_43);
lean::dec(x_40);
x_46 = lean::cnstr_get(x_41, 1);
x_48 = lean::cnstr_get(x_41, 2);
if (lean::is_exclusive(x_41)) {
 lean::cnstr_release(x_41, 0);
 x_50 = x_41;
} else {
 lean::inc(x_46);
 lean::inc(x_48);
 lean::dec(x_41);
 x_50 = lean::box(0);
}
x_51 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_50)) {
 x_52 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_52 = x_50;
}
lean::cnstr_set(x_52, 0, x_21);
lean::cnstr_set(x_52, 1, x_46);
lean::cnstr_set(x_52, 2, x_51);
x_53 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_48, x_52);
x_54 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_25, x_53);
x_55 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_51, x_54);
x_56 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_55, x_20);
x_57 = l_lean_parser_parsec__t_try__mk__res___rarg(x_56);
x_58 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_58, 0, x_57);
lean::cnstr_set(x_58, 1, x_43);
return x_58;
}
else
{
obj* x_60; obj* x_63; uint8 x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; 
lean::dec(x_21);
x_60 = lean::cnstr_get(x_40, 1);
lean::inc(x_60);
lean::dec(x_40);
x_63 = lean::cnstr_get(x_41, 0);
x_65 = lean::cnstr_get_scalar<uint8>(x_41, sizeof(void*)*1);
if (lean::is_exclusive(x_41)) {
 x_66 = x_41;
} else {
 lean::inc(x_63);
 lean::dec(x_41);
 x_66 = lean::box(0);
}
if (lean::is_scalar(x_66)) {
 x_67 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_67 = x_66;
}
lean::cnstr_set(x_67, 0, x_63);
lean::cnstr_set_scalar(x_67, sizeof(void*)*1, x_65);
x_68 = x_67;
x_69 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_25, x_68);
x_70 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_71 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_70, x_69);
x_72 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_71, x_20);
x_73 = l_lean_parser_parsec__t_try__mk__res___rarg(x_72);
x_74 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_74, 0, x_73);
lean::cnstr_set(x_74, 1, x_60);
return x_74;
}
}
else
{
obj* x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_83; obj* x_84; obj* x_85; obj* x_86; 
lean::dec(x_5);
lean::dec(x_6);
lean::dec(x_2);
lean::dec(x_32);
x_79 = l_lean_parser_finish__comment__block___closed__2;
if (lean::is_scalar(x_27)) {
 x_80 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_80 = x_27;
}
lean::cnstr_set(x_80, 0, x_21);
lean::cnstr_set(x_80, 1, x_23);
lean::cnstr_set(x_80, 2, x_79);
x_81 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_25, x_80);
x_82 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_83 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_82, x_81);
x_84 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_83, x_20);
x_85 = l_lean_parser_parsec__t_try__mk__res___rarg(x_84);
x_86 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_86, 0, x_85);
lean::cnstr_set(x_86, 1, x_16);
return x_86;
}
}
case 3:
{
obj* x_89; 
lean::dec(x_27);
lean::dec(x_0);
x_89 = lean::box(0);
x_28 = x_89;
goto lbl_29;
}
default:
{
obj* x_93; 
lean::dec(x_27);
lean::dec(x_0);
lean::dec(x_21);
x_93 = lean::box(0);
x_28 = x_93;
goto lbl_29;
}
}
lbl_29:
{
obj* x_95; obj* x_96; obj* x_97; obj* x_98; obj* x_99; obj* x_101; obj* x_104; obj* x_105; obj* x_106; obj* x_107; obj* x_108; obj* x_109; 
lean::dec(x_28);
x_95 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_95, 0, x_6);
x_96 = lean::box(0);
x_97 = l_string_join___closed__1;
x_98 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_97, x_2, x_95, x_96, x_5, x_23, x_16);
x_99 = lean::cnstr_get(x_98, 0);
lean::inc(x_99);
x_101 = lean::cnstr_get(x_98, 1);
lean::inc(x_101);
lean::dec(x_98);
x_104 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_25, x_99);
x_105 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_106 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_105, x_104);
x_107 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_106, x_20);
x_108 = l_lean_parser_parsec__t_try__mk__res___rarg(x_107);
x_109 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_109, 0, x_108);
lean::cnstr_set(x_109, 1, x_101);
return x_109;
}
}
else
{
obj* x_114; uint8 x_116; obj* x_117; obj* x_118; obj* x_119; obj* x_120; obj* x_121; obj* x_122; obj* x_123; obj* x_124; 
lean::dec(x_5);
lean::dec(x_6);
lean::dec(x_0);
lean::dec(x_2);
x_114 = lean::cnstr_get(x_14, 0);
x_116 = lean::cnstr_get_scalar<uint8>(x_14, sizeof(void*)*1);
if (lean::is_exclusive(x_14)) {
 x_117 = x_14;
} else {
 lean::inc(x_114);
 lean::dec(x_14);
 x_117 = lean::box(0);
}
if (lean::is_scalar(x_117)) {
 x_118 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_118 = x_117;
}
lean::cnstr_set(x_118, 0, x_114);
lean::cnstr_set_scalar(x_118, sizeof(void*)*1, x_116);
x_119 = x_118;
x_120 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_121 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_120, x_119);
x_122 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_121, x_20);
x_123 = l_lean_parser_parsec__t_try__mk__res___rarg(x_122);
x_124 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_124, 0, x_123);
lean::cnstr_set(x_124, 1, x_16);
return x_124;
}
}
}
obj* l_lean_parser_number_parser___at_lean_parser_level_add__lit_parser_lean_parser_has__tokens___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_5; obj* x_6; 
lean::inc(x_1);
lean::inc(x_0);
x_5 = l_lean_parser_token(x_0, x_1, x_2);
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_8; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_19; 
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
lean::dec(x_5);
x_11 = lean::cnstr_get(x_6, 0);
x_13 = lean::cnstr_get(x_6, 1);
x_15 = lean::cnstr_get(x_6, 2);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_set(x_6, 0, lean::box(0));
 lean::cnstr_set(x_6, 1, lean::box(0));
 lean::cnstr_set(x_6, 2, lean::box(0));
 x_17 = x_6;
} else {
 lean::inc(x_11);
 lean::inc(x_13);
 lean::inc(x_15);
 lean::dec(x_6);
 x_17 = lean::box(0);
}
lean::inc(x_11);
x_19 = l_lean_parser_try__view___at_lean_parser_number_parser___spec__1(x_11);
if (lean::obj_tag(x_19) == 0)
{
obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_29; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; 
lean::dec(x_17);
lean::dec(x_11);
x_22 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_22, 0, x_1);
x_23 = lean::box(0);
x_24 = l_string_join___closed__1;
x_25 = l_lean_parser_number_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__2___rarg___closed__1;
x_26 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_24, x_25, x_22, x_23, x_0, x_13, x_8);
x_27 = lean::cnstr_get(x_26, 0);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_26, 1);
lean::inc(x_29);
lean::dec(x_26);
x_32 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_33 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_32, x_27);
x_34 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_33);
x_35 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_32, x_34);
x_36 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_35, x_25);
x_37 = l_lean_parser_parsec__t_try__mk__res___rarg(x_36);
x_38 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_38, 0, x_37);
lean::cnstr_set(x_38, 1, x_29);
return x_38;
}
else
{
obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; 
lean::dec(x_19);
lean::dec(x_1);
lean::dec(x_0);
x_42 = l_lean_parser_finish__comment__block___closed__2;
if (lean::is_scalar(x_17)) {
 x_43 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_43 = x_17;
}
lean::cnstr_set(x_43, 0, x_11);
lean::cnstr_set(x_43, 1, x_13);
lean::cnstr_set(x_43, 2, x_42);
x_44 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_43);
x_45 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_46 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_45, x_44);
x_47 = l_lean_parser_number_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__2___rarg___closed__1;
x_48 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_46, x_47);
x_49 = l_lean_parser_parsec__t_try__mk__res___rarg(x_48);
x_50 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_50, 0, x_49);
lean::cnstr_set(x_50, 1, x_8);
return x_50;
}
}
else
{
obj* x_53; obj* x_56; uint8 x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; 
lean::dec(x_1);
lean::dec(x_0);
x_53 = lean::cnstr_get(x_5, 1);
lean::inc(x_53);
lean::dec(x_5);
x_56 = lean::cnstr_get(x_6, 0);
x_58 = lean::cnstr_get_scalar<uint8>(x_6, sizeof(void*)*1);
if (lean::is_exclusive(x_6)) {
 x_59 = x_6;
} else {
 lean::inc(x_56);
 lean::dec(x_6);
 x_59 = lean::box(0);
}
if (lean::is_scalar(x_59)) {
 x_60 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_60 = x_59;
}
lean::cnstr_set(x_60, 0, x_56);
lean::cnstr_set_scalar(x_60, sizeof(void*)*1, x_58);
x_61 = x_60;
x_62 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_63 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_62, x_61);
x_64 = l_lean_parser_number_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__2___rarg___closed__1;
x_65 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_63, x_64);
x_66 = l_lean_parser_parsec__t_try__mk__res___rarg(x_65);
x_67 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_67, 0, x_66);
lean::cnstr_set(x_67, 1, x_53);
return x_67;
}
}
}
obj* l_lean_parser_number_parser___at_lean_parser_level_add__lit_parser_lean_parser_has__tokens___spec__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_number_parser___at_lean_parser_level_add__lit_parser_lean_parser_has__tokens___spec__2___rarg), 3, 0);
return x_4;
}
}
obj* _init_l_lean_parser_level_add__lit_parser_lean_parser_has__tokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::mk_string("+");
x_1 = lean::mk_nat_obj(0u);
x_2 = l_lean_parser_symbol_tokens___rarg(x_0, x_1);
x_3 = lean::box(0);
x_4 = l_lean_parser_list_cons_tokens___rarg(x_3, x_3);
x_5 = l_lean_parser_list_cons_tokens___rarg(x_2, x_4);
x_6 = l_lean_parser_level_lean_parser_has__tokens;
x_7 = l_lean_parser_list_cons_tokens___rarg(x_6, x_5);
x_8 = l_lean_parser_tokens___rarg(x_7);
return x_8;
}
}
obj* _init_l_lean_parser_level_add__lit_parser_lean_parser_has__view() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; 
x_0 = lean::mk_string("+");
x_1 = l_string_trim(x_0);
lean::inc(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_3, 0, x_1);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_level_add__lit_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_5, 0, x_1);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::box(0);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_number_parser___at_lean_parser_level_add__lit_parser_lean_parser_has__tokens___spec__2), 2, 0);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_5);
lean::cnstr_set(x_9, 1, x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_level_get__leading), 5, 0);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_9);
x_12 = l_lean_parser_trailing__level__parser__m_monad;
x_13 = l_lean_parser_trailing__level__parser__m_monad__except;
x_14 = l_lean_parser_trailing__level__parser__m_lean_parser_monad__parsec;
x_15 = l_lean_parser_trailing__level__parser__m_alternative;
x_16 = l_lean_parser_level_add__lit;
x_17 = l_lean_parser_level_add__lit_has__view;
x_18 = l_lean_parser_combinators_node_view___rarg(x_12, x_13, x_14, x_15, x_16, x_11, x_17);
return x_18;
}
}
obj* _init_l_lean_parser_level_add__lit_parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_0 = lean::mk_string("+");
x_1 = l_string_trim(x_0);
lean::inc(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_3, 0, x_1);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_level_add__lit_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_5, 0, x_1);
lean::closure_set(x_5, 1, x_4);
lean::closure_set(x_5, 2, x_3);
x_6 = lean::box(0);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_number_parser___at_lean_parser_level_add__lit_parser_lean_parser_has__tokens___spec__2), 2, 0);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_5);
lean::cnstr_set(x_9, 1, x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_level_get__leading), 5, 0);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_9);
return x_11;
}
}
obj* l_lean_parser_level_add__lit_parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; 
x_5 = l_lean_parser_level_add__lit;
x_6 = l_lean_parser_level_add__lit_parser___closed__1;
x_7 = l_lean_parser_combinators_node___at_lean_parser_level_app_parser___spec__1(x_5, x_6, x_0, x_1, x_2, x_3, x_4);
return x_7;
}
}
obj* _init_l_lean_parser_level_trailing() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("level");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("trailing");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_3 = lean::box(3);
x_4 = lean::mk_nat_obj(0u);
x_0 = x_3;
x_1 = x_4;
goto lbl_2;
lbl_2:
{
obj* x_5; uint8 x_6; 
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::nat_dec_eq(x_1, x_5);
lean::dec(x_1);
if (x_6 == 0)
{
obj* x_8; obj* x_9; obj* x_12; obj* x_13; 
x_8 = l_lean_parser_level_add__lit_has__view;
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
lean::dec(x_8);
x_12 = lean::apply_1(x_9, x_0);
x_13 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_13, 0, x_12);
return x_13;
}
else
{
obj* x_14; obj* x_15; obj* x_18; obj* x_19; 
x_14 = l_lean_parser_level_app_has__view;
x_15 = lean::cnstr_get(x_14, 0);
lean::inc(x_15);
lean::dec(x_14);
x_18 = lean::apply_1(x_15, x_0);
x_19 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_19, 0, x_18);
return x_19;
}
}
}
}
obj* _init_l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("level");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("trailing");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* l_lean_parser_level_trailing_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__1;
return x_5;
}
else
{
obj* x_6; obj* x_9; obj* x_11; obj* x_14; uint8 x_15; 
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
x_9 = lean::cnstr_get(x_6, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_6, 1);
lean::inc(x_11);
lean::dec(x_6);
x_14 = l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__2;
x_15 = lean_name_dec_eq(x_9, x_14);
lean::dec(x_9);
if (x_15 == 0)
{
obj* x_18; 
lean::dec(x_11);
x_18 = l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__1;
return x_18;
}
else
{
if (lean::obj_tag(x_11) == 0)
{
obj* x_19; 
x_19 = l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__1;
return x_19;
}
else
{
obj* x_20; 
x_20 = lean::cnstr_get(x_11, 1);
lean::inc(x_20);
if (lean::obj_tag(x_20) == 0)
{
obj* x_22; obj* x_25; 
x_22 = lean::cnstr_get(x_11, 0);
lean::inc(x_22);
lean::dec(x_11);
x_25 = l_lean_parser_syntax_as__node___main(x_22);
if (lean::obj_tag(x_25) == 0)
{
obj* x_26; 
x_26 = l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__1;
return x_26;
}
else
{
obj* x_27; obj* x_30; 
x_27 = lean::cnstr_get(x_25, 0);
lean::inc(x_27);
lean::dec(x_25);
x_30 = lean::cnstr_get(x_27, 0);
lean::inc(x_30);
switch (lean::obj_tag(x_30)) {
case 0:
{
obj* x_33; 
lean::dec(x_27);
x_33 = l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__1;
return x_33;
}
case 1:
{
obj* x_36; 
lean::dec(x_27);
lean::dec(x_30);
x_36 = l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__1;
return x_36;
}
default:
{
obj* x_37; obj* x_40; obj* x_42; obj* x_45; uint8 x_46; 
x_37 = lean::cnstr_get(x_27, 1);
lean::inc(x_37);
lean::dec(x_27);
x_40 = lean::cnstr_get(x_30, 0);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_30, 1);
lean::inc(x_42);
lean::dec(x_30);
x_45 = lean::box(0);
x_46 = lean_name_dec_eq(x_40, x_45);
lean::dec(x_40);
if (x_46 == 0)
{
obj* x_50; 
lean::dec(x_42);
lean::dec(x_37);
x_50 = l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__1;
return x_50;
}
else
{
if (lean::obj_tag(x_37) == 0)
{
obj* x_52; 
lean::dec(x_42);
x_52 = l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__1;
return x_52;
}
else
{
obj* x_53; 
x_53 = lean::cnstr_get(x_37, 1);
lean::inc(x_53);
if (lean::obj_tag(x_53) == 0)
{
obj* x_55; 
x_55 = lean::cnstr_get(x_37, 0);
lean::inc(x_55);
lean::dec(x_37);
x_1 = x_55;
x_2 = x_42;
goto lbl_3;
}
else
{
obj* x_61; 
lean::dec(x_42);
lean::dec(x_53);
lean::dec(x_37);
x_61 = l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__1;
return x_61;
}
}
}
}
}
}
}
else
{
obj* x_64; 
lean::dec(x_11);
lean::dec(x_20);
x_64 = l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__1;
return x_64;
}
}
}
}
lbl_3:
{
obj* x_65; uint8 x_66; 
x_65 = lean::mk_nat_obj(0u);
x_66 = lean::nat_dec_eq(x_2, x_65);
lean::dec(x_2);
if (x_66 == 0)
{
obj* x_68; obj* x_69; obj* x_72; obj* x_73; 
x_68 = l_lean_parser_level_add__lit_has__view;
x_69 = lean::cnstr_get(x_68, 0);
lean::inc(x_69);
lean::dec(x_68);
x_72 = lean::apply_1(x_69, x_1);
x_73 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_73, 0, x_72);
return x_73;
}
else
{
obj* x_74; obj* x_75; obj* x_78; obj* x_79; 
x_74 = l_lean_parser_level_app_has__view;
x_75 = lean::cnstr_get(x_74, 0);
lean::inc(x_75);
lean::dec(x_74);
x_78 = lean::apply_1(x_75, x_1);
x_79 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_79, 0, x_78);
return x_79;
}
}
}
}
obj* l_lean_parser_level_trailing_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::box(0);
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; obj* x_5; obj* x_6; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = l_lean_parser_level_app_has__view;
x_6 = lean::cnstr_get(x_5, 1);
lean::inc(x_6);
lean::dec(x_5);
x_9 = lean::apply_1(x_6, x_2);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_1);
x_11 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__1;
x_12 = l_lean_parser_syntax_mk__node(x_11, x_10);
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_1);
x_14 = l_lean_parser_level_trailing;
x_15 = l_lean_parser_syntax_mk__node(x_14, x_13);
return x_15;
}
else
{
obj* x_16; obj* x_19; obj* x_20; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; 
x_16 = lean::cnstr_get(x_0, 0);
lean::inc(x_16);
lean::dec(x_0);
x_19 = l_lean_parser_level_add__lit_has__view;
x_20 = lean::cnstr_get(x_19, 1);
lean::inc(x_20);
lean::dec(x_19);
x_23 = lean::apply_1(x_20, x_16);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_1);
x_25 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__2;
x_26 = l_lean_parser_syntax_mk__node(x_25, x_24);
x_27 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_1);
x_28 = l_lean_parser_level_trailing;
x_29 = l_lean_parser_syntax_mk__node(x_28, x_27);
return x_29;
}
}
}
obj* _init_l_lean_parser_level_trailing_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_level_trailing_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_level_trailing_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_level_trailing_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_level_trailing_has__view_x_27;
return x_0;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_level_trailing_parser_lean_parser_has__tokens___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8) {
_start:
{
obj* x_12; obj* x_13; uint8 x_14; obj* x_15; obj* x_16; obj* x_17; 
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
x_12 = l_option_get__or__else___main___rarg(x_2, x_7);
x_13 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_0);
lean::cnstr_set(x_13, 2, x_1);
lean::cnstr_set(x_13, 3, x_3);
x_14 = 0;
x_15 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_15, 0, x_13);
lean::cnstr_set_scalar(x_15, sizeof(void*)*1, x_14);
x_16 = x_15;
x_17 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_8);
return x_17;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_level_trailing_parser_lean_parser_has__tokens___spec__2(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_level_trailing_parser_lean_parser_has__tokens___spec__2___rarg), 9, 0);
return x_2;
}
}
obj* l_lean_parser_combinators_choice__aux___main___at_lean_parser_level_trailing_parser_lean_parser_has__tokens___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
lean::dec(x_1);
x_8 = lean::box(0);
x_9 = l_lean_parser_combinators_choice__aux___main___rarg___closed__1;
x_10 = l_mjoin___rarg___closed__1;
x_11 = l_lean_parser_monad__parsec_error___at_lean_parser_level_trailing_parser_lean_parser_has__tokens___spec__2___rarg(x_9, x_10, x_8, x_8, x_2, x_3, x_4, x_5, x_6);
return x_11;
}
else
{
obj* x_12; obj* x_14; obj* x_16; obj* x_21; obj* x_22; obj* x_24; obj* x_27; obj* x_28; 
x_12 = lean::cnstr_get(x_0, 0);
x_14 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_16 = x_0;
} else {
 lean::inc(x_12);
 lean::inc(x_14);
 lean::dec(x_0);
 x_16 = lean::box(0);
}
lean::inc(x_5);
lean::inc(x_4);
lean::inc(x_3);
lean::inc(x_2);
x_21 = lean::apply_5(x_12, x_2, x_3, x_4, x_5, x_6);
x_22 = lean::cnstr_get(x_21, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_21, 1);
lean::inc(x_24);
lean::dec(x_21);
x_27 = lean::mk_nat_obj(1u);
x_28 = lean::nat_add(x_1, x_27);
if (lean::obj_tag(x_22) == 0)
{
obj* x_29; obj* x_31; obj* x_33; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; 
x_29 = lean::cnstr_get(x_22, 0);
x_31 = lean::cnstr_get(x_22, 1);
x_33 = lean::cnstr_get(x_22, 2);
if (lean::is_exclusive(x_22)) {
 x_35 = x_22;
} else {
 lean::inc(x_29);
 lean::inc(x_31);
 lean::inc(x_33);
 lean::dec(x_22);
 x_35 = lean::box(0);
}
x_36 = lean::box(0);
x_37 = lean_name_mk_numeral(x_36, x_1);
x_38 = lean::box(0);
if (lean::is_scalar(x_16)) {
 x_39 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_39 = x_16;
}
lean::cnstr_set(x_39, 0, x_29);
lean::cnstr_set(x_39, 1, x_38);
x_40 = l_lean_parser_syntax_mk__node(x_37, x_39);
x_41 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_35)) {
 x_42 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_42 = x_35;
}
lean::cnstr_set(x_42, 0, x_40);
lean::cnstr_set(x_42, 1, x_31);
lean::cnstr_set(x_42, 2, x_41);
x_43 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_33, x_42);
if (lean::obj_tag(x_43) == 0)
{
obj* x_50; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_28);
lean::dec(x_14);
x_50 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_50, 0, x_43);
lean::cnstr_set(x_50, 1, x_24);
return x_50;
}
else
{
obj* x_51; uint8 x_53; 
x_51 = lean::cnstr_get(x_43, 0);
lean::inc(x_51);
x_53 = lean::cnstr_get_scalar<uint8>(x_43, sizeof(void*)*1);
if (x_53 == 0)
{
obj* x_55; obj* x_56; obj* x_58; obj* x_61; obj* x_62; 
lean::dec(x_43);
x_55 = l_lean_parser_combinators_choice__aux___main___at_lean_parser_level_trailing_parser_lean_parser_has__tokens___spec__1(x_14, x_28, x_2, x_3, x_4, x_5, x_24);
x_56 = lean::cnstr_get(x_55, 0);
lean::inc(x_56);
x_58 = lean::cnstr_get(x_55, 1);
lean::inc(x_58);
lean::dec(x_55);
x_61 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_51, x_56);
x_62 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_62, 0, x_61);
lean::cnstr_set(x_62, 1, x_58);
return x_62;
}
else
{
obj* x_70; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_51);
lean::dec(x_28);
lean::dec(x_14);
x_70 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_70, 0, x_43);
lean::cnstr_set(x_70, 1, x_24);
return x_70;
}
}
}
else
{
obj* x_73; uint8 x_75; obj* x_76; 
lean::dec(x_1);
lean::dec(x_16);
x_73 = lean::cnstr_get(x_22, 0);
x_75 = lean::cnstr_get_scalar<uint8>(x_22, sizeof(void*)*1);
if (lean::is_exclusive(x_22)) {
 lean::cnstr_set(x_22, 0, lean::box(0));
 x_76 = x_22;
} else {
 lean::inc(x_73);
 lean::dec(x_22);
 x_76 = lean::box(0);
}
if (x_75 == 0)
{
obj* x_78; obj* x_79; obj* x_81; obj* x_84; obj* x_85; 
lean::dec(x_76);
x_78 = l_lean_parser_combinators_choice__aux___main___at_lean_parser_level_trailing_parser_lean_parser_has__tokens___spec__1(x_14, x_28, x_2, x_3, x_4, x_5, x_24);
x_79 = lean::cnstr_get(x_78, 0);
lean::inc(x_79);
x_81 = lean::cnstr_get(x_78, 1);
lean::inc(x_81);
lean::dec(x_78);
x_84 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_73, x_79);
x_85 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_85, 0, x_84);
lean::cnstr_set(x_85, 1, x_81);
return x_85;
}
else
{
obj* x_92; obj* x_93; obj* x_94; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_28);
lean::dec(x_14);
if (lean::is_scalar(x_76)) {
 x_92 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_92 = x_76;
}
lean::cnstr_set(x_92, 0, x_73);
lean::cnstr_set_scalar(x_92, sizeof(void*)*1, x_75);
x_93 = x_92;
x_94 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_94, 0, x_93);
lean::cnstr_set(x_94, 1, x_24);
return x_94;
}
}
}
}
}
obj* _init_l_lean_parser_level_trailing_parser_lean_parser_has__tokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_0 = lean::box(0);
x_1 = l_lean_parser_level_add__lit_parser_lean_parser_has__tokens;
x_2 = l_lean_parser_list_cons_tokens___rarg(x_1, x_0);
x_3 = l_lean_parser_level_app_parser_lean_parser_has__tokens;
x_4 = l_lean_parser_list_cons_tokens___rarg(x_3, x_2);
x_5 = l_lean_parser_tokens___rarg(x_4);
x_6 = l_lean_parser_list_cons_tokens___rarg(x_5, x_0);
x_7 = l_lean_parser_tokens___rarg(x_6);
return x_7;
}
}
obj* _init_l_lean_parser_level_trailing_parser_lean_parser_has__view() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_0 = lean::box(0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_level_add__lit_parser), 5, 0);
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_1);
lean::cnstr_set(x_2, 1, x_0);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_level_app_parser), 5, 0);
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_3);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_choice__aux___main___at_lean_parser_level_trailing_parser_lean_parser_has__tokens___spec__1), 7, 2);
lean::closure_set(x_6, 0, x_4);
lean::closure_set(x_6, 1, x_5);
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_0);
x_8 = l_lean_parser_trailing__level__parser__m_monad;
x_9 = l_lean_parser_trailing__level__parser__m_monad__except;
x_10 = l_lean_parser_trailing__level__parser__m_lean_parser_monad__parsec;
x_11 = l_lean_parser_trailing__level__parser__m_alternative;
x_12 = l_lean_parser_level_trailing;
x_13 = l_lean_parser_level_trailing_has__view;
x_14 = l_lean_parser_combinators_node_view___rarg(x_8, x_9, x_10, x_11, x_12, x_7, x_13);
return x_14;
}
}
obj* _init_l_lean_parser_level_trailing_parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_0 = lean::box(0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_level_add__lit_parser), 5, 0);
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_1);
lean::cnstr_set(x_2, 1, x_0);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_level_app_parser), 5, 0);
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_3);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_choice__aux___main___at_lean_parser_level_trailing_parser_lean_parser_has__tokens___spec__1), 7, 2);
lean::closure_set(x_6, 0, x_4);
lean::closure_set(x_6, 1, x_5);
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_0);
return x_7;
}
}
obj* l_lean_parser_level_trailing_parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; 
x_5 = l_lean_parser_level_trailing;
x_6 = l_lean_parser_level_trailing_parser___closed__1;
x_7 = l_lean_parser_combinators_node___at_lean_parser_level_app_parser___spec__1(x_5, x_6, x_0, x_1, x_2, x_3, x_4);
return x_7;
}
}
obj* l_lean_parser_level__parser_run_lean_parser_has__tokens(obj* x_0) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; 
lean::dec(x_0);
x_2 = l_lean_parser_level_leading_parser_lean_parser_has__tokens;
x_3 = l_lean_parser_level_trailing_parser_lean_parser_has__tokens;
x_4 = l_list_append___rarg(x_2, x_3);
return x_4;
}
}
obj* _init_l_lean_parser_level__parser_run_lean_parser_has__view___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_has__monad__lift__t__refl), 2, 1);
lean::closure_set(x_0, 0, lean::box(0));
return x_0;
}
}
obj* _init_l_lean_parser_level__parser_run_lean_parser_has__view___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_level_leading_parser), 4, 0);
return x_0;
}
}
obj* _init_l_lean_parser_level__parser_run_lean_parser_has__view___closed__3() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_level_trailing_parser), 5, 0);
return x_0;
}
}
obj* l_lean_parser_level__parser_run_lean_parser_has__view(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_1 = l_lean_parser_basic__parser__m_monad;
x_2 = l_lean_parser_level__parser_run_lean_parser_has__view___closed__1;
x_3 = l_lean_parser_basic__parser__m_lean_parser_monad__parsec;
x_4 = l_lean_parser_basic__parser__m_monad__reader;
x_5 = l_lean_parser_basic__parser__m_monad__except;
x_6 = l_lean_parser_basic__parser__m_alternative;
x_7 = l_lean_parser_level__parser_run_lean_parser_has__view___closed__2;
x_8 = l_lean_parser_level__parser_run_lean_parser_has__view___closed__3;
x_9 = l_lean_parser_pratt__parser_view___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_0);
return x_9;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_level__parser_run___spec__3___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_10; obj* x_11; uint8 x_12; obj* x_13; obj* x_14; obj* x_15; 
lean::dec(x_5);
lean::dec(x_4);
x_10 = l_option_get__or__else___main___rarg(x_2, x_6);
x_11 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_0);
lean::cnstr_set(x_11, 2, x_1);
lean::cnstr_set(x_11, 3, x_3);
x_12 = 0;
x_13 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_13, 0, x_11);
lean::cnstr_set_scalar(x_13, sizeof(void*)*1, x_12);
x_14 = x_13;
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_7);
return x_15;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_level__parser_run___spec__3(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_level__parser_run___spec__3___rarg), 8, 0);
return x_2;
}
}
obj* l_lean_parser_curr__lbp___at_lean_parser_level__parser_run___spec__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_6; 
lean::inc(x_1);
x_5 = l_lean_parser_monad__parsec_observing___at_lean_parser_peek__token___spec__2(x_1, x_2, x_3);
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_8; 
x_8 = lean::cnstr_get(x_6, 0);
lean::inc(x_8);
if (lean::obj_tag(x_8) == 0)
{
obj* x_13; obj* x_16; obj* x_18; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; 
lean::dec(x_8);
lean::dec(x_1);
lean::dec(x_0);
x_13 = lean::cnstr_get(x_5, 1);
lean::inc(x_13);
lean::dec(x_5);
x_16 = lean::cnstr_get(x_6, 1);
x_18 = lean::cnstr_get(x_6, 2);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 x_20 = x_6;
} else {
 lean::inc(x_16);
 lean::inc(x_18);
 lean::dec(x_6);
 x_20 = lean::box(0);
}
x_21 = lean::mk_nat_obj(0u);
x_22 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_20)) {
 x_23 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_23 = x_20;
}
lean::cnstr_set(x_23, 0, x_21);
lean::cnstr_set(x_23, 1, x_16);
lean::cnstr_set(x_23, 2, x_22);
x_24 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_18, x_23);
x_25 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set(x_25, 1, x_13);
return x_25;
}
else
{
obj* x_26; 
x_26 = lean::cnstr_get(x_8, 0);
lean::inc(x_26);
lean::dec(x_8);
switch (lean::obj_tag(x_26)) {
case 0:
{
obj* x_29; obj* x_32; obj* x_34; obj* x_36; obj* x_37; obj* x_40; obj* x_43; obj* x_45; obj* x_46; 
x_29 = lean::cnstr_get(x_5, 1);
lean::inc(x_29);
lean::dec(x_5);
x_32 = lean::cnstr_get(x_6, 1);
x_34 = lean::cnstr_get(x_6, 2);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_set(x_6, 1, lean::box(0));
 lean::cnstr_set(x_6, 2, lean::box(0));
 x_36 = x_6;
} else {
 lean::inc(x_32);
 lean::inc(x_34);
 lean::dec(x_6);
 x_36 = lean::box(0);
}
x_37 = lean::cnstr_get(x_26, 0);
lean::inc(x_37);
lean::dec(x_26);
x_40 = lean::cnstr_get(x_37, 1);
lean::inc(x_40);
lean::dec(x_37);
x_43 = lean::cnstr_get(x_1, 1);
lean::inc(x_43);
x_45 = lean::string_mk_iterator(x_40);
x_46 = l_lean_parser_trie_match__prefix___rarg(x_43, x_45);
if (lean::obj_tag(x_46) == 0)
{
obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_54; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; 
lean::dec(x_36);
x_48 = lean::box(0);
x_49 = l_lean_parser_curr__lbp___rarg___lambda__1___closed__1;
x_50 = l_mjoin___rarg___closed__1;
x_51 = l_lean_parser_monad__parsec_error___at_lean_parser_level__parser_run___spec__3___rarg(x_49, x_50, x_48, x_48, x_0, x_1, x_32, x_29);
x_52 = lean::cnstr_get(x_51, 0);
lean::inc(x_52);
x_54 = lean::cnstr_get(x_51, 1);
lean::inc(x_54);
lean::dec(x_51);
x_57 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_58 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_57, x_52);
x_59 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_57, x_58);
x_60 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_34, x_59);
x_61 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_61, 0, x_60);
lean::cnstr_set(x_61, 1, x_54);
return x_61;
}
else
{
obj* x_64; obj* x_67; obj* x_70; obj* x_73; obj* x_74; obj* x_75; obj* x_76; 
lean::dec(x_1);
lean::dec(x_0);
x_64 = lean::cnstr_get(x_46, 0);
lean::inc(x_64);
lean::dec(x_46);
x_67 = lean::cnstr_get(x_64, 1);
lean::inc(x_67);
lean::dec(x_64);
x_70 = lean::cnstr_get(x_67, 1);
lean::inc(x_70);
lean::dec(x_67);
x_73 = l_lean_parser_match__token___closed__2;
if (lean::is_scalar(x_36)) {
 x_74 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_74 = x_36;
}
lean::cnstr_set(x_74, 0, x_70);
lean::cnstr_set(x_74, 1, x_32);
lean::cnstr_set(x_74, 2, x_73);
x_75 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_34, x_74);
x_76 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_76, 0, x_75);
lean::cnstr_set(x_76, 1, x_29);
return x_76;
}
}
case 1:
{
obj* x_80; obj* x_83; obj* x_85; obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_26);
x_80 = lean::cnstr_get(x_5, 1);
lean::inc(x_80);
lean::dec(x_5);
x_83 = lean::cnstr_get(x_6, 1);
x_85 = lean::cnstr_get(x_6, 2);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 x_87 = x_6;
} else {
 lean::inc(x_83);
 lean::inc(x_85);
 lean::dec(x_6);
 x_87 = lean::box(0);
}
x_88 = l_lean_parser_max__prec;
x_89 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_87)) {
 x_90 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_90 = x_87;
}
lean::cnstr_set(x_90, 0, x_88);
lean::cnstr_set(x_90, 1, x_83);
lean::cnstr_set(x_90, 2, x_89);
x_91 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_85, x_90);
x_92 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_92, 0, x_91);
lean::cnstr_set(x_92, 1, x_80);
return x_92;
}
case 2:
{
obj* x_93; obj* x_96; obj* x_98; obj* x_100; obj* x_101; obj* x_104; obj* x_107; uint8 x_108; 
x_93 = lean::cnstr_get(x_5, 1);
lean::inc(x_93);
lean::dec(x_5);
x_96 = lean::cnstr_get(x_6, 1);
x_98 = lean::cnstr_get(x_6, 2);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_set(x_6, 1, lean::box(0));
 lean::cnstr_set(x_6, 2, lean::box(0));
 x_100 = x_6;
} else {
 lean::inc(x_96);
 lean::inc(x_98);
 lean::dec(x_6);
 x_100 = lean::box(0);
}
x_101 = lean::cnstr_get(x_26, 0);
lean::inc(x_101);
lean::dec(x_26);
x_104 = lean::cnstr_get(x_101, 0);
lean::inc(x_104);
lean::dec(x_101);
x_107 = l_lean_parser_number_has__view_x_27___lambda__1___closed__6;
x_108 = lean_name_dec_eq(x_104, x_107);
if (x_108 == 0)
{
obj* x_109; uint8 x_110; 
x_109 = l_lean_parser_curr__lbp___rarg___lambda__3___closed__1;
x_110 = lean_name_dec_eq(x_104, x_109);
lean::dec(x_104);
if (x_110 == 0)
{
obj* x_113; obj* x_114; obj* x_115; obj* x_116; obj* x_117; obj* x_119; obj* x_122; obj* x_123; 
lean::dec(x_100);
x_113 = lean::box(0);
x_114 = l_lean_parser_curr__lbp___rarg___lambda__3___closed__2;
x_115 = l_mjoin___rarg___closed__1;
x_116 = l_lean_parser_monad__parsec_error___at_lean_parser_level__parser_run___spec__3___rarg(x_114, x_115, x_113, x_113, x_0, x_1, x_96, x_93);
x_117 = lean::cnstr_get(x_116, 0);
lean::inc(x_117);
x_119 = lean::cnstr_get(x_116, 1);
lean::inc(x_119);
lean::dec(x_116);
x_122 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_98, x_117);
x_123 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_123, 0, x_122);
lean::cnstr_set(x_123, 1, x_119);
return x_123;
}
else
{
obj* x_126; obj* x_127; obj* x_128; obj* x_129; obj* x_130; 
lean::dec(x_1);
lean::dec(x_0);
x_126 = l_lean_parser_max__prec;
x_127 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_100)) {
 x_128 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_128 = x_100;
}
lean::cnstr_set(x_128, 0, x_126);
lean::cnstr_set(x_128, 1, x_96);
lean::cnstr_set(x_128, 2, x_127);
x_129 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_98, x_128);
x_130 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_130, 0, x_129);
lean::cnstr_set(x_130, 1, x_93);
return x_130;
}
}
else
{
obj* x_134; obj* x_135; obj* x_136; obj* x_137; obj* x_138; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_104);
x_134 = l_lean_parser_max__prec;
x_135 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_100)) {
 x_136 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_136 = x_100;
}
lean::cnstr_set(x_136, 0, x_134);
lean::cnstr_set(x_136, 1, x_96);
lean::cnstr_set(x_136, 2, x_135);
x_137 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_98, x_136);
x_138 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_138, 0, x_137);
lean::cnstr_set(x_138, 1, x_93);
return x_138;
}
}
default:
{
obj* x_139; obj* x_142; obj* x_144; obj* x_147; obj* x_148; obj* x_149; obj* x_150; obj* x_151; obj* x_153; obj* x_156; obj* x_157; 
x_139 = lean::cnstr_get(x_5, 1);
lean::inc(x_139);
lean::dec(x_5);
x_142 = lean::cnstr_get(x_6, 1);
lean::inc(x_142);
x_144 = lean::cnstr_get(x_6, 2);
lean::inc(x_144);
lean::dec(x_6);
x_147 = lean::box(0);
x_148 = l_lean_parser_curr__lbp___rarg___lambda__3___closed__2;
x_149 = l_mjoin___rarg___closed__1;
x_150 = l_lean_parser_monad__parsec_error___at_lean_parser_level__parser_run___spec__3___rarg(x_148, x_149, x_147, x_147, x_0, x_1, x_142, x_139);
x_151 = lean::cnstr_get(x_150, 0);
lean::inc(x_151);
x_153 = lean::cnstr_get(x_150, 1);
lean::inc(x_153);
lean::dec(x_150);
x_156 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_144, x_151);
x_157 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_157, 0, x_156);
lean::cnstr_set(x_157, 1, x_153);
return x_157;
}
}
}
}
else
{
obj* x_160; obj* x_163; uint8 x_165; obj* x_166; obj* x_167; obj* x_168; obj* x_169; 
lean::dec(x_1);
lean::dec(x_0);
x_160 = lean::cnstr_get(x_5, 1);
lean::inc(x_160);
lean::dec(x_5);
x_163 = lean::cnstr_get(x_6, 0);
x_165 = lean::cnstr_get_scalar<uint8>(x_6, sizeof(void*)*1);
if (lean::is_exclusive(x_6)) {
 x_166 = x_6;
} else {
 lean::inc(x_163);
 lean::dec(x_6);
 x_166 = lean::box(0);
}
if (lean::is_scalar(x_166)) {
 x_167 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_167 = x_166;
}
lean::cnstr_set(x_167, 0, x_163);
lean::cnstr_set_scalar(x_167, sizeof(void*)*1, x_165);
x_168 = x_167;
x_169 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_169, 0, x_168);
lean::cnstr_set(x_169, 1, x_160);
return x_169;
}
}
}
obj* l___private_init_lean_parser_pratt_1__trailing__loop___main___at_lean_parser_level__parser_run___spec__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; uint8 x_9; 
x_8 = lean::mk_nat_obj(0u);
x_9 = lean::nat_dec_eq(x_2, x_8);
if (x_9 == 0)
{
obj* x_12; obj* x_13; 
lean::inc(x_5);
lean::inc(x_4);
x_12 = l_lean_parser_curr__lbp___at_lean_parser_level__parser_run___spec__4(x_4, x_5, x_6, x_7);
x_13 = lean::cnstr_get(x_12, 0);
lean::inc(x_13);
if (lean::obj_tag(x_13) == 0)
{
obj* x_15; obj* x_18; obj* x_20; obj* x_22; obj* x_24; uint8 x_25; 
x_15 = lean::cnstr_get(x_12, 1);
lean::inc(x_15);
lean::dec(x_12);
x_18 = lean::cnstr_get(x_13, 0);
x_20 = lean::cnstr_get(x_13, 1);
x_22 = lean::cnstr_get(x_13, 2);
if (lean::is_exclusive(x_13)) {
 lean::cnstr_set(x_13, 0, lean::box(0));
 lean::cnstr_set(x_13, 1, lean::box(0));
 lean::cnstr_set(x_13, 2, lean::box(0));
 x_24 = x_13;
} else {
 lean::inc(x_18);
 lean::inc(x_20);
 lean::inc(x_22);
 lean::dec(x_13);
 x_24 = lean::box(0);
}
x_25 = lean::nat_dec_lt(x_1, x_18);
lean::dec(x_18);
if (x_25 == 0)
{
obj* x_32; obj* x_33; obj* x_34; obj* x_35; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_32 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_24)) {
 x_33 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_33 = x_24;
}
lean::cnstr_set(x_33, 0, x_3);
lean::cnstr_set(x_33, 1, x_20);
lean::cnstr_set(x_33, 2, x_32);
x_34 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_22, x_33);
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_34);
lean::cnstr_set(x_35, 1, x_15);
return x_35;
}
else
{
obj* x_37; obj* x_38; obj* x_43; obj* x_44; 
lean::dec(x_24);
x_37 = lean::mk_nat_obj(1u);
x_38 = lean::nat_sub(x_2, x_37);
lean::dec(x_2);
lean::inc(x_5);
lean::inc(x_4);
lean::inc(x_0);
x_43 = lean::apply_5(x_0, x_3, x_4, x_5, x_20, x_15);
x_44 = lean::cnstr_get(x_43, 0);
lean::inc(x_44);
if (lean::obj_tag(x_44) == 0)
{
obj* x_46; obj* x_49; obj* x_51; obj* x_53; obj* x_56; obj* x_57; obj* x_59; obj* x_62; obj* x_63; obj* x_64; 
x_46 = lean::cnstr_get(x_43, 1);
lean::inc(x_46);
lean::dec(x_43);
x_49 = lean::cnstr_get(x_44, 0);
lean::inc(x_49);
x_51 = lean::cnstr_get(x_44, 1);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_44, 2);
lean::inc(x_53);
lean::dec(x_44);
x_56 = l___private_init_lean_parser_pratt_1__trailing__loop___main___at_lean_parser_level__parser_run___spec__2(x_0, x_1, x_38, x_49, x_4, x_5, x_51, x_46);
x_57 = lean::cnstr_get(x_56, 0);
lean::inc(x_57);
x_59 = lean::cnstr_get(x_56, 1);
lean::inc(x_59);
lean::dec(x_56);
x_62 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_53, x_57);
x_63 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_22, x_62);
x_64 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_64, 0, x_63);
lean::cnstr_set(x_64, 1, x_59);
return x_64;
}
else
{
obj* x_70; obj* x_73; uint8 x_75; obj* x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_38);
x_70 = lean::cnstr_get(x_43, 1);
lean::inc(x_70);
lean::dec(x_43);
x_73 = lean::cnstr_get(x_44, 0);
x_75 = lean::cnstr_get_scalar<uint8>(x_44, sizeof(void*)*1);
if (lean::is_exclusive(x_44)) {
 x_76 = x_44;
} else {
 lean::inc(x_73);
 lean::dec(x_44);
 x_76 = lean::box(0);
}
if (lean::is_scalar(x_76)) {
 x_77 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_77 = x_76;
}
lean::cnstr_set(x_77, 0, x_73);
lean::cnstr_set_scalar(x_77, sizeof(void*)*1, x_75);
x_78 = x_77;
x_79 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_22, x_78);
x_80 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_80, 0, x_79);
lean::cnstr_set(x_80, 1, x_70);
return x_80;
}
}
}
else
{
obj* x_87; obj* x_90; uint8 x_92; obj* x_93; obj* x_94; obj* x_95; obj* x_96; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
x_87 = lean::cnstr_get(x_12, 1);
lean::inc(x_87);
lean::dec(x_12);
x_90 = lean::cnstr_get(x_13, 0);
x_92 = lean::cnstr_get_scalar<uint8>(x_13, sizeof(void*)*1);
if (lean::is_exclusive(x_13)) {
 x_93 = x_13;
} else {
 lean::inc(x_90);
 lean::dec(x_13);
 x_93 = lean::box(0);
}
if (lean::is_scalar(x_93)) {
 x_94 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_94 = x_93;
}
lean::cnstr_set(x_94, 0, x_90);
lean::cnstr_set_scalar(x_94, sizeof(void*)*1, x_92);
x_95 = x_94;
x_96 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_96, 0, x_95);
lean::cnstr_set(x_96, 1, x_87);
return x_96;
}
}
else
{
obj* x_101; obj* x_102; obj* x_103; obj* x_104; 
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
x_101 = lean::box(0);
x_102 = l___private_init_lean_parser_combinators_1__many1__aux___main___rarg___closed__1;
x_103 = l_mjoin___rarg___closed__1;
x_104 = l_lean_parser_monad__parsec_error___at_lean_parser_level__parser_run___spec__3___rarg(x_102, x_103, x_101, x_101, x_4, x_5, x_6, x_7);
return x_104;
}
}
}
obj* l___private_init_lean_parser_rec_1__run__aux___at_lean_parser_level__parser_run___spec__7(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; obj* x_8; 
x_7 = l___private_init_lean_parser_rec_1__run__aux___main___rarg(x_0, x_1, x_2, x_3);
x_8 = lean::apply_3(x_7, x_4, x_5, x_6);
return x_8;
}
}
obj* l_lean_parser_rec__t_run___at_lean_parser_level__parser_run___spec__6(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; obj* x_8; 
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l___private_init_lean_parser_rec_1__run__aux___at_lean_parser_level__parser_run___spec__7), 7, 3);
lean::closure_set(x_7, 0, x_1);
lean::closure_set(x_7, 1, x_2);
lean::closure_set(x_7, 2, x_3);
x_8 = lean::apply_4(x_0, x_7, x_4, x_5, x_6);
return x_8;
}
}
obj* l_lean_parser_rec__t_run__parsec___at_lean_parser_level__parser_run___spec__5(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_11; obj* x_13; obj* x_16; obj* x_17; obj* x_18; 
x_5 = lean::string_iterator_remaining(x_3);
x_6 = lean::mk_nat_obj(1u);
x_7 = lean::nat_add(x_5, x_6);
lean::dec(x_5);
x_9 = l_lean_parser_rec__t_run__parsec___at_lean_parser_detail__ident_parser___spec__1___closed__1;
x_10 = l_lean_parser_rec__t_run___at_lean_parser_level__parser_run___spec__6(x_0, x_9, x_1, x_7, x_2, x_3, x_4);
x_11 = lean::cnstr_get(x_10, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_10, 1);
lean::inc(x_13);
lean::dec(x_10);
x_16 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_17 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_16, x_11);
x_18 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_13);
return x_18;
}
}
obj* l_lean_parser_pratt__parser___at_lean_parser_level__parser_run___spec__1___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_9; obj* x_10; 
lean::inc(x_4);
lean::inc(x_3);
x_9 = lean::apply_4(x_0, x_3, x_4, x_5, x_6);
x_10 = lean::cnstr_get(x_9, 0);
lean::inc(x_10);
if (lean::obj_tag(x_10) == 0)
{
obj* x_12; obj* x_15; obj* x_17; obj* x_19; obj* x_22; obj* x_23; obj* x_24; obj* x_26; obj* x_27; obj* x_29; obj* x_32; obj* x_33; obj* x_34; obj* x_35; 
x_12 = lean::cnstr_get(x_9, 1);
lean::inc(x_12);
lean::dec(x_9);
x_15 = lean::cnstr_get(x_10, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_10, 1);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_10, 2);
lean::inc(x_19);
lean::dec(x_10);
x_22 = lean::string_iterator_remaining(x_17);
x_23 = lean::mk_nat_obj(1u);
x_24 = lean::nat_add(x_22, x_23);
lean::dec(x_22);
x_26 = l___private_init_lean_parser_pratt_1__trailing__loop___main___at_lean_parser_level__parser_run___spec__2(x_1, x_2, x_24, x_15, x_3, x_4, x_17, x_12);
x_27 = lean::cnstr_get(x_26, 0);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_26, 1);
lean::inc(x_29);
lean::dec(x_26);
x_32 = l_lean_parser_finish__comment__block___closed__2;
x_33 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_32, x_27);
x_34 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_33);
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_34);
lean::cnstr_set(x_35, 1, x_29);
return x_35;
}
else
{
obj* x_40; obj* x_43; uint8 x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; 
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_2);
x_40 = lean::cnstr_get(x_9, 1);
lean::inc(x_40);
lean::dec(x_9);
x_43 = lean::cnstr_get(x_10, 0);
x_45 = lean::cnstr_get_scalar<uint8>(x_10, sizeof(void*)*1);
if (lean::is_exclusive(x_10)) {
 x_46 = x_10;
} else {
 lean::inc(x_43);
 lean::dec(x_10);
 x_46 = lean::box(0);
}
if (lean::is_scalar(x_46)) {
 x_47 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_47 = x_46;
}
lean::cnstr_set(x_47, 0, x_43);
lean::cnstr_set_scalar(x_47, sizeof(void*)*1, x_45);
x_48 = x_47;
x_49 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_49, 0, x_48);
lean::cnstr_set(x_49, 1, x_40);
return x_49;
}
}
}
obj* l_lean_parser_pratt__parser___at_lean_parser_level__parser_run___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; 
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_pratt__parser___at_lean_parser_level__parser_run___spec__1___lambda__1), 7, 2);
lean::closure_set(x_6, 0, x_0);
lean::closure_set(x_6, 1, x_1);
x_7 = l_lean_parser_rec__t_run__parsec___at_lean_parser_level__parser_run___spec__5(x_2, x_6, x_3, x_4, x_5);
return x_7;
}
}
obj* l_lean_parser_level__parser_run(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = l_lean_parser_level__parser_run_lean_parser_has__view___closed__2;
x_5 = l_lean_parser_level__parser_run_lean_parser_has__view___closed__3;
x_6 = l_lean_parser_pratt__parser___at_lean_parser_level__parser_run___spec__1(x_4, x_5, x_0, x_1, x_2, x_3);
return x_6;
}
}
obj* _init_l_lean_parser_level__parser__coe() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_level__parser_run), 4, 0);
return x_0;
}
}
void initialize_init_lean_parser_pratt();
static bool _G_initialized = false;
void initialize_init_lean_parser_level() {
 if (_G_initialized) return;
 _G_initialized = true;
 initialize_init_lean_parser_pratt();
 l_lean_parser_level__parser__m_monad = _init_l_lean_parser_level__parser__m_monad();
lean::mark_persistent(l_lean_parser_level__parser__m_monad);
 l_lean_parser_level__parser__m_alternative = _init_l_lean_parser_level__parser__m_alternative();
lean::mark_persistent(l_lean_parser_level__parser__m_alternative);
 l_lean_parser_level__parser__m_monad__reader = _init_l_lean_parser_level__parser__m_monad__reader();
lean::mark_persistent(l_lean_parser_level__parser__m_monad__reader);
 l_lean_parser_level__parser__m_lean_parser_monad__parsec = _init_l_lean_parser_level__parser__m_lean_parser_monad__parsec();
lean::mark_persistent(l_lean_parser_level__parser__m_lean_parser_monad__parsec);
 l_lean_parser_level__parser__m_monad__except = _init_l_lean_parser_level__parser__m_monad__except();
lean::mark_persistent(l_lean_parser_level__parser__m_monad__except);
 l_lean_parser_level__parser__m_lean_parser_monad__rec = _init_l_lean_parser_level__parser__m_lean_parser_monad__rec();
lean::mark_persistent(l_lean_parser_level__parser__m_lean_parser_monad__rec);
 l_lean_parser_level__parser__m_lean_parser_monad__basic__parser = _init_l_lean_parser_level__parser__m_lean_parser_monad__basic__parser();
lean::mark_persistent(l_lean_parser_level__parser__m_lean_parser_monad__basic__parser);
 l_lean_parser_level__parser__m = _init_l_lean_parser_level__parser__m();
lean::mark_persistent(l_lean_parser_level__parser__m);
 l_lean_parser_level__parser = _init_l_lean_parser_level__parser();
lean::mark_persistent(l_lean_parser_level__parser);
 l_lean_parser_trailing__level__parser__m_monad = _init_l_lean_parser_trailing__level__parser__m_monad();
lean::mark_persistent(l_lean_parser_trailing__level__parser__m_monad);
 l_lean_parser_trailing__level__parser__m_alternative = _init_l_lean_parser_trailing__level__parser__m_alternative();
lean::mark_persistent(l_lean_parser_trailing__level__parser__m_alternative);
 l_lean_parser_trailing__level__parser__m_monad__reader = _init_l_lean_parser_trailing__level__parser__m_monad__reader();
lean::mark_persistent(l_lean_parser_trailing__level__parser__m_monad__reader);
 l_lean_parser_trailing__level__parser__m_lean_parser_monad__parsec = _init_l_lean_parser_trailing__level__parser__m_lean_parser_monad__parsec();
lean::mark_persistent(l_lean_parser_trailing__level__parser__m_lean_parser_monad__parsec);
 l_lean_parser_trailing__level__parser__m_monad__except = _init_l_lean_parser_trailing__level__parser__m_monad__except();
lean::mark_persistent(l_lean_parser_trailing__level__parser__m_monad__except);
 l_lean_parser_trailing__level__parser__m_lean_parser_monad__rec = _init_l_lean_parser_trailing__level__parser__m_lean_parser_monad__rec();
lean::mark_persistent(l_lean_parser_trailing__level__parser__m_lean_parser_monad__rec);
 l_lean_parser_trailing__level__parser__m_lean_parser_monad__basic__parser = _init_l_lean_parser_trailing__level__parser__m_lean_parser_monad__basic__parser();
lean::mark_persistent(l_lean_parser_trailing__level__parser__m_lean_parser_monad__basic__parser);
 l_lean_parser_trailing__level__parser__m = _init_l_lean_parser_trailing__level__parser__m();
lean::mark_persistent(l_lean_parser_trailing__level__parser__m);
 l_lean_parser_trailing__level__parser = _init_l_lean_parser_trailing__level__parser();
lean::mark_persistent(l_lean_parser_trailing__level__parser);
 l_lean_parser_level_parser_lean_parser_has__tokens___closed__1 = _init_l_lean_parser_level_parser_lean_parser_has__tokens___closed__1();
lean::mark_persistent(l_lean_parser_level_parser_lean_parser_has__tokens___closed__1);
 l_lean_parser_level_parser_lean_parser_has__view___closed__1 = _init_l_lean_parser_level_parser_lean_parser_has__view___closed__1();
lean::mark_persistent(l_lean_parser_level_parser_lean_parser_has__view___closed__1);
 l_lean_parser_level_parser___closed__1 = _init_l_lean_parser_level_parser___closed__1();
lean::mark_persistent(l_lean_parser_level_parser___closed__1);
 l_lean_parser_level_lean_parser_has__tokens = _init_l_lean_parser_level_lean_parser_has__tokens();
lean::mark_persistent(l_lean_parser_level_lean_parser_has__tokens);
 l_lean_parser_level_lean_parser_has__view = _init_l_lean_parser_level_lean_parser_has__view();
lean::mark_persistent(l_lean_parser_level_lean_parser_has__view);
 l_lean_parser_level_paren = _init_l_lean_parser_level_paren();
lean::mark_persistent(l_lean_parser_level_paren);
 l_lean_parser_level_paren_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_level_paren_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_level_paren_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_level_paren_has__view_x_27 = _init_l_lean_parser_level_paren_has__view_x_27();
lean::mark_persistent(l_lean_parser_level_paren_has__view_x_27);
 l_lean_parser_level_paren_has__view = _init_l_lean_parser_level_paren_has__view();
lean::mark_persistent(l_lean_parser_level_paren_has__view);
 l_lean_parser_level_paren_parser_lean_parser_has__tokens = _init_l_lean_parser_level_paren_parser_lean_parser_has__tokens();
lean::mark_persistent(l_lean_parser_level_paren_parser_lean_parser_has__tokens);
 l_lean_parser_level_paren_parser_lean_parser_has__view = _init_l_lean_parser_level_paren_parser_lean_parser_has__view();
lean::mark_persistent(l_lean_parser_level_paren_parser_lean_parser_has__view);
 l_lean_parser_level_paren_parser___closed__1 = _init_l_lean_parser_level_paren_parser___closed__1();
lean::mark_persistent(l_lean_parser_level_paren_parser___closed__1);
 l_lean_parser_level_leading = _init_l_lean_parser_level_leading();
lean::mark_persistent(l_lean_parser_level_leading);
 l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__2 = _init_l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__2();
lean::mark_persistent(l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__2);
 l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__3 = _init_l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__3();
lean::mark_persistent(l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__3);
 l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__4 = _init_l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__4();
lean::mark_persistent(l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__4);
 l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__5 = _init_l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__5();
lean::mark_persistent(l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__5);
 l_lean_parser_level_leading_has__view_x_27___lambda__2___closed__1 = _init_l_lean_parser_level_leading_has__view_x_27___lambda__2___closed__1();
lean::mark_persistent(l_lean_parser_level_leading_has__view_x_27___lambda__2___closed__1);
 l_lean_parser_level_leading_has__view_x_27___lambda__2___closed__2 = _init_l_lean_parser_level_leading_has__view_x_27___lambda__2___closed__2();
lean::mark_persistent(l_lean_parser_level_leading_has__view_x_27___lambda__2___closed__2);
 l_lean_parser_level_leading_has__view_x_27 = _init_l_lean_parser_level_leading_has__view_x_27();
lean::mark_persistent(l_lean_parser_level_leading_has__view_x_27);
 l_lean_parser_level_leading_has__view = _init_l_lean_parser_level_leading_has__view();
lean::mark_persistent(l_lean_parser_level_leading_has__view);
 l_lean_parser_number_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__2___rarg___closed__1 = _init_l_lean_parser_number_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__2___rarg___closed__1();
lean::mark_persistent(l_lean_parser_number_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__2___rarg___closed__1);
 l_lean_parser_ident_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__3___rarg___closed__1 = _init_l_lean_parser_ident_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__3___rarg___closed__1();
lean::mark_persistent(l_lean_parser_ident_parser___at_lean_parser_level_leading_parser_lean_parser_has__tokens___spec__3___rarg___closed__1);
 l_lean_parser_level_leading_parser_lean_parser_has__tokens = _init_l_lean_parser_level_leading_parser_lean_parser_has__tokens();
lean::mark_persistent(l_lean_parser_level_leading_parser_lean_parser_has__tokens);
 l_lean_parser_level_leading_parser_lean_parser_has__view = _init_l_lean_parser_level_leading_parser_lean_parser_has__view();
lean::mark_persistent(l_lean_parser_level_leading_parser_lean_parser_has__view);
 l_lean_parser_level_leading_parser___closed__1 = _init_l_lean_parser_level_leading_parser___closed__1();
lean::mark_persistent(l_lean_parser_level_leading_parser___closed__1);
 l_lean_parser_level_app = _init_l_lean_parser_level_app();
lean::mark_persistent(l_lean_parser_level_app);
 l_lean_parser_level_app_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_level_app_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_level_app_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_level_app_has__view_x_27 = _init_l_lean_parser_level_app_has__view_x_27();
lean::mark_persistent(l_lean_parser_level_app_has__view_x_27);
 l_lean_parser_level_app_has__view = _init_l_lean_parser_level_app_has__view();
lean::mark_persistent(l_lean_parser_level_app_has__view);
 l_lean_parser_level_app_parser_lean_parser_has__tokens = _init_l_lean_parser_level_app_parser_lean_parser_has__tokens();
lean::mark_persistent(l_lean_parser_level_app_parser_lean_parser_has__tokens);
 l_lean_parser_level_app_parser_lean_parser_has__view = _init_l_lean_parser_level_app_parser_lean_parser_has__view();
lean::mark_persistent(l_lean_parser_level_app_parser_lean_parser_has__view);
 l_lean_parser_level_app_parser___closed__1 = _init_l_lean_parser_level_app_parser___closed__1();
lean::mark_persistent(l_lean_parser_level_app_parser___closed__1);
 l_lean_parser_level_add__lit = _init_l_lean_parser_level_add__lit();
lean::mark_persistent(l_lean_parser_level_add__lit);
 l_lean_parser_level_add__lit_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_level_add__lit_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_level_add__lit_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_level_add__lit_has__view_x_27___lambda__1___closed__2 = _init_l_lean_parser_level_add__lit_has__view_x_27___lambda__1___closed__2();
lean::mark_persistent(l_lean_parser_level_add__lit_has__view_x_27___lambda__1___closed__2);
 l_lean_parser_level_add__lit_has__view_x_27 = _init_l_lean_parser_level_add__lit_has__view_x_27();
lean::mark_persistent(l_lean_parser_level_add__lit_has__view_x_27);
 l_lean_parser_level_add__lit_has__view = _init_l_lean_parser_level_add__lit_has__view();
lean::mark_persistent(l_lean_parser_level_add__lit_has__view);
 l_lean_parser_level_add__lit_parser_lean_parser_has__tokens = _init_l_lean_parser_level_add__lit_parser_lean_parser_has__tokens();
lean::mark_persistent(l_lean_parser_level_add__lit_parser_lean_parser_has__tokens);
 l_lean_parser_level_add__lit_parser_lean_parser_has__view = _init_l_lean_parser_level_add__lit_parser_lean_parser_has__view();
lean::mark_persistent(l_lean_parser_level_add__lit_parser_lean_parser_has__view);
 l_lean_parser_level_add__lit_parser___closed__1 = _init_l_lean_parser_level_add__lit_parser___closed__1();
lean::mark_persistent(l_lean_parser_level_add__lit_parser___closed__1);
 l_lean_parser_level_trailing = _init_l_lean_parser_level_trailing();
lean::mark_persistent(l_lean_parser_level_trailing);
 l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__2 = _init_l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__2();
lean::mark_persistent(l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__2);
 l_lean_parser_level_trailing_has__view_x_27 = _init_l_lean_parser_level_trailing_has__view_x_27();
lean::mark_persistent(l_lean_parser_level_trailing_has__view_x_27);
 l_lean_parser_level_trailing_has__view = _init_l_lean_parser_level_trailing_has__view();
lean::mark_persistent(l_lean_parser_level_trailing_has__view);
 l_lean_parser_level_trailing_parser_lean_parser_has__tokens = _init_l_lean_parser_level_trailing_parser_lean_parser_has__tokens();
lean::mark_persistent(l_lean_parser_level_trailing_parser_lean_parser_has__tokens);
 l_lean_parser_level_trailing_parser_lean_parser_has__view = _init_l_lean_parser_level_trailing_parser_lean_parser_has__view();
lean::mark_persistent(l_lean_parser_level_trailing_parser_lean_parser_has__view);
 l_lean_parser_level_trailing_parser___closed__1 = _init_l_lean_parser_level_trailing_parser___closed__1();
lean::mark_persistent(l_lean_parser_level_trailing_parser___closed__1);
 l_lean_parser_level__parser_run_lean_parser_has__view___closed__1 = _init_l_lean_parser_level__parser_run_lean_parser_has__view___closed__1();
lean::mark_persistent(l_lean_parser_level__parser_run_lean_parser_has__view___closed__1);
 l_lean_parser_level__parser_run_lean_parser_has__view___closed__2 = _init_l_lean_parser_level__parser_run_lean_parser_has__view___closed__2();
lean::mark_persistent(l_lean_parser_level__parser_run_lean_parser_has__view___closed__2);
 l_lean_parser_level__parser_run_lean_parser_has__view___closed__3 = _init_l_lean_parser_level__parser_run_lean_parser_has__view___closed__3();
lean::mark_persistent(l_lean_parser_level__parser_run_lean_parser_has__view___closed__3);
 l_lean_parser_level__parser__coe = _init_l_lean_parser_level__parser__coe();
lean::mark_persistent(l_lean_parser_level__parser__coe);
}
