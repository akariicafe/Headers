@class NSSet, BWDeepFusionProcessorInput;
@protocol IBPDeepFusionOutput, BWDeepFusionProcessorControllerDelegate;

@interface BWDeepFusionProcessorRequest : NSObject {
    int _expectedEVZeroFrameCount;
}

@property (readonly, nonatomic) BWDeepFusionProcessorInput *input;
@property (readonly, nonatomic) id<BWDeepFusionProcessorControllerDelegate> delegate;
@property (readonly, nonatomic) NSSet *expectedBufferTypes;
@property (retain, nonatomic) id<IBPDeepFusionOutput> output;
@property (nonatomic) int err;
@property (nonatomic) int demosaicedRawErr;
@property (nonatomic) BOOL cacheBuffers;

- (void)dealloc;
- (id)description;

@end
