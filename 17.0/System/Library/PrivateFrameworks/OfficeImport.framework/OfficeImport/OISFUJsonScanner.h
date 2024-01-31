@class NSString, NSCharacterSet;

@interface OISFUJsonScanner : NSObject {
    NSString *mString;
    unsigned short *mCharacters;
    unsigned long long mLength;
    unsigned long long mOffset;
    NSCharacterSet *mWhitespaceCharacterSet;
    NSCharacterSet *mDecimalDigitCharacterSet;
}

- (void)dealloc;
- (id)initWithString:(id)a0;
- (unsigned short)nextCharacter;
- (void)appendCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toString:(id)a1;
- (id)parseArrayWithMaxDepth:(int)a0;
- (BOOL)parseConstantString:(const char *)a0;
- (id)parseDictionaryWithMaxDepth:(int)a0;
- (id)parseFalse;
- (id)parseHexCharacter;
- (id)parseNull;
- (id)parseNumber;
- (id)parseObjectWithMaxDepth:(int)a0;
- (id)parseString;
- (id)parseTrue;
- (void)skipWhitespace;

@end
