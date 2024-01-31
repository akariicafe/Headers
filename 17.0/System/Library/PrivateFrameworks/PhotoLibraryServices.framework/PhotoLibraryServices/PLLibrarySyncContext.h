@class NSString, PLPhotoLibrary, NSMutableDictionary, PLCloudRecordOrganizer;

@interface PLLibrarySyncContext : NSObject <PLSyncContext> {
    NSMutableDictionary *_assetAdjustmentStatesByCloudIdentifier;
}

@property (readonly) PLPhotoLibrary *photoLibrary;
@property (readonly) PLCloudRecordOrganizer *recordOrganizer;
@property (readonly, nonatomic) BOOL serverSupportsVision;
@property (readonly, nonatomic) BOOL serverSupportsGraphHome;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)makeFace;
- (id)personForUUID:(id)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (void)setAssetAdjustmentState:(id)a0 forCloudIdentifer:(id)a1;
- (void).cxx_destruct;
- (id)assetAdjustmentStateForCloudIdentifier:(id)a0;
- (void)deleteFaces:(id)a0;
- (BOOL)personUUIDIsDeleted:(id)a0;

@end
