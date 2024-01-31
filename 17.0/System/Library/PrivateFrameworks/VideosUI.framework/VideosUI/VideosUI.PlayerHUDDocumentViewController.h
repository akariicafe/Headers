@interface VideosUI.PlayerHUDDocumentViewController : VideosUI.DocumentRequestViewController <VUINowPlayingTabController, VUIMultiPlayerDetailsViewController> {
    void /* unknown type, empty encoding */ templateControllerHosted;
    void /* unknown type, empty encoding */ nowPlayingTabDelegate;
    void /* unknown type, empty encoding */ tabContextData;
    void /* unknown type, empty encoding */ playerViewSize;
    void /* unknown type, empty encoding */ refetchUpNext;
    void /* unknown type, empty encoding */ isMultiView;
}

@property (nonatomic, readonly) long long itemCount;

- (id)getNowPlayingTabContextData;
- (double)nowPlayingTabHeight;
- (void)setNowPlayingTabContextData:(id)a0;
- (void)setNowPlayingTabDelegate:(id)a0;
- (void)setPlayerViewSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)vui_viewDidLoad;
- (void)vui_viewDidAppear:(BOOL)a0;
- (void)updateVisibleCellsWithPlaybackIdentifiers:(id)a0;
- (void)updateWithSelectedPlaybackIdentifiers:(id)a0 reloadingData:(BOOL)a1;

@end
