@class NSString, PXSharedLibraryLegacyDevicesRemoteController, NSMutableDictionary, PXSharedLibraryLegacyDevicesFallbackMonitor, PXSharedLibraryFaceTileImageProvider, PXSharedLibraryStatusProvider, PXLibraryFilterState, PXSharedLibraryAssistantViewModel;
@protocol PXSharedLibrary;

@interface PXSharedLibraryAssistantContext : NSObject <PXChangeObserver, PXAssistantContext> {
    PXSharedLibraryFaceTileImageProvider *_faceTileImageProvider;
}

@property (readonly, nonatomic) NSMutableDictionary *stepContextIdentifiersToContexts;
@property (readonly, nonatomic) PXSharedLibraryLegacyDevicesFallbackMonitor *legacyDevicesFallbackMonitor;
@property (readonly, nonatomic) PXSharedLibraryLegacyDevicesRemoteController *legacyDevicesRemoteController;
@property (readonly, nonatomic) PXSharedLibraryStatusProvider *statusProvider;
@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (readonly, nonatomic) id<PXSharedLibrary> sharedLibrary;
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_reviewContextIdentifierForMode:(long long)a0 hasPreview:(BOOL)a1;
+ (id)replyAssistantContextWithSharedLibraryStatusProvider:(id)a0 sharedLibrary:(id)a1 legacyDevicesFallbackMonitor:(id)a2;
+ (id)setupAssistantContextWithSharedLibraryStatusProvider:(id)a0 sharedLibrary:(id)a1 sourceLibraryInfo:(id)a2 legacyDevicesFallbackMonitor:(id)a3;

- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void).cxx_destruct;
- (id)_cameraStepContextWithIdentifier:(id)a0;
- (id)_dateSelectionStepContextWithIdentifier:(id)a0;
- (id)_firstVisibleStepContextIdentifierIgnoringPreview:(BOOL)a0;
- (id)_howToStepContextWithIdentifier:(id)a0;
- (id)_initWithSharedLibraryStatusProvider:(id)a0 sharedLibrary:(id)a1 sourceLibraryInfo:(id)a2 legacyDevicesFallbackMonitor:(id)a3 legacyDevicesRemoteController:(id)a4 mode:(long long)a5;
- (id)_legacyDeviceStepContextIdentifierOrNextContextIdentifier:(id)a0;
- (id)_legacyDevicesFallbackStepContextWithIdentifier:(id)a0;
- (id)_nextContextIdentifierForSelectedPolicy:(long long)a0;
- (id)_nextStepContextIdentifierFromStepContextIdentifier:(id)a0;
- (id)_participantsStepContextWithIdentifier:(id)a0;
- (id)_peopleSelectionStepContextWithIdentifier:(id)a0;
- (id)_replyIntroStepContextWithIdentifier:(id)a0;
- (id)_reviewParticipantsSetupDirectStepContextWithIdentifier:(id)a0;
- (id)_reviewParticipantsSetupPreviewStepContextWithIdentifier:(id)a0;
- (id)_reviewParticipantsSetupStepContextWithIdentifier:(id)a0;
- (id)_reviewReplyDirectStepContextWithIdentifier:(id)a0;
- (id)_reviewReplyPreviewStepContextWithIdentifier:(id)a0;
- (id)_reviewReplyStepContextWithIdentifier:(id)a0;
- (id)_rulesStepContextWithIdentifier:(id)a0;
- (id)_setupIntroStepContextWithIdentifier:(id)a0;
- (id)_summaryStepContextWithIdentifier:(id)a0;
- (void)_updateCombinedImage;
- (void)_updateParticipantsInFaceTile;
- (void)configureParticipantListForStepContext:(id)a0 isReviewStep:(BOOL)a1;
- (id)initialStepContextIdentifiers;
- (id)nextStepContextIdentifierFromStepContextIdentifier:(id)a0;
- (void)setAssistantTraitCollection:(id)a0;
- (id)sharedLibraryStepContextForStepContextIdentifier:(id)a0;
- (BOOL)shouldConfirmCancellationOfAssistantForStepContextWithIdentifier:(id)a0;
- (id)stepContextForStepContextIdentifier:(id)a0;
- (void)stepContextWithIdentifier:(id)a0 confirmCancellationWithAlertProperties:(id /* block */)a1;
- (void)willCancelAssistant;

@end
