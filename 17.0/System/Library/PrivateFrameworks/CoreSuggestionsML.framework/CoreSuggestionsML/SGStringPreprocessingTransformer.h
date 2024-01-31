@class NSString, NSArray, NSMethodSignature;

@interface SGStringPreprocessingTransformer : NSObject <PMLTransformerProtocol> {
    NSArray *_methodNames;
    NSArray *_methodValues;
    NSMethodSignature *_methodSignatureNoValue;
    NSMethodSignature *_methodSignatureWithValue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)withMethods:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)toPlistWithChunks:(id)a0;
- (id)transform:(id)a0;
- (id)transformBatch:(id)a0;
- (SEL)selectorForMethod:(id)a0 preprocessor:(id)a1;
- (void)applySelector:(SEL)a0 preprocesor:(id)a1 string:(id)a2 value:(id)a3;
- (id)initWithMethods:(id)a0;
- (BOOL)isEqualToStringPreprocessingTransformer:(id)a0;

@end
