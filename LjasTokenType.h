#ifndef __LJAS_TOKENTYPE__
#define __LJAS_TOKENTYPE__
// This file was automatically generated by EbnfStudio; don't modify it!


#include <QByteArray>

namespace Ljas {
	enum TokenType {
		Tok_Invalid = 0,

		TT_Literals,
		Tok_Lpar,
		Tok_Rpar,
		Tok_2Minus,
		Tok_2MinusLbrack,
		Tok_Dot,
		Tok_Colon,
		Tok_Eq,
		Tok_Rbrack2Minus,
		Tok_Lbrace,
		Tok_Rbrace,

		TT_Keywords,
		Tok_ADD,
		Tok_CALL,
		Tok_CALLT,
		Tok_CAT,
		Tok_DIV,
		Tok_FNEW,
		Tok_FORI,
		Tok_FORL,
		Tok_GGET,
		Tok_GSET,
		Tok_ISEQ,
		Tok_ISF,
		Tok_ISFC,
		Tok_ISGE,
		Tok_ISGT,
		Tok_ISLE,
		Tok_ISLT,
		Tok_ISNE,
		Tok_IST,
		Tok_ISTC,
		Tok_JMP,
		Tok_KNIL,
		Tok_KSET,
		Tok_LEN,
		Tok_LOOP,
		Tok_MOD,
		Tok_MOV,
		Tok_MUL,
		Tok_NOT,
		Tok_POW,
		Tok_RET,
		Tok_SUB,
		Tok_TDUP,
		Tok_TGET,
		Tok_TNEW,
		Tok_TSET,
		Tok_UCLO,
		Tok_UGET,
		Tok_UNM,
		Tok_USET,
		Tok_begin,
		Tok_const,
		Tok_end,
		Tok_false,
		Tok_function,
		Tok_nil,
		Tok_true,
		Tok_var,

		TT_Specials,
		Tok_ident,
		Tok_string,
		Tok_real,
		Tok_posint,
		Tok_negint,
		Tok_Comment,
		Tok_Eof,

		TT_MaxToken,

		TT_Max
	};

	const char* tokenTypeString( int ); // Pretty with punctuation chars
	const char* tokenTypeName( int ); // Just the names without punctuation chars
	bool tokenTypeIsLiteral( int );
	bool tokenTypeIsKeyword( int );
	bool tokenTypeIsSpecial( int );
	TokenType tokenTypeFromString( const QByteArray& str, int* pos = 0 );
}
#endif // __LJAS_TOKENTYPE__
