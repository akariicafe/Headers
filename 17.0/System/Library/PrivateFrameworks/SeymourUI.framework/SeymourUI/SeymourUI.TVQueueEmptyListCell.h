@interface SeymourUI.TVQueueEmptyListCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ itemInfo;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ primaryLabel;
    void /* unknown type, empty encoding */ secondaryLabel;
    void /* unknown type, empty encoding */ actionButtonTextView;
    void /* unknown type, empty encoding */ actionButton;
    void /* unknown type, empty encoding */ separator;
    void /* unknown type, empty encoding */ focusGuide;
}

@property (nonatomic, readonly) BOOL canBecomeFocused;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)handleActionButton;

@end
