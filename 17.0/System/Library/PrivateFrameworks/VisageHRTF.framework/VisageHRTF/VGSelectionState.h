@interface VGSelectionState : NSObject

@property (nonatomic) BOOL completed;
@property (nonatomic) BOOL failed;
@property (nonatomic) float progress;

+ (id)capturedStatesFromCapturedPoses:(id)a0;

@end
