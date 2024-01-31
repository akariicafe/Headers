@class NSString, XRFrameActivity;

@interface XRFrameActivityManager : NSObject <XRFrameActivityManagerPrivate, XRMobileAgentStop> {
    struct shared_ptr<xray::scheduler::ActivityManager> { struct ActivityManager *__ptr_; struct __shared_weak_count *__cntrl_; } _managerImpl;
    struct shared_ptr<xray::scheduler::ActivityManager> { struct ActivityManager *__ptr_; struct __shared_weak_count *__cntrl_; } _secondTierManagerImpl;
    XRFrameActivity *_syncActivity;
    int _kdebugCodeBase;
    unsigned long long _signpostID;
    unsigned long long _ringSignpostID;
}

@property (readonly, nonatomic) unsigned char currentSlot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) int agentStopDiagnosticsTypeCode;

+ (void)initialize;
+ (unsigned int)_activityQoS;
+ (BOOL)_establishesAffinity;
+ (int)_identifierForSignposting;
+ (BOOL)enableConcurrentActivities;
+ (BOOL)supportsQoS;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_shutdown;
- (void)scheduleActivity:(id /* block */)a0;
- (id)initWithRing:(id)a0;
- (void)_acquiredMinorFrame:(unsigned char)a0;
- (void *)_managerImplPtr;
- (void)_escortMinorFrameAgentToExit:(id)a0;
- (void)_extendingMinorFrame:(unsigned char)a0;
- (void)_finalShutdown;
- (void)_needsScheduling;
- (void)_prepareMinorFrameAgent:(id)a0;
- (void)_reevaluateArrivingAgent:(id)a0;
- (void *)_secondTierManagerImplPtr;
- (void)_startingMajorFrame;
- (void)_underrunMinorFrame:(unsigned char)a0;
- (void)_yieldingMinorFrame:(unsigned char)a0;
- (void)activateNextMajorFrame;
- (void)enteringMinorFrame:(unsigned char)a0;
- (void)extendingMinorFrame:(unsigned char)a0;
- (BOOL)holdBackArrivingAgent:(id)a0;
- (BOOL)holdBackRevisitingAgent:(id)a0;
- (void)performDuringMinorFrame:(id /* block */)a0;
- (void)performOutsideMinorFrame:(id /* block */)a0;
- (void)receiveMobileAgent:(id)a0;
- (id)scheduleActivityAsOperation:(id /* block */)a0;
- (void)scheduleInactivity:(id /* block */)a0;
- (void)setupVisitDuringMinorFrame:(id)a0 agent:(id)a1 mode:(id)a2 ticket:(id)a3;
- (void)startingMajorFrame;
- (void)underrunMinorFrame:(unsigned char)a0;
- (void)yieldingMinorFrame:(unsigned char)a0;

@end
