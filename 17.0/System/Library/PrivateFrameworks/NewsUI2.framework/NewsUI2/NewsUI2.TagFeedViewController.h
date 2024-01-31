@interface NewsUI2.TagFeedViewController : UIViewController <TeaUI.GutterViewBoundsObserver, UICollectionViewDelegate, TUScrollable> {
    void /* unknown type, empty encoding */ _lastImpression;
    void /* unknown type, empty encoding */ feedDescriptor;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ commands;
    void /* unknown type, empty encoding */ refreshStateMachine;
    void /* unknown type, empty encoding */ refreshControl;
    void /* unknown type, empty encoding */ sharingActivityProviderFactory;
    void /* unknown type, empty encoding */ debugButtonConfiguration;
    void /* unknown type, empty encoding */ lastGutterViewBounds;
    void /* unknown type, empty encoding */ backgroundPlugin;
    void /* unknown type, empty encoding */ didAppearCompletions;
    void /* unknown type, empty encoding */ impressionObservers;
    void /* unknown type, empty encoding */ shouldAttemptRequestSportsScoresTooltip;
}

- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollToTopAnimated:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)gutterViewBoundsDidChange;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)didPullToRefreshWithSender:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
