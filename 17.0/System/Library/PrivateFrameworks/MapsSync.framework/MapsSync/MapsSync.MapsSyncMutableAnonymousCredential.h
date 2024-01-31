@class NSData, NSDate;

@interface MapsSync.MapsSyncMutableAnonymousCredential : MapsSync.MapsSyncMutableBaseItem {
    void /* unknown type, empty encoding */ _proxyObject;
}

@property (nonatomic, copy) NSData *anonymousId;
@property (nonatomic, copy) NSData *mapsToken;
@property (nonatomic, copy) NSDate *mapsTokenCreatedAt;
@property (nonatomic) unsigned long long mapsTokenTTL;

- (void).cxx_destruct;
- (id)initWithProxyObject:(id)a0;

@end
