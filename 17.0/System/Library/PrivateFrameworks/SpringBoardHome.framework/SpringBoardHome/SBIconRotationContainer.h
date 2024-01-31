@class SBIconView, SBIcon, NSString;
@protocol SBIconViewProviding;

@interface SBIconRotationContainer : UIView

@property (readonly, nonatomic) SBIconView *startView;
@property (readonly, nonatomic) SBIconView *endView;
@property (weak, nonatomic) id<SBIconViewProviding> iconViewProvider;
@property (readonly, nonatomic) SBIcon *startIcon;
@property (readonly, nonatomic) SBIcon *endIcon;
@property (readonly, nonatomic) struct SBIconCoordinate { long long column; long long row; } coordinate;
@property (readonly, copy, nonatomic) NSString *location;
@property (readonly, nonatomic) long long transitionAnimation;
@property (readonly, nonatomic, getter=isOffscreen) BOOL offscreen;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)performTransition;
- (void)_configureViewIfNecessary:(id)a0 forShowingSnapshotWhenDeactivated:(BOOL)a1;
- (id)addIconViewForIcon:(id)a0 configurationOptions:(unsigned long long)a1;
- (void)concludeTransition;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 startIcon:(id)a1 endIcon:(id)a2 iconViewProvider:(id)a3 coordinate:(struct SBIconCoordinate { long long x0; long long x1; })a4 location:(id)a5 transitionAnimation:(long long)a6 offscreen:(BOOL)a7;
- (void)prepareToTransition;

@end
