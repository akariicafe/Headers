@class PXFeedSectionInfosManager, NSString, NSMutableArray, PXGadgetNavigationHelper;
@protocol PXGadgetTransition, PXGadgetDelegate;

@interface PXSharedAlbumActivityGadgetProvider : PXGadgetProvider <PXFeedSectionInfosManagerDelegate, PXSharedAlbumInvitationGadgetDelegate>

@property (retain, nonatomic) PXFeedSectionInfosManager *feedSectionInfosManager;
@property (nonatomic) unsigned long long estimatedGadgetCount;
@property (retain, nonatomic) NSString *invitationAlbumCloudGUID;
@property (retain, nonatomic) NSMutableArray *delayedChanges;
@property (readonly, nonatomic) long long maxNumberOfSections;
@property (readonly, nonatomic) id<PXGadgetTransition> gadgetTransition;
@property (readonly, nonatomic) PXGadgetNavigationHelper *rootNavigationHelper;
@property (weak, nonatomic) id<PXGadgetDelegate> nextGadgetResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)_update:(id)a0;
- (void)generateGadgets;
- (void).cxx_destruct;
- (void)loadDataForGadgets;
- (id)_gadgetsForSectionIndexes:(id)a0;
- (unsigned long long)_indexForGadget:(id)a0;
- (id)_indexesOfSectionInfosToDisplay:(unsigned long long)a0;
- (void)_processDelayedChanges;
- (void)_processDelayedChangesImmediatelyIfNecessary:(id)a0;
- (void)feedSectionInfosManager:(id)a0 sectionInfosDidChange:(id)a1;
- (void)gadget:(id)a0 didAccept:(BOOL)a1;

@end
