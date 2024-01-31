@class NSString, NSObject;
@protocol OS_xpc_object;

@interface NSBackgroundActivityScheduler : NSObject {
    NSString *_identifier;
    double _interval;
    double _tolerance;
    double _delay;
    id /* block */ _activity;
    NSObject<OS_xpc_object> *_additionalProperties;
    long long _qualityOfService;
    NSObject<OS_xpc_object> *_currentActivity;
    long long _flags;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _invalidateLock;
    BOOL _repeats;
    BOOL _preregistered;
    BOOL _appRefresh;
}

@property (getter=isPreregistered) BOOL preregistered;
@property double delay;
@property (copy) id /* block */ checkInHandler;
@property (getter=_isAppRefresh) BOOL _appRefresh;
@property (readonly, copy) NSString *identifier;
@property long long qualityOfService;
@property BOOL repeats;
@property double interval;
@property double tolerance;
@property (readonly) BOOL shouldDefer;

- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void)dealloc;
- (id)currentActivity;
- (void)invalidate;
- (void)_setAdditionalXPCActivityProperties:(id)a0;
- (void)_updateCriteriaForCompletedActivity:(id)a0;
- (void)scheduleWithBlock:(id /* block */)a0;
- (void)_updateCriteria:(id)a0;
- (void)setCurrentActivity:(id)a0;

@end
