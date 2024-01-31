@interface VideosUI.MultiViewPlayerHUDTemplateController : VideosUI.PlayerHUDTemplateController <VUIMultiPlayerDetailsViewController> {
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ focusedViewModelIdentifier;
    void /* unknown type, empty encoding */ shouldDismissOnSelect;
}

@property (nonatomic, readonly) long long itemCount;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)vui_viewDidLoad;
- (void)vui_viewWillAppear:(BOOL)a0;
- (void)updateVisibleCellsWithPlaybackIdentifiers:(id)a0;
- (void)updateWithSelectedPlaybackIdentifiers:(id)a0 reloadingData:(BOOL)a1;
- (void)vuiScrollViewDidScroll:(id)a0;

@end
