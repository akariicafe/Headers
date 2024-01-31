@interface EmojiPoster.EmojiGreyscaleReplicatorViewController : UIViewController {
    void /* unknown type, empty encoding */ emoji;
    void /* unknown type, empty encoding */ emojiSize;
    void /* unknown type, empty encoding */ spacingFactor;
    void /* unknown type, empty encoding */ scale;
    void /* unknown type, empty encoding */ scaleDelta;
    void /* unknown type, empty encoding */ emojiLayer;
    void /* unknown type, empty encoding */ secondaryEmojiLayer;
    void /* unknown type, empty encoding */ horizontalReplicatorLayer;
    void /* unknown type, empty encoding */ offsetHorizontalReplicatorLayer;
    void /* unknown type, empty encoding */ verticalReplicatorLayer;
    void /* unknown type, empty encoding */ offsetVerticalReplicatorLayer;
}

- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)adjustScaleWithGesture:(id)a0;

@end
