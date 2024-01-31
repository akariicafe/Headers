@class BWLearnedNROutput, BWLearnedNRInput;
@protocol BWLearnedNRProcessorControllerDelegate;

@interface BWLearnedNRRequest : NSObject

@property (nonatomic) int err;
@property (readonly, nonatomic) BWLearnedNRInput *input;
@property (readonly, nonatomic) BWLearnedNROutput *output;
@property (readonly, nonatomic) id<BWLearnedNRProcessorControllerDelegate> delegate;

- (void)dealloc;
- (id)description;

@end
