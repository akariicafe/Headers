@class NSString, UITapGestureRecognizer, NSArray, HACCCapsuleTitleView, HACCCapsuleDarkBackground, NSDictionary, NSMutableArray, HACCStackView;
@protocol HACCContentModuleDelegate;

@interface HUICCMenuCheckmarkView : UIView <UIGestureRecognizerDelegate, HACCContentModule>

@property (retain, nonatomic) HACCCapsuleTitleView *titleView;
@property (retain, nonatomic) HACCCapsuleDarkBackground *backgroundMenuView;
@property (retain, nonatomic) HACCStackView *menuViewStack;
@property (retain, nonatomic) NSMutableArray *menuItems;
@property (retain, nonatomic) NSMutableArray *menuItemViews;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) NSArray *availableComfortSoundsAssets;
@property (retain, nonatomic) NSDictionary *comfortSoundsDownloadProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HACCContentModuleDelegate> delegate;
@property (nonatomic) unsigned long long module;
@property (nonatomic) BOOL providesOwnSeparator;

- (BOOL)enabled;
- (void).cxx_destruct;
- (void)_handleTapGesture:(id)a0;
- (id)_menuItems;
- (void)updateValue;
- (void)_updateMenuViewIfNecessary;
- (id)contentValue;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andModule:(unsigned long long)a1;
- (id /* block */)personalAudioToggleBlockForType:(unsigned long long)a0;

@end
