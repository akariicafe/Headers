@class NSSet, XRIntKeyedDictionary;

@interface DTKPKDebugCodes : NSObject {
    XRIntKeyedDictionary *_codeMap;
}

@property (readonly, retain, nonatomic) NSSet *allKDebugCodes;

+ (void)initialize;
+ (id)codesFromURL:(id)a0 error:(id *)a1;
+ (id)localKDebugCodes:(id *)a0;

- (void).cxx_destruct;
- (id)initWithCodeMapping:(id)a0;
- (id)initWithCodes:(id)a0;
- (id)kdebugCodeByValue:(unsigned int)a0;
- (id)kdebugCodeWithNameForCode:(union { unsigned int x0; struct { unsigned char x0 : 2; unsigned short x1 : 14; unsigned char x2 : 8; unsigned char x3 : 8; } x1; })a0;
- (id)kdebugCodeWithNameForValue:(unsigned int)a0;

@end
