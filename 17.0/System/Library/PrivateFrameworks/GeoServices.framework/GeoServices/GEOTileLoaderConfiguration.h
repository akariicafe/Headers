@class NSString, GEOResourceManifestConfiguration, NSLocale;

@interface GEOTileLoaderConfiguration : NSObject <NSCopying>

@property (nonatomic) Class serverProxyClass;
@property (nonatomic) unsigned long long memoryCacheCountLimit;
@property (nonatomic) unsigned long long memoryCacheCostLimit;
@property (nonatomic) unsigned long long backpressureControlCountLimit;
@property (copy, nonatomic) NSString *diskCacheLocation;
@property (retain, nonatomic) GEOResourceManifestConfiguration *manifestConfiguration;
@property (retain, nonatomic) NSLocale *locale;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
