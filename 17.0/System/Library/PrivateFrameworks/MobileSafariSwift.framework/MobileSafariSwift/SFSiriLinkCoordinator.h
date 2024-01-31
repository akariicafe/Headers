@class NSString, _SFSiriLinkCoordinator;
@protocol SFSiriLinkActionPerformer;

@interface SFSiriLinkCoordinator : NSObject <_SFSiriLinkActionPerformer> {
    _SFSiriLinkCoordinator *_internal;
}

@property (weak, nonatomic) id<SFSiriLinkActionPerformer> actionPerformer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setApplicationProxy:(id)a0;

- (void)openBookmarkWithUUIDString:(id)a0;
- (void)createNewPrivateTab;
- (void)setView:(unsigned long long)a0 visible:(BOOL)a1;
- (void)createNewTabGroupWithTitle:(id)a0;
- (void)closeTabWithUUID:(id)a0;
- (void)performSearchUsingQuery:(id)a0;
- (id)openTabInteraction;
- (id)createNewTabInteraction;
- (void)setReaderModeEnabled:(BOOL)a0;
- (void)createNewTab;
- (id)openViewInteraction;
- (id)init;
- (id)closeTabInteraction;
- (BOOL)canReadThis;
- (void)toggleReaderMode;
- (BOOL)canReadActiveLanguage;
- (void)createNewBookmarkWithTitle:(id)a0;
- (void)openTabWithUUID:(id)a0;
- (id)createNewTabGroupInteraction;
- (id)listenToPageSiriReaderInteraction;
- (void)closeStartPage;
- (void)createReadingListItem;
- (void)openStartPage;
- (id)tabEntityInteractionWithUUID:(id)a0;
- (void)navigateContinuousReadingListToDirection:(unsigned long long)a0;
- (void)openTabGroupOfKind:(long long)a0 uuidString:(id)a1;
- (void)siriReadThisVocalInvocation;
- (id)createReadingListItemInteraction;
- (id)openBookmarkInteraction;
- (void).cxx_destruct;
- (id)createNewPrivateTabInteraction;
- (id)navigateContinuousReadingListInteraction;
- (id)closeViewInteraction;
- (id)webSearchInteraction;
- (id)createNewBookmarkInteraction;
- (id)openReadingListItemInteraction;
- (id)openTabGroupInteraction;
- (id)changeReaderModeInteraction;

@end
