@interface TPSAnalyticsChecklistSessionController : NSObject {
    void /* unknown type, empty encoding */ sessionStartSuggestedTipCount;
    void /* unknown type, empty encoding */ timeSpent;
    void /* unknown type, empty encoding */ sessionStartTime;
    void /* unknown type, empty encoding */ sessionTimeoutTimer;
    void /* unknown type, empty encoding */ sessionTimeout;
    void /* unknown type, empty encoding */ sessionBackgroundTimeout;
}

@property (class, nonatomic, readonly) TPSAnalyticsChecklistSessionController *sharedInstance;

@property (nonatomic) void /* unknown type, empty encoding */ isFirstLaunch;
@property (nonatomic) void /* unknown type, empty encoding */ hasActiveSession;
@property (nonatomic) void /* unknown type, empty encoding */ sessionEndSuggestedTipsCount;
@property (nonatomic) void /* unknown type, empty encoding */ sessionTipsCompleted;

- (id)init;
- (void)stopSession;
- (void).cxx_destruct;
- (void)startSession;
- (void)continueSession;

@end
