// This file was automatically generated by EbnfStudio; don't modify it!
#include "LjasSynTree.h"
using namespace Ljas;

SynTree::SynTree(quint16 r, const Token& t ):d_tok(r){
	d_tok.d_lineNr = t.d_lineNr;
	d_tok.d_colNr = t.d_colNr;
	d_tok.d_sourcePath = t.d_sourcePath;
}

const char* SynTree::rToStr( quint16 r ) {
	switch(r) {
		case R_ADD_: return "ADD_";
		case R_CALLT_: return "CALLT_";
		case R_CALL_: return "CALL_";
		case R_CAT_: return "CAT_";
		case R_DIV_: return "DIV_";
		case R_FNEW_: return "FNEW_";
		case R_FORI_: return "FORI_";
		case R_FORL_: return "FORL_";
		case R_GGET_: return "GGET_";
		case R_GSET_: return "GSET_";
		case R_ISEQ_: return "ISEQ_";
		case R_ISFC_: return "ISFC_";
		case R_ISF_: return "ISF_";
		case R_ISGE_: return "ISGE_";
		case R_ISGT_: return "ISGT_";
		case R_ISLE_: return "ISLE_";
		case R_ISLT_: return "ISLT_";
		case R_ISNE_: return "ISNE_";
		case R_ISTC_: return "ISTC_";
		case R_IST_: return "IST_";
		case R_JMP_: return "JMP_";
		case R_KNIL_: return "KNIL_";
		case R_KSET_: return "KSET_";
		case R_LEN_: return "LEN_";
		case R_LOOP_: return "LOOP_";
		case R_LjAsm: return "LjAsm";
		case R_MOD_: return "MOD_";
		case R_MOV_: return "MOV_";
		case R_MUL_: return "MUL_";
		case R_NOT_: return "NOT_";
		case R_POW_: return "POW_";
		case R_RET_: return "RET_";
		case R_SUB_: return "SUB_";
		case R_TDUP_: return "TDUP_";
		case R_TGET_: return "TGET_";
		case R_TNEW_: return "TNEW_";
		case R_TSET_: return "TSET_";
		case R_UCLO_: return "UCLO_";
		case R_UGET_: return "UGET_";
		case R_UNM_: return "UNM_";
		case R_USET_: return "USET_";
		case R_cname: return "cname";
		case R_comment_: return "comment";
		case R_const_decls: return "const_decls";
		case R_const_val: return "const_val";
		case R_desig: return "desig";
		case R_fname: return "fname";
		case R_formal_params: return "formal_params";
		case R_function_body: return "function_body";
		case R_function_decl: return "function_decl";
		case R_function_header: return "function_header";
		case R_integer: return "integer";
		case R_label: return "label";
		case R_labelDef: return "labelDef";
		case R_number: return "number";
		case R_primitive: return "primitive";
		case R_record: return "record";
		case R_statement: return "statement";
		case R_table_literal: return "table_literal";
		case R_var_decl: return "var_decl";
		case R_var_decls: return "var_decls";
		case R_vname: return "vname";
	default: if(r<R_First) return tokenTypeName(r); else return "";
}
}
