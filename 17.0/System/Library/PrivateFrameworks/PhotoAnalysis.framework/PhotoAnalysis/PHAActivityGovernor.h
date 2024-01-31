@class NSObject;
@protocol PHAActivityGovernorDelegate, OS_xpc_object, OS_dispatch_source, OS_dispatch_queue;

@interface PHAActivityGovernor : NSObject {
    char *_backgroundActivityName;
    char *_foregroundActivityName;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_xpc_object> *foregroundActivity;
@property (retain) NSObject<OS_dispatch_source> *foregroundDeferCheckTimer;
@property (nonatomic) BOOL hasForegroundAccess;
@property (nonatomic) double timeOfLastForegroundWantRequest;
@property (nonatomic) double timeSpentWantingForeground;
@property (nonatomic) double timeOfLastForegroundGrant;
@property (nonatomic) double timeSpentForegroundGranted;
@property (retain) NSObject<OS_xpc_object> *backgroundActivity;
@property (retain) NSObject<OS_dispatch_source> *backgroundDeferCheckTimer;
@property (nonatomic) BOOL hasBackgroundAccess;
@property (nonatomic) BOOL simulatedWantsDefer;
@property (nonatomic) BOOL simulatedNeverHasAccess;
@property (nonatomic) BOOL wantsBackgroundAccess;
@property (nonatomic) BOOL wantsForegroundAccess;
@property (nonatomic) BOOL overrideAccess;
@property (weak, nonatomic) id<PHAActivityGovernorDelegate> delegate;

- (id)statusAsDictionary;
- (BOOL)_inq_hasAccessForLevel:(unsigned long long)a0;
- (id)init;
- (void)_generateActivityNames;
- (void)dealloc;
- (void)_inq_removeDeferTimer:(id)a0;
- (void)_inq_handleRequestChangeForAccessLevel:(unsigned long long)a0;
- (id)description;
- (const char *)_activityNameForLevel:(unsigned long long)a0;
- (void)_inq_teardownActivity:(id *)a0 accessLevel:(unsigned long long)a1 timer:(id)a2;
- (void).cxx_destruct;
- (void)_inq_finishActivity:(id *)a0 accessLevel:(unsigned long long)a1 timer:(id)a2;
- (void)_inq_registerActivityNamed:(const char *)a0 withCriteria:(id)a1 accessLevel:(unsigned long long)a2;
- (void)_inq_installDeferMonitorForActivity:(id)a0 accessLevel:(unsigned long long)a1;
- (BOOL)_inq_wantsAccessForLevel:(unsigned long long)a0;

@end
