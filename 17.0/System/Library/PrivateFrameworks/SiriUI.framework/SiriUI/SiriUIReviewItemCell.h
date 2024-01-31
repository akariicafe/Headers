@class UILabel, UIView;

@interface SiriUIReviewItemCell : SiriUIContentCollectionViewCell {
    UILabel *_commentLabel;
    UILabel *_authorLabel;
    UIView *_ratingView;
    struct UIOffset { double horizontal; double vertical; } _ratingOffset;
}

@property (nonatomic) long long characterLimit;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;

+ (id)_commentLabelFont;
+ (id)_authorDateFontAttribute;
+ (id)_authorFontAttribute;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_defaultEdgeInsets;
+ (id)_displayTextForComment:(id)a0 characterLimit:(long long)a1;
+ (long long)defaultCharacterLimit;
+ (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 withReview:(id)a1 characterLimit:(long long)a2;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setRatingView:(id)a0;
- (id)_relativeStringFromDate:(id)a0;
- (void)_setAuthor:(id)a0 andDate:(id)a1 timeZoneId:(id)a2 hasRatingView:(BOOL)a3;
- (void)_setComment:(id)a0;
- (void)configureWithReview:(id)a0 ratingView:(id)a1 offset:(struct UIOffset { double x0; double x1; })a2;

@end
