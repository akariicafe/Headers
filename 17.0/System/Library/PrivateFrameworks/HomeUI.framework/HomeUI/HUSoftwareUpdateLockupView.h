@class NSSet, HFItem, UILabel, NSLayoutConstraint, HUItemCollectionViewController;

@interface HUSoftwareUpdateLockupView : HULockupView {
    HFItem *_item;
}

@property (retain, nonatomic) UILabel *tertiaryDetailLabel;
@property (retain, nonatomic) NSLayoutConstraint *gridHeightConstraint;
@property (retain, nonatomic) NSSet *affectedAccessories;
@property (nonatomic) BOOL isObservingPreferredContentSize;
@property (retain, nonatomic) HUItemCollectionViewController *gridViewController;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setItem:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)item;
- (id)initializeIconViewWithSize:(unsigned long long)a0;
- (void)updateDescriptionExpandableTextView:(id)a0 animate:(BOOL)a1;
- (void)updateIconView:(id)a0 animate:(BOOL)a1;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
