@class NSArray, NSString;

@interface SGPipelineTransformer : NSObject <PMLTransformerProtocol>

@property (retain) NSArray *transformers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)withTransformers:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)toPlistWithChunks:(id)a0;
- (id)transform:(id)a0;
- (id)transform:(id)a0 stopAfterTransformerWithIndex:(unsigned long long)a1;
- (id)initWithTransformers:(id)a0;
- (BOOL)isEqualToPipelineTransformer:(id)a0;

@end
