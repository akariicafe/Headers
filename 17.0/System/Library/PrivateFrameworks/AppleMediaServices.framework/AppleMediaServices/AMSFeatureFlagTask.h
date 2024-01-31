@class NSString, AMSBagKeySet;

@interface AMSFeatureFlagTask : AMSTask <AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_cachePath;
+ (void)clearCache;
+ (id)_cacheDirectory;
+ (id)createBagForSubProfile;
+ (id)_deviceClass;
+ (id)cachedRemoteGroups;
+ (BOOL)_cacheResponse:(id)a0 error:(id *)a1;
+ (void)_handleDeletedITFEsFromResponse:(id)a0;
+ (id)lastFetchedDate;

- (id)perform;
- (id)_updateRemoteFeatureFlags;

@end
