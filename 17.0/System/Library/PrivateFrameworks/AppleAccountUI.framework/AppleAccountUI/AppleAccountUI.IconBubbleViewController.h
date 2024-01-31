@interface AppleAccountUI.IconBubbleViewController : UIViewController <AAUIMicaPlayerDelegate> {
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ player;
    void /* unknown type, empty encoding */ memojiWrapperLayer;
    void /* unknown type, empty encoding */ memojiContainerLayer;
    void /* unknown type, empty encoding */ memojiLayer;
    void /* unknown type, empty encoding */ logoLayer;
    void /* unknown type, empty encoding */ logoFillLayer;
    void /* unknown type, empty encoding */ iconLayers;
    void /* unknown type, empty encoding */ iconImages;
    void /* unknown type, empty encoding */ isShowingAsset;
    void /* unknown type, empty encoding */ _timingModel;
}

@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;

- (void)AAUIMicaPlayerDidChangePlaybackTime:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
