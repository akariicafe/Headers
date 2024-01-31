@interface BWStillImageFocusPixelBlurScoreResult : NSObject

@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) float score;

- (id)initWithStatus:(int)a0 score:(float)a1;

@end
