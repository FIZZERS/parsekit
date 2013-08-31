#import "ParseKit/PKSParser.h"

enum {
    JAVASCRIPT_TOKEN_KIND_PIPE = 14,
    JAVASCRIPT_TOKEN_KIND_NE,
    JAVASCRIPT_TOKEN_KIND_OPENPAREN,
    JAVASCRIPT_TOKEN_KIND_CLOSECURLY,
    JAVASCRIPT_TOKEN_KIND_RETURNSYM,
    JAVASCRIPT_TOKEN_KIND_TILDE,
    JAVASCRIPT_TOKEN_KIND_CLOSEPAREN,
    JAVASCRIPT_TOKEN_KIND_TIMES,
    JAVASCRIPT_TOKEN_KIND_DELETE,
    JAVASCRIPT_TOKEN_KIND_ISNOT,
    JAVASCRIPT_TOKEN_KIND_PLUS,
    JAVASCRIPT_TOKEN_KIND_TIMESEQ,
    JAVASCRIPT_TOKEN_KIND_INSTANCEOF,
    JAVASCRIPT_TOKEN_KIND_COMMA,
    JAVASCRIPT_TOKEN_KIND_SHIFTLEFTEQ,
    JAVASCRIPT_TOKEN_KIND_IFSYM,
    JAVASCRIPT_TOKEN_KIND_MINUS,
    JAVASCRIPT_TOKEN_KIND_NULL,
    JAVASCRIPT_TOKEN_KIND_FALSELITERAL,
    JAVASCRIPT_TOKEN_KIND_DOT,
    JAVASCRIPT_TOKEN_KIND_SHIFTLEFT,
    JAVASCRIPT_TOKEN_KIND_DIV,
    JAVASCRIPT_TOKEN_KIND_PLUSEQ,
    JAVASCRIPT_TOKEN_KIND_LE,
    JAVASCRIPT_TOKEN_KIND_XOREQ,
    JAVASCRIPT_TOKEN_KIND_OPENBRACKET,
    JAVASCRIPT_TOKEN_KIND_UNDEFINED,
    JAVASCRIPT_TOKEN_KIND_TYPEOF,
    JAVASCRIPT_TOKEN_KIND_OR,
    JAVASCRIPT_TOKEN_KIND_FUNCTION,
    JAVASCRIPT_TOKEN_KIND_CLOSEBRACKET,
    JAVASCRIPT_TOKEN_KIND_CARET,
    JAVASCRIPT_TOKEN_KIND_EQ,
    JAVASCRIPT_TOKEN_KIND_CONTINUESYM,
    JAVASCRIPT_TOKEN_KIND_BREAKSYM,
    JAVASCRIPT_TOKEN_KIND_MINUSEQ,
    JAVASCRIPT_TOKEN_KIND_GE,
    JAVASCRIPT_TOKEN_KIND_COLON,
    JAVASCRIPT_TOKEN_KIND_INSYM,
    JAVASCRIPT_TOKEN_KIND_SEMI,
    JAVASCRIPT_TOKEN_KIND_FORSYM,
    JAVASCRIPT_TOKEN_KIND_PLUSPLUS,
    JAVASCRIPT_TOKEN_KIND_LT,
    JAVASCRIPT_TOKEN_KIND_MODEQ,
    JAVASCRIPT_TOKEN_KIND_SHIFTRIGHT,
    JAVASCRIPT_TOKEN_KIND_EQUALS,
    JAVASCRIPT_TOKEN_KIND_GT,
    JAVASCRIPT_TOKEN_KIND_VOID,
    JAVASCRIPT_TOKEN_KIND_QUESTION,
    JAVASCRIPT_TOKEN_KIND_WHILESYM,
    JAVASCRIPT_TOKEN_KIND_ANDEQ,
    JAVASCRIPT_TOKEN_KIND_SHIFTRIGHTEXTEQ,
    JAVASCRIPT_TOKEN_KIND_ELSESYM,
    JAVASCRIPT_TOKEN_KIND_DIVEQ,
    JAVASCRIPT_TOKEN_KIND_AND,
    JAVASCRIPT_TOKEN_KIND_VAR,
    JAVASCRIPT_TOKEN_KIND_OREQ,
    JAVASCRIPT_TOKEN_KIND_SHIFTRIGHTEQ,
    JAVASCRIPT_TOKEN_KIND_MINUSMINUS,
    JAVASCRIPT_TOKEN_KIND_KEYWORDNEW,
    JAVASCRIPT_TOKEN_KIND_NOT,
    JAVASCRIPT_TOKEN_KIND_SHIFTRIGHTEXT,
    JAVASCRIPT_TOKEN_KIND_TRUELITERAL,
    JAVASCRIPT_TOKEN_KIND_THIS,
    JAVASCRIPT_TOKEN_KIND_WITH,
    JAVASCRIPT_TOKEN_KIND_IS,
    JAVASCRIPT_TOKEN_KIND_MOD,
    JAVASCRIPT_TOKEN_KIND_AMP,
    JAVASCRIPT_TOKEN_KIND_OPENCURLY,
};

@interface JavaScriptParser : PKSParser

@end

