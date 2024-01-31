@class UISwitch;
@protocol SFStartPageCustomizationCellDelegate;

@interface SFStartPageCustomizationCell : UICollectionViewListCell {
    UISwitch *_switch;
}

@property (weak, nonatomic) id<SFStartPageCustomizationCellDelegate> delegate;
@property (nonatomic, getter=isOn) BOOL on;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setAccessories:(id)a0;
- (void)valueDidChange:(id)a0;

@end
