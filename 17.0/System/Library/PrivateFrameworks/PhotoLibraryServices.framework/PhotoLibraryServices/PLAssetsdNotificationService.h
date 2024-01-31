@class NSString;

@interface PLAssetsdNotificationService : PLAbstractLibraryServicesManagerService <PLAssetsdNotificationServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)noteGoingToExpireCMMsAlertWithCMMUUIDs:(id)a0 thumbnailImageData:(id)a1 notificationTitle:(id)a2 notificationSubtitle:(id)a3;
- (void)noteInterestingMemoryAlertWithMemoryUUID:(id)a0 notificationDeliveryDate:(id)a1;
- (void)noteSharedLibrarySuggestionsWithNotificationDeliveryDate:(id)a0;
- (void)reportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(id)a0;
- (void)notifyEndOfInterestForUnrenderedCinematicVideoItems;
- (void)userViewedNotificationWithAlbumCloudGUID:(id)a0;
- (void)respondToPhotoStreamInvitationWithAlbumCloudGUID:(id)a0 acceptInvitation:(BOOL)a1;
- (void)notifyStartOfInterestForUnrenderedCinematicVideoItems;
- (void)noteReadyToViewMomentShareWithUUID:(id)a0;
- (void)noteSuggestedCMMAlertViewedWithCMMUUID:(id)a0;
- (void)notePhotosChallengeNewQuestionsWithNotificationDeliveryDate:(id)a0;
- (void)noteSuggestedCMMAlertWithCMMUUID:(id)a0 notificationDeliveryDate:(id)a1;
- (void)notePhotosChallengeSubmissionWithNotificationDeliveryDate:(id)a0;
- (void)noteInterestingMemoryAlertViewedWithUUID:(id)a0;

@end
