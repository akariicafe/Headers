@class CKGradientView, UIImageView, UIView;
@protocol CKGradientReferenceView;

@interface CKAggregateAcknowledgmentBalloonView : CKAcknowledgmentBalloonView {
    CKGradientView *_gradientView;
    UIImageView *_backgroundView;
    UIImageView *_solidPartsView;
}

@property (weak, nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView;
@property (nonatomic) BOOL invertTailDirection;
@property (nonatomic) char gradientColor;
@property (nonatomic) char solidColor;

+ (id)_middleBubbleInvertedTailSquareImageWithTraitCollection:(id)a0;
+ (id)_middleBubbleSquareImageWithTraitCollection:(id)a0;
+ (id)_topBubbleInvertedTailSquareImageWithTraitCollection:(id)a0;
+ (id)_topBubbleSquareImageWithTraitCollection:(id)a0;

- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureForAggregateAcknowledgmentChatItem:(id)a0;

@end
