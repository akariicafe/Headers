@class NSString, NSMutableDictionary;
@protocol SCNProgramDelegate, MTLLibrary;

@interface SCNProgram : NSObject <NSCopying, NSSecureCoding> {
    NSString *_vertexShader;
    NSString *_fragmentShader;
    NSString *_vertexFunctionName;
    NSString *_fragmentFunctionName;
    NSString *_name;
    NSString *_sourceFile;
    NSMutableDictionary *_semanticInfos;
    BOOL _opaque;
    id _library;
    id _delegate;
    NSMutableDictionary *_bufferBindings;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *vertexShader;
@property (copy, nonatomic) NSString *fragmentShader;
@property (copy, nonatomic) NSString *vertexFunctionName;
@property (copy, nonatomic) NSString *fragmentFunctionName;
@property (nonatomic, getter=isOpaque) BOOL opaque;
@property (nonatomic) id<SCNProgramDelegate> delegate;
@property (retain, nonatomic) id<MTLLibrary> library;

+ (id)program;
+ (id)programWithLibrary:(id)a0;

- (id)init;
- (void)dealloc;
- (void)setName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)name;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)sourceFile;
- (void)handleBindingOfBufferNamed:(id)a0 frequency:(long long)a1 usingBlock:(id /* block */)a2;
- (id)_allSymbolsWithSceneKitSemantic;
- (id)_bufferBindings;
- (int)shadingLanguage;
- (void)_customDecodingOfSCNProgram:(id)a0;
- (void)_customEncodingOfSCNProgram:(id)a0;
- (id)_optionsForSymbol:(id)a0;
- (id)semanticForSymbol:(id)a0;
- (void)setSemantic:(id)a0 forSymbol:(id)a1;
- (void)setSemantic:(id)a0 forSymbol:(id)a1 options:(id)a2;
- (void)setSemanticInfos:(id)a0;
- (void)setSourceFile:(id)a0;

@end
