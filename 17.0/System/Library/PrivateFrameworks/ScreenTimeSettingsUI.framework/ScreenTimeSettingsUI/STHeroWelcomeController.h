@interface STHeroWelcomeController : OBWelcomeController

@property double topInset;

- (void)loadView;
- (void)setView:(id)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3 topInset:(double)a4;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 topInset:(double)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 topInset:(double)a2;

@end
