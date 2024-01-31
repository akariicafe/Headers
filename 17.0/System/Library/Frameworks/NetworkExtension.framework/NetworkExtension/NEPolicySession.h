@class NSData, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface NEPolicySession : NSObject <NEPrettyDescription> {
    BOOL _convertToLegacyPriority;
    unsigned int _lastSendMessageID;
    int _sessionFD;
    long long _internalPriority;
    NSMutableDictionary *_policies;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSObject<OS_dispatch_semaphore> *_responseSemaphore;
    NSData *_lastReceivedResponse;
}

@property long long priority;

- (unsigned long long)addPolicy:(id)a0;
- (BOOL)unregisterServiceUUID:(id)a0;
- (id)init;
- (unsigned long long)addDomainFilterWithData:(id)a0;
- (void)dealloc;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)dumpKernelPolicies;
- (int)dupSocket;
- (id)initWithSocket:(int)a0;
- (unsigned long long)addPolicy:(id)a0 storeLocally:(BOOL)a1;
- (BOOL)removeDomainFilterWithID:(unsigned long long)a0;
- (id)policyWithID:(unsigned long long)a0;
- (id)description;
- (BOOL)lockSessionToCurrentProcess;
- (void).cxx_destruct;
- (BOOL)registerServiceUUID:(id)a0;
- (id)initWithSessionName:(id)a0;
- (BOOL)removePolicyWithID:(unsigned long long)a0;
- (BOOL)apply;
- (id)initFromPrivilegedProcess;
- (BOOL)removeAllDomainFilters;
- (BOOL)removeAllPolicies;

@end
