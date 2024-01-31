@class NSDictionary;

@interface PLCloudSharedUpdateAlbumMetadataJob : PLCloudSharingJob

@property (retain, nonatomic) NSDictionary *metadata;

+ (void)updateAlbumMetadata:(id)a0;

- (void)run;
- (void)runDaemonSide;
- (long long)daemonOperation;
- (id)description;
- (void).cxx_destruct;
- (void)encodeToXPCObject:(id)a0;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (id)_argumentsDictionaryAsData:(id)a0;
- (id)_argumentsDictionaryFromXPCEvent:(id)a0;

@end
