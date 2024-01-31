@class CKContextSemaphore, NSSet, NSString, NSMutableArray;

@interface CKContextClient : NSObject <CKContextServiceUpdateNotifications> {
    NSSet *_capabilities;
    NSString *_indexVersionId;
    NSMutableArray *_updateHandlers;
    CKContextSemaphore *_serviceSemaphore;
}

@property (readonly, nonatomic) unsigned long long defaultRequestType;
@property (readonly, nonatomic) NSSet *capabilities;

+ (id)clientWithDefaultRequestType:(unsigned long long)a0;
+ (void)initialize;
+ (id)new;
+ (void)_observeApplicationStateNotifications;
+ (double)timeIntervalBetweenMachTime:(unsigned long long)a0 andMachTime:(unsigned long long)a1;
+ (id)clientWithPreferredRequestType:(unsigned long long)a0;
+ (BOOL)isLikelyUnsolicitedUserInteraction;

- (id)init;
- (void)workWithServiceSemaphore:(id /* block */)a0;
- (void)updateCachedCapabilitiesWithReply:(id /* block */)a0;
- (void)capabilitiesWithReply:(id /* block */)a0;
- (void)groupResponses:(id)a0 withReply:(id /* block */)a1;
- (id)retrieveCapabilites;
- (id)createRequest;
- (id)indexVersionId;
- (long long)tryAcquireServiceSemaphoreNeedsIncPending:(BOOL)a0;
- (void).cxx_destruct;
- (void)ancestorsForTopics:(id)a0 withReply:(id /* block */)a1;
- (void)retrieveCapabilitiesWithReply:(id /* block */)a0;
- (id)newRequest;
- (void)ensureFullyInitialized;
- (id)initWithDefaultRequestType:(unsigned long long)a0;
- (void)didReceiveCKContextServiceUpdateNotification;
- (void)registerConfigurationUpdateHandler:(id /* block */)a0;

@end
