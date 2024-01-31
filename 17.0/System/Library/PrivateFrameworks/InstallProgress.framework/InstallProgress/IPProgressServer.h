@class NSMutableDictionary, NSObject;
@protocol IPProgressServerDelegate, IPAccessAdjudicator, IPProgressServerBehavior, OS_dispatch_queue;

@interface IPProgressServer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_activeProgresses;
    id<IPProgressServerBehavior> _behavior;
    id<IPAccessAdjudicator> _accessAdjudicator;
}

@property (weak, nonatomic) id<IPProgressServerDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;

+ (id)defaultBehavior;
+ (id)defaultAccessAdjudicator;

- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (void)resume;
- (void).cxx_destruct;
- (void)_queue_removePublishedProgress:(id)a0;
- (id)activeInstallationsForBehavior:(id)a0;
- (id)_progressForIdentity:(id)a0 createIfMissing:(BOOL)a1;
- (id)_queue_progressForIdentity:(id)a0 createIfMissing:(BOOL)a1;
- (void)identityProgress:(id)a0 didChangeProgressData:(id)a1;
- (void)identityProgress:(id)a0 didFinishWithState:(unsigned long long)a1;
- (void)identityWasUninstalled:(id)a0;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1 accessAdjudicator:(id)a2 behavior:(id)a3;
- (id)initiateProgressForIdentity:(id)a0;
- (id)resumeProgressForIdentity:(id)a0;
- (void)serverBehavior:(id)a0 acceptedClient:(id)a1;
- (id)serverBehavior:(id)a0 progressForIdentity:(id)a1 error:(id *)a2;
- (BOOL)serverBehavior:(id)a0 shouldAcceptConnection:(id)a1;

@end
