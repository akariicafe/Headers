@class SBSStatusBarStyleOverridesAssertion;

@interface WFRecordingStatusManager : NSObject

@property (retain, nonatomic) SBSStatusBarStyleOverridesAssertion *assertion;
@property (nonatomic, getter=isRecording) BOOL recording;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)invalidateAssertion;
- (void)acquireAssertion;

@end
