@interface EmojiPoster.EmojiForegroundCircularLayersViewController : UIViewController {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ emojiRenderer;
    void /* unknown type, empty encoding */ deviceOrientation;
    void /* unknown type, empty encoding */ shouldRotateEmojiWithDevice;
    void /* unknown type, empty encoding */ shouldRotateCenterEmojiWithDevice;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ _layoutProvider;
    void /* unknown type, empty encoding */ emojiSize;
    void /* unknown type, empty encoding */ emojiImageViews;
    void /* unknown type, empty encoding */ emojiImages;
    void /* unknown type, empty encoding */ wakeProgress;
    void /* unknown type, empty encoding */ unlockProgress;
}

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewIsAppearing:(BOOL)a0;

@end
