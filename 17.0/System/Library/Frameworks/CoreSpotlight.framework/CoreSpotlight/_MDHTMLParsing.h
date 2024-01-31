@class NSString, NSMutableDictionary;

@interface _MDHTMLParsing : NSObject {
    unsigned short *uniChars;
    unsigned long long uniCharLen;
    unsigned long long uniCharSize;
    unsigned char newLineBuffer[8];
    unsigned long long newLineLength;
    NSMutableDictionary *attributes;
    NSString *metaName;
    NSString *metaHttpEquiv;
    NSString *metaContent;
    unsigned long long sourceEncoding;
    unsigned int sourceCFEncoding;
    unsigned long long indexingLimit;
    const char *titleStart;
    unsigned int titleLength;
    BOOL inHead;
    BOOL inTitle;
    BOOL inScript;
    BOOL inStyle;
    const char *hiddenElementName;
    unsigned long long hiddenElementNameLength;
    unsigned long long hiddenCount;
    BOOL hiddenAttr;
}

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (void)appendNewline;
- (void)appendText:(const char *)a0 length:(unsigned long long)a1;
- (void)appendUnichars:(const unsigned short *)a0 length:(unsigned long long)a1;
- (id)initWithEncoding:(unsigned long long)a0;

@end
