@class NSString, ACAccountStore;

@interface MSASPlatformImplementation : NSObject <MSASPlatform>

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)pluginClass;
- (BOOL)deviceHasEnoughDiskSpaceRemainingToOperate;
- (id)init;
- (id)pathAlbumSharingDir;
- (int)MMCSConcurrentConnectionsCount;
- (BOOL)MSASIsAllowedToTransferMetadata;
- (BOOL)MSASIsAllowedToUploadAssets;
- (id)MMCSDownloadSocketOptionsForPersonID:(id)a0;
- (void)logLevel:(int)a0 personID:(id)a1 albumGUID:(id)a2 format:(id)a3;
- (BOOL)shouldEnableNewFeatures;
- (id)MMCSUploadSocketOptionsForPersonID:(id)a0;
- (id)personIDsEnabledForAlbumSharing;
- (BOOL)personIDEnabledForAlbumSharing:(id)a0;
- (id)pushTokenForPersonID:(id)a0;
- (BOOL)shouldLogAtLevel:(int)a0;
- (BOOL)personIDUsesProductionPushEnvironment:(id)a0;
- (void).cxx_destruct;
- (BOOL)MSASPersonIDIsAllowedToDownloadAssets:(id)a0;
- (id)baseSharingURLForPersonID:(id)a0;
- (id)albumSharingDaemon;
- (id)_accountForPersonID:(id)a0;

@end
