@class SKUIAttributedStringView;

@interface SKUIAttributedStringWrapperView : SKUIAttributedStringView

@property (readonly, nonatomic) SKUIAttributedStringView *delegateView;

- (void)setLayout:(id)a0;
- (double)baselineOffset;
- (id)textColor;
- (double)firstBaselineOffset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBadgePlacement:(long long)a0;
- (void).cxx_destruct;
- (long long)badgePlacement;
- (id)layout;
- (void)layoutSubviews;
- (void)setTextColor:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setTextColorFollowsTintColor:(BOOL)a0;
- (BOOL)textColorFollowsTintColor;
- (long long)stringTreatment;
- (void)viewWasRecycled;
- (long long)firstLineTopInset;
- (id)requiredBadges;
- (void)setFirstLineTopInset:(long long)a0;
- (void)setRequiredBadges:(id)a0;
- (void)setStringTreatment:(long long)a0;
- (void)setTreatmentColor:(id)a0;
- (id)treatmentColor;
- (BOOL)usesTallCharacterSet;

@end
