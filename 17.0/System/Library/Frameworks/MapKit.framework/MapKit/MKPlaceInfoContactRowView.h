@class MKVibrantLabel, CNLabeledValue, NSString, MKPlaceSectionHeaderView, NSArray, NSLayoutConstraint, _MKUILabel, UIColor;
@protocol NSItemProviderWriting;

@interface MKPlaceInfoContactRowView : MKPlaceSectionRowView <UIGestureRecognizerDelegate> {
    MKPlaceSectionHeaderView *_headerView;
    NSLayoutConstraint *_topToTitleConstraint;
    NSLayoutConstraint *_topToIconConstraint;
    NSLayoutConstraint *_titleToValueConstraint;
    NSLayoutConstraint *_valueToTrailingViewConstraint;
    NSArray *_iconConstraints;
    NSArray *_titleConstraints;
    BOOL _isInRightMouseDownEvent;
    BOOL _textIsSelectable;
}

@property (readonly, nonatomic) MKVibrantLabel *titleLabel;
@property (readonly, nonatomic) _MKUILabel *valueLabel;
@property (retain, nonatomic) NSLayoutConstraint *valueToBottomConstraint;
@property (retain, nonatomic) UIColor *labelColor;
@property (retain, nonatomic) CNLabeledValue *labeledValue;
@property (copy, nonatomic) id /* block */ iconSelectedBlock;
@property (readonly, nonatomic) id<NSItemProviderWriting> draggableContent;
@property (readonly, nonatomic) int analyticsTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)icon;

- (void)copy:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_icon;
- (void)_contentSizeDidChange;
- (id)_valueString;
- (id)_iconAccessibilityLabel;
- (Class)_labeledValueExpectedValueType;

@end
