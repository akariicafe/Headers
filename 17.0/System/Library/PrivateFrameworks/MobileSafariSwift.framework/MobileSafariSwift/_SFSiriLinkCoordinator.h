@interface _SFSiriLinkCoordinator : NSObject

@property (nonatomic, weak) void /* unknown type, empty encoding */ actionPerformer;

+ (void)setApplicationProxy:(id)a0;

- (id)openTabInteraction;
- (id)createNewTabInteraction;
- (id)openViewInteraction;
- (id)init;
- (id)closeTabInteraction;
- (id)createNewTabGroupInteraction;
- (id)listenToPageSiriReaderInteraction;
- (id)tabEntityInteractionWithUUID:(id)a0;
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
