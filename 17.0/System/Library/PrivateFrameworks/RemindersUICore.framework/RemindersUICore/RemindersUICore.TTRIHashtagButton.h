@class NSString, NSArray;

@interface RemindersUICore.TTRIHashtagButton : UIButton {
    void /* unknown type, empty encoding */ focusDelegate;
    void /* unknown type, empty encoding */ isContextMenuTarget;
    void /* unknown type, empty encoding */ isExcluded;
    void /* unknown type, empty encoding */ isAddTagButton;
    void /* unknown type, empty encoding */ accessibilityDelegate;
}

@property (nonatomic, readonly) BOOL canBecomeFocused;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic, copy) NSString *accessibilityHint;
@property (nonatomic, copy) NSArray *accessibilityUserInputLabels;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)ttriAccessibilityShouldUseViewHierarchyForFindingScrollParent;

@end
