@interface SeymourUI.DurationFilterCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ itemInfo;
    void /* unknown type, empty encoding */ tickView;
    void /* unknown type, empty encoding */ minLabel;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ labelLayoutGuide;
    void /* unknown type, empty encoding */ unitsVerticalConstraint;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ durationLabel;

- (void)accessibilityApplyState:(BOOL)a0 disabled:(BOOL)a1;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)textSizeChanged:(id)a0;

@end
