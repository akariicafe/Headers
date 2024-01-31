@class PXGadgetSectionHeader, NSString, UILabel, UIView, UIButton;

@interface PXGadgetSectionHeaderUIView : UICollectionReusableView <PXChangeObserver> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
}

@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UIButton *accessoryButton;
@property (readonly, nonatomic) UIView *divider;
@property (retain, nonatomic) PXGadgetSectionHeader *headerModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sizingLabel;
+ (id)_accessoryButtonFont;
+ (double)_heightThatFitsFirstToLastBaselineWithText:(id)a0 width:(double)a1 font:(id)a2;
+ (double)_preferredHeightForText:(id)a0 fittingWidth:(double)a1 style:(unsigned long long)a2 dividerHidden:(BOOL)a3;
+ (struct CGSize { double x0; double x1; })_preferredSizeOfButtonWithType:(unsigned long long)a0 width:(double)a1;
+ (id)_sizingButton;
+ (double)preferredHeightForText:(id)a0 buttonType:(unsigned long long)a1 fittingWidth:(double)a2 style:(unsigned long long)a3 dividerHidden:(BOOL)a4 isAccessibilitySize:(BOOL)a5;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateTitle;
- (void)layoutSubviews;
- (void)_buttonPressed;
- (void)_updateAccessoryButton;
- (void)configureAccessoryButton:(id)a0;
- (void)configureTitleLabel:(id)a0;
- (void)contentSizeCategoryDidChangeNotification:(id)a0;

@end
