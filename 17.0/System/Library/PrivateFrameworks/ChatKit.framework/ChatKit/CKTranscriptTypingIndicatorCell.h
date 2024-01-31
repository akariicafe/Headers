@class CKTypingView, CALayer;
@protocol CKTypingIndicatorLayerProtocol;

@interface CKTranscriptTypingIndicatorCell : CKTranscriptMessageCell <CKLayerDelegate>

@property (retain, nonatomic) CKTypingView *typingView;
@property (retain, nonatomic) CALayer<CKTypingIndicatorLayerProtocol> *indicatorLayer;

- (void)setTraitCollection:(id)a0;
- (void)setOrientation:(char)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)performRemoval:(id /* block */)a0;
- (void)resetTypingView;
- (void)ckLayerDidBecomeVisible:(BOOL)a0;
- (void)configureForChatItem:(id)a0 context:(id)a1;
- (void)layoutSubviewsForAlignmentContents;
- (void)performInsertion:(id /* block */)a0;
- (void)setTraitCollectionForIndicatorLayer:(id)a0;
- (void)startGrowAnimation;
- (void)startPulseAnimation;
- (void)startShrinkAnimation;
- (void)stopPulseAnimation;

@end
