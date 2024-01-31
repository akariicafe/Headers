@class NSDate, NSString, NSURL, PXMomentShareStatusPresentation, PXPhotosViewConfiguration, PHFetchResult, PXAssetCollectionActionManager, PHMomentShare;
@protocol PXDisplayAsset, PXUIImageProvider, PXCMMInvitationParticipant, PXDisplayAssetCollection;

@interface PXCMMMomentShareInvitation : NSObject <PXMediaTypeAggregating, PXCMMInvitation, NSCopying>

@property (readonly, nonatomic) long long aggregateMediaType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PHMomentShare *momentShare;
@property (readonly, nonatomic) PHFetchResult *participantsFetchResult;
@property (readonly, nonatomic) PHFetchResult *previewAssetsFetchResult;
@property (readonly, nonatomic) NSURL *shareURL;
@property (readonly, nonatomic) long long shareType;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *expiryDate;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) id<PXCMMInvitationParticipant> owner;
@property (readonly, nonatomic) id<PXDisplayAsset> posterAsset;
@property (readonly, nonatomic) id<PXUIImageProvider> posterMediaProvider;
@property (readonly, nonatomic) PXAssetCollectionActionManager *assetCollectionActionManager;
@property (readonly, nonatomic) id<PXDisplayAssetCollection> assetCollection;
@property (readonly, nonatomic) PXPhotosViewConfiguration *assetViewConfiguration;
@property (readonly, nonatomic) PXMomentShareStatusPresentation *statusPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long aggregateMediaType;

+ (id)new;
+ (void)deleteInvitations:(id)a0 presentationEnvironment:(id)a1 completionHandler:(id /* block */)a2;
+ (id)invitationWithMomentShare:(id)a0;
+ (id)menuItemTitleForDeletingInvitations:(id)a0;
+ (void)saveAllAssetsForInvitations:(id)a0 toDestinationPhotoLibrary:(id)a1 completionHandler:(id /* block */)a2;
+ (BOOL)supportsSavingAssetsForInvitations:(id)a0 numberOfAssetsToSave:(unsigned long long *)a1 assetsToSaveMediaType:(long long *)a2;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMomentShare:(id)a0;
- (void)acceptWithCompletionHandler:(id /* block */)a0;
- (id)contextForActivityType:(unsigned long long)a0;
- (id)invitationWithUpdatedParticipantsFetchResult:(id)a0;
- (id)invitationWithUpdatedPreviewAssetsFetchResult:(id)a0;
- (id)momentShareStatus;
- (void)requestNotificationOnUploadCompletion;
- (id)sessionForActivityType:(unsigned long long)a0;

@end
