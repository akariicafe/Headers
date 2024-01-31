@class NSString, NSUserDefaults, NSFileManager;

@interface ANAnnouncementStorageManager : NSObject <NSFileManagerDelegate>

@property (readonly, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) NSFileManager *fileManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)_removeMetadataForAnnouncementID:(id)a0 endpointID:(id)a1;
- (id)_announcementDataDirectoryForType:(id)a0 endpointID:(id)a1 error:(id *)a2;
- (void)deleteAnnouncementWithID:(id)a0 endpointID:(id)a1;
- (void)_saveMetadataForAnnouncement:(id)a0 endpointID:(id)a1;
- (id)_cachesURLWithError:(id *)a0;
- (void)_removeAudioDataForAnnouncementID:(id)a0 endpointID:(id)a1;
- (void)saveAnnouncement:(id)a0 endpointID:(id)a1;
- (id)storedAnnouncementsForEndpointID:(id)a0;
- (void).cxx_destruct;
- (id)_saveAudioDataForAnnouncement:(id)a0 endpointID:(id)a1;
- (void)deleteAnnouncementsExcludingAnnouncementsForEndpointIDs:(id)a0;
- (BOOL)fileManager:(id)a0 shouldProceedAfterError:(id)a1 removingItemAtURL:(id)a2;
- (id)_baseDirectoryURLForEndpointID:(id)a0 error:(id *)a1;
- (void)_removeDirectoryForEndpointsExcludingEndpointIDs:(id)a0;
- (void)removeAnnouncementDataExcludingDataForAnnouncementIDs:(id)a0 endpointID:(id)a1;

@end
