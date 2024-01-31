@class NSArray, NSString;

@interface PLCloudSharedDeleteAlbumsJob : PLCloudSharingJob

@property (retain, nonatomic) NSArray *albumCloudGUIDsToDelete;
@property (retain, nonatomic) NSString *inviterAddress;

+ (void)deleteLocalAlbumForMSASAlbumGUID:(id)a0 inviterAddress:(id)a1;
+ (void)deleteLocalAlbumsForMSASAlbumGUIDs:(id)a0;

- (void)run;
- (void)runDaemonSide;
- (long long)daemonOperation;
- (id)description;
- (void).cxx_destruct;
- (void)encodeToXPCObject:(id)a0;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;

@end
