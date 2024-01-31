@class UIButton, NSArray;
@protocol PUWallpaperPosterEditToolbarDelegate;

@interface PUWallpaperPosterEditToolBar : UIView

@property (retain, nonatomic) UIButton *firstActionButton;
@property (retain, nonatomic) UIButton *secondActionButton;
@property (retain, nonatomic) UIButton *thirdActionButton;
@property (retain, nonatomic) UIButton *fourthActionButton;
@property (retain, nonatomic) NSArray *leadingMenuElements;
@property (retain, nonatomic) NSArray *trailingMenuElements;
@property (weak, nonatomic) id<PUWallpaperPosterEditToolbarDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_setupView;
- (id)_createActionButton;
- (void)_removeMenuElement:(id)a0 fromButton:(id)a1;
- (void)_setMenuElement:(id)a0 onButton:(id)a1;
- (void)_setMenuElements:(id)a0 oldMenuElements:(id)a1 onButtonOne:(id)a2 onButtonTwo:(id)a3;

@end
