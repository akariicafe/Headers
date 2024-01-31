@class CPMapButton;

@interface CPSMapButton : CPSButton

@property (retain, nonatomic) CPMapButton *mapButton;

+ (id)buttonWithCPMapButton:(id)a0;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (float)charge;
- (void)setCharge:(float)a0;
- (void)_updateButtonImages;

@end
