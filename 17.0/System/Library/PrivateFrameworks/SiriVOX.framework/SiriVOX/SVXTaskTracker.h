@class SVXActivationContext, NSUUID, NSString, NSError, AFAnalyticsTurnBasedInstrumentationContext, SAUIListenAfterSpeakingBehavior, SVXDeactivationContext, SVXTaskContext;
@protocol SVXTaskTrackingDelegate, SVXTaskTracking;

@interface SVXTaskTracker : NSObject <SVXTaskTracking> {
    id<SVXTaskTrackingDelegate> _delegate;
}

@property (readonly, copy, nonatomic) SVXTaskContext *context;
@property (readonly, nonatomic) id<SVXTaskTracking> parent;
@property (readonly, nonatomic) AFAnalyticsTurnBasedInstrumentationContext *instrumentationContext;
@property (readonly, nonatomic) long long origin;
@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) NSUUID *sessionUUID;
@property (readonly, nonatomic) NSUUID *requestUUID;
@property (readonly, nonatomic) NSString *aceId;
@property (readonly, nonatomic) NSString *refId;
@property (readonly, nonatomic) NSString *dialogIdentifier;
@property (readonly, nonatomic) NSString *dialogPhase;
@property (readonly, nonatomic) BOOL isUUFR;
@property (readonly, nonatomic) BOOL listensAfterSpeaking;
@property (readonly, nonatomic) SAUIListenAfterSpeakingBehavior *listenAfterSpeakingBehavior;
@property (readonly, nonatomic) SVXActivationContext *activationContext;
@property (readonly, nonatomic) SVXDeactivationContext *deactivationContext;
@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)beginChildWithContext:(id)a0;
- (id)initWithContext:(id)a0 instrumentationContext:(id)a1 delegate:(id)a2;

@end
