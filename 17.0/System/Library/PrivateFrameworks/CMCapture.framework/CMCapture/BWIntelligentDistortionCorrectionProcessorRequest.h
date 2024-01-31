@class BWIntelligentDistortionCorrectionProcessorInput;
@protocol BWStillImageProcessorControllerDelegate;

@interface BWIntelligentDistortionCorrectionProcessorRequest : NSObject

@property (readonly, nonatomic) BWIntelligentDistortionCorrectionProcessorInput *input;
@property (readonly, nonatomic) id<BWStillImageProcessorControllerDelegate> delegate;
@property (nonatomic) int err;

- (void)dealloc;
- (id)description;

@end
