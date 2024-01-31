@class NSSet, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SLGDomainWhitelist : NSObject <SLGDomainWhitelisting> {
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSSet *_whitelist;
    BOOL _allowUnspecifiedDomains;
}

@property (nonatomic) BOOL allowUnspecifiedDomains;
@property (readonly, nonatomic) NSSet *whitelist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)addDomain:(id)a0;
- (void)_reloadSettings;
- (void)_beginObservingSettings;
- (void)_lockQueue_loadSettings;
- (void)_lockQueue_loadUnspecifiedDomains;
- (void)_lockQueue_loadWhitelist;
- (void)_stopObservingSettings;
- (BOOL)isDomainWhitelisted:(id)a0;
- (void)removeDomain:(id)a0;

@end
