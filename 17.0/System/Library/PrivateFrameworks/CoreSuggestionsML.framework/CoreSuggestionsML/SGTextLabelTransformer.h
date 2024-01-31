@class NSString, SGStringPreprocessingTransformer, SGStringLabelingTransformer;

@interface SGTextLabelTransformer : NSObject <PMLTransformerProtocol> {
    SGStringPreprocessingTransformer *_preprocessor;
    SGStringLabelingTransformer *_labeler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_preprocessedLabelsWithLabels:(id)a0 andPreprocessor:(id)a1;
+ (id)withMethods:(id)a0 withLabelStrings:(id)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)toPlistWithChunks:(id)a0;
- (id)transform:(id)a0;
- (id)initWithMethods:(id)a0 withLabelStrings:(id)a1;
- (id)initWithPreprocessor:(id)a0 labeler:(id)a1;
- (BOOL)isEqualToTextLabelTransformer:(id)a0;

@end
