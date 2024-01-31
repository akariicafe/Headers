@interface EmojiPoster.EmojiForegroundGridLayersViewController : UIViewController {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ emojiRenderer;
    void /* unknown type, empty encoding */ configuredSize;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ layoutProvider;
    void /* unknown type, empty encoding */ numberOfRows;
    void /* unknown type, empty encoding */ numberOfItemsInRow;
    void /* unknown type, empty encoding */ emojiImageViews;
    void /* unknown type, empty encoding */ emojiImages;
    void /* unknown type, empty encoding */ wakeProgress;
    void /* unknown type, empty encoding */ unlockProgress;
}

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)didMoveToParentViewController:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
