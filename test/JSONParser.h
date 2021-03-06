#import "ParseKit/PKSParser.h"

enum {
    JSON_TOKEN_KIND_FALSELITERAL = 14,
    JSON_TOKEN_KIND_CLOSECURLY,
    JSON_TOKEN_KIND_OPENBRACKET,
    JSON_TOKEN_KIND_NULLLITERAL,
    JSON_TOKEN_KIND_COMMA,
    JSON_TOKEN_KIND_TRUELITERAL,
    JSON_TOKEN_KIND_CLOSEBRACKET,
    JSON_TOKEN_KIND_OPENCURLY,
    JSON_TOKEN_KIND_COLON,
};

@interface JSONParser : PKSParser

@end

