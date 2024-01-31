@class NSArray;

@interface SeymourUI.ContentUnavailableFixedHeightCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ itemInfo;
    void /* unknown type, empty encoding */ contentUnavailableView;
    void /* unknown type, empty encoding */ contentBottomConstraint;
    void /* unknown type, empty encoding */ cellHeightConstraint;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
