@class HMBModel, HMBProcessingOptions, NAFuture;

@interface HMBProcessingModelResult : HMFObject

@property (readonly) HMBModel *model;
@property (readonly) HMBProcessingOptions *options;
@property (readonly) NAFuture *mirrorOutputFuture;

+ (id)alloc;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithModel:(id)a0 options:(id)a1 mirrorOutputFuture:(id)a2;

@end
