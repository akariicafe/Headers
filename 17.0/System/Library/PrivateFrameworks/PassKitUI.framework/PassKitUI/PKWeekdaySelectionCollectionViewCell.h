@class PKWeekdaySelector;
@protocol PKWeekdaySelectorDelegate;

@interface PKWeekdaySelectionCollectionViewCell : UICollectionViewListCell {
    PKWeekdaySelector *_weekdaySelector;
}

@property (weak, nonatomic) id<PKWeekdaySelectorDelegate> delegate;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)setBackgroundColor:(id)a0;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (void)setSelectedDays:(id)a0 possibleDays:(id)a1;

@end
