@class NSMapTable, SKPresence, NSMutableSet, SKPresencePayload, NSObject, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface COIDSPresence : NSObject <SKPresenceDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, retain, nonatomic) SKPresence *presenceChannel;
@property (retain, nonatomic) NSMutableSet *devices;
@property (readonly, nonatomic) NSMapTable *observers;
@property (readonly, nonatomic) SKPresencePayload *presencePayload;
@property (nonatomic) BOOL presenceAsserted;
@property (nonatomic) unsigned long long retryAttempts;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *retryTimer;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)presenceForMesh:(id)a0;

- (void)_start;
- (void)addObserver:(id)a0 queue:(id)a1;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)presentDevicesChangedForPresence:(id)a0;
- (void)_informObserver:(id)a0 aboutRecord:(id)a1 added:(BOOL)a2;
- (void)_informObserversAboutDevice:(id)a0 added:(BOOL)a1;
- (id)_recordForDevice:(id)a0;
- (void)_retrainSubscriptionWithRetryCounter:(unsigned long long)a0;
- (void)_synchronizeInitiate;
- (void)_synchronizePresence:(BOOL)a0;
- (void)_usersChangedInHome:(id)a0;
- (void)_usersChangedInHomeNotification:(id)a0;
- (id)initWithPresenceProvider:(id /* block */)a0;

@end
