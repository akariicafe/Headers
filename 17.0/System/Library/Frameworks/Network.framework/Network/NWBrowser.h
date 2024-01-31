@class NWBrowseDescriptor, NSSet, NWParameters, NSObject;
@protocol OS_nw_browser;

@interface NWBrowser : NSObject

@property (readonly) NSObject<OS_nw_browser> *internalBrowser;
@property (retain) NSSet *internalDiscoveredEndpoints;
@property (readonly) NWBrowseDescriptor *descriptor;
@property (readonly) NWParameters *parameters;
@property (readonly, nonatomic) NSSet *discoveredEndpoints;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (id)copyDiscoveredEndpoints;
- (id)initWithDescriptor:(id)a0 parameters:(id)a1;
- (void)setUpdateHandler;

@end
