@interface TUIAnalyticsSession : NSObject

@property (readonly, nonatomic, getter=isSessionActive) BOOL sessionActive;

+ (id)preferredEventName:(id)a0;
+ (id)currentInputModeIdentifier;

- (void)dealloc;
- (void)beginSession;
- (void)endSession;

@end
