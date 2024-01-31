@class NSArray;

@interface SeymourUI.TVQueueListCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ itemInfo;
    void /* unknown type, empty encoding */ preferredOperation;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ horizontalStackView;
    void /* unknown type, empty encoding */ lockupView;
    void /* unknown type, empty encoding */ deleteButton;
    void /* unknown type, empty encoding */ grabButton;
    void /* unknown type, empty encoding */ focusGuide;
}

@property (nonatomic, readonly) BOOL canBecomeFocused;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void)handleDelete;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)handleGrab;

@end
