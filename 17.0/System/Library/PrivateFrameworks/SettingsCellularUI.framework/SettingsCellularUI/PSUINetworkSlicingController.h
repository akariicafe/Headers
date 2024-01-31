@class PSUICoreTelephonyCapabilitiesCache;

@interface PSUINetworkSlicingController : PSListController

@property (nonatomic) BOOL networkSlicingOn;
@property (retain, nonatomic) PSUICoreTelephonyCapabilitiesCache *capabilityCache;

- (id)init;
- (id)getLogger;
- (id)specifiers;
- (void).cxx_destruct;
- (void)_enableNetworkSlicing:(BOOL)a0;
- (id)getNetworkSlicingAppCategory:(id)a0;
- (id)initWithCapabilityCache:(id)a0;
- (void)setNetworkSlicingAppCategory:(id)a0 specifier:(id)a1;

@end
