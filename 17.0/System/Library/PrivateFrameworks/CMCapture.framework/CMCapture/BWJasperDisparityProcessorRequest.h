@class BWJasperDisparityProcessorInput;
@protocol BWJasperDisparityProcessorControllerDelegate;

@interface BWJasperDisparityProcessorRequest : NSObject

@property (nonatomic) int err;
@property (readonly, nonatomic) BWJasperDisparityProcessorInput *input;
@property (readonly, nonatomic) id<BWJasperDisparityProcessorControllerDelegate> delegate;

- (void)dealloc;
- (id)description;
- (id)initWithInput:(id)a0 delegate:(id)a1;

@end
