@class NSString, NSDictionary, NSMutableArray, geo_isolater;
@protocol _GEONetworkDefaultsServerProxy;

@interface GEONetworkDefaults : NSObject <_GEONetworkDefaultsServerProxyDelegate> {
    id<_GEONetworkDefaultsServerProxy> _serverProxy;
    NSMutableArray *_completionHandlers;
    NSDictionary *_networkDefaults;
    geo_isolater *_networkDefaultsIsolation;
}

@property (class) BOOL useLocalProxy;
@property (class, readonly) GEONetworkDefaults *sharedNetworkDefaults;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)serverProxy:(id)a0 networkDefaultsDidChange:(id)a1;
- (void)updateNetworkDefaults:(id /* block */)a0;
- (id)allKeys;
- (void)allKeysAndValues:(id /* block */)a0;
- (void)updateNetworkDefaultsWithReason:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)valueForKey:(id)a0;
- (void)updateIfNecessary:(id /* block */)a0;

@end
