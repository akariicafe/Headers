@class NSArray;

@interface SeymourUI.TVQueueListHeaderCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ itemInfo;
    void /* unknown type, empty encoding */ buttonFocusGuide;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ overviewLabel;
    void /* unknown type, empty encoding */ durationLabel;
    void /* unknown type, empty encoding */ mainButtonAction;
    void /* unknown type, empty encoding */ mainButtonTextView;
    void /* unknown type, empty encoding */ mainButton;
    void /* unknown type, empty encoding */ ellipsisButton;
}

@property (nonatomic, readonly) BOOL canBecomeFocused;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)handleMainActionButtonTapped;

@end
