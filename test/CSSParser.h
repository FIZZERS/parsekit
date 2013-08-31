#import "ParseKit/PKSParser.h"

enum {
    CSS_TOKEN_KIND_COMMA = 14,
    CSS_TOKEN_KIND_COLON,
    CSS_TOKEN_KIND_TILDE,
    CSS_TOKEN_KIND_SEMI,
    CSS_TOKEN_KIND_DOT,
    CSS_TOKEN_KIND_BANG,
    CSS_TOKEN_KIND_FWDSLASH,
    CSS_TOKEN_KIND_EQ,
    CSS_TOKEN_KIND_GT,
    CSS_TOKEN_KIND_HASHSYM,
    CSS_TOKEN_KIND_OPENBRACKET,
    CSS_TOKEN_KIND_AT,
    CSS_TOKEN_KIND_CLOSEBRACKET,
    CSS_TOKEN_KIND_OPENPAREN,
    CSS_TOKEN_KIND_OPENCURLY,
    CSS_TOKEN_KIND_URLUPPER,
    CSS_TOKEN_KIND_URLLOWER,
    CSS_TOKEN_KIND_PIPE,
    CSS_TOKEN_KIND_CLOSEPAREN,
    CSS_TOKEN_KIND_CLOSECURLY,
};

@interface CSSParser : PKSParser

@end

