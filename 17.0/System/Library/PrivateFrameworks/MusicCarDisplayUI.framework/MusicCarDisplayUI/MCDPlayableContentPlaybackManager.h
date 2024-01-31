@class NSString, MCDPCModel;

@interface MCDPlayableContentPlaybackManager : _MCDNowPlayingContentManager <MPRequestResponseControllerDelegate, UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, getter=isSeeking) BOOL seeking;
@property (retain, nonatomic) MCDPCModel *model;
@property (nonatomic) long long playingItemIndex;
@property (nonatomic) long long totalItemCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)_itemAtIndexPath:(id)a0;
- (BOOL)nowPlayingViewController:(id)a0 buttonShouldBeActive:(long long)a1;
- (void)nowPlayingViewController:(id)a0 didSendAction:(long long)a1 state:(long long)a2;
- (BOOL)nowPlayingViewController:(id)a0 shouldDisplayButton:(long long)a1 withImage:(out id *)a2 existingIdentifier:(id)a3 tinted:(out BOOL *)a4;
- (void)nowPlayingViewControllerAddToLibrary:(id)a0;
- (BOOL)nowPlayingViewControllerCanShowAddToLibrary:(id)a0;
- (BOOL)nowPlayingViewControllerCanShowMore:(id)a0;
- (BOOL)nowPlayingViewControllerIsRightHandDrive:(id)a0;
- (void)nowPlayingViewControllerMore:(id)a0;
- (id)_adjustedIndexPathForPlaybackQueue:(id)a0;
- (id)_alertActionForFeedbackCommand:(id)a0 fallbackTitle:(id)a1;
- (void)_handleHamburgerActionSheet;
- (double)_jumpBackwardInterval;
- (double)_jumpForwardInterval;
- (long long)_numberOfItemsInPlaybackQueue;
- (void)_processResponse:(id)a0 error:(id)a1;
- (id)_skipIntervalButtonImageForInterval:(double)a0 size:(long long)a1;
- (void)_updateTrackQueueIndex;

@end
