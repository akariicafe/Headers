@interface VideosUI.PlayerHUDTemplateController : VideosUI.StackTemplateController {
    void /* unknown type, empty encoding */ contextData;
    void /* unknown type, empty encoding */ nowPlayingTabDelegate;
    void /* unknown type, empty encoding */ playerViewSize;
    void /* unknown type, empty encoding */ shouldDismissOnSelect;
    void /* unknown type, empty encoding */ previousViewWidth;
    void /* unknown type, empty encoding */ viewModelForPendingEventHandling;
    void /* unknown type, empty encoding */ targetResponderForPendingEventHandling;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)vui_viewDidLoad;
- (void)vui_viewDidDisappear:(BOOL)a0;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewWillAppear:(BOOL)a0;
- (void)handlePipingDidChange:(id)a0;
- (void)handlePlayerDismissedAfterPiping:(id)a0;

@end
