@class NSNetServiceBrowser, NSString, NSMutableDictionary;
@protocol TVRMSServiceProviderDelegate;

@interface TVRMSBonjourServiceProvider : NSObject <TVRMSServiceProvider, NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
    NSMutableDictionary *_services;
    NSMutableDictionary *_cache;
}

@property (readonly, nonatomic) NSNetServiceBrowser *netServiceBrowser;
@property (readonly, nonatomic) NSString *searchType;
@property (readonly, nonatomic) NSString *searchDomain;
@property (readonly, nonatomic) NSString *searchScope;
@property (readonly, nonatomic) long long serviceDiscoverySource;
@property (weak, nonatomic) id<TVRMSServiceProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceBrowser:(id)a0 didRemoveService:(id)a1 moreComing:(BOOL)a2;
- (void)beginDiscovery;
- (void).cxx_destruct;
- (void)netService:(id)a0 didNotResolve:(id)a1;
- (void)netService:(id)a0 didUpdateTXTRecordData:(id)a1;
- (void)netServiceDidResolveAddress:(id)a0;
- (id)_searchString;
- (void)endDiscovery;
- (id)_identifierForNetService:(id)a0;
- (void)_updateCacheWithService:(id)a0 identifier:(id)a1;
- (void)_updateService:(id)a0 withNetService:(id)a1 txtData:(id)a2;
- (id)_valueForTXTRecordKey:(id)a0 inTXTDictionary:(id)a1;
- (long long)serviceLegacyFlagsFromTXTDictionary:(id)a0;
- (long long)serviceTypeFromTXTDictionary:(id)a0;

@end
