@class NSArray;

@interface SeymourUI.SessionAudioPlayerViewController : UIViewController {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ currentLayoutKind;
    void /* unknown type, empty encoding */ currentLayoutEnvironment;
    void /* unknown type, empty encoding */ previousBounds;
    void /* unknown type, empty encoding */ contentOverlayView;
    void /* unknown type, empty encoding */ isPictureInPictureActive;
    void /* unknown type, empty encoding */ layoutProvider;
    void /* unknown type, empty encoding */ settingsPopoverSourceView;
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ playerView;
}

@property (nonatomic, readonly) NSArray *keyCommands;

- (void)updateViewConstraints;
- (void)viewSafeAreaInsetsDidChange;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
