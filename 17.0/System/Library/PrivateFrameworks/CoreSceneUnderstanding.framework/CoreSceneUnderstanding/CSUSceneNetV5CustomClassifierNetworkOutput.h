@protocol CSUBuffer;

@interface CSUSceneNetV5CustomClassifierNetworkOutput : NSObject

@property (readonly) id<CSUBuffer> classificationLikelihoods;

- (void).cxx_destruct;
- (id)initWithClassificationLikelihoods:(id)a0;

@end
