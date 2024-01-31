@class UIColor, UIView;

@interface PUImportSectionBackgroundView : UICollectionReusableView

@property (retain, nonatomic) UIView *bottomStrokeView;
@property (nonatomic) BOOL needsBottomStrokeViewUpdate;
@property (nonatomic) double strokeWidth;
@property (retain, nonatomic) UIColor *bottomStrokeColor;

- (void)applyLayoutAttributes:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)needsStroke;
- (void)setNeedsBottomStrokeViewUpdate;
- (void)updateBottomStrokeViewIfNeeded;

@end
