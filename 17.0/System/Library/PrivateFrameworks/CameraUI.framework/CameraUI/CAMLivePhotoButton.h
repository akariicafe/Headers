@class NSString, CAMLivePhotoBloomView;

@interface CAMLivePhotoButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider>

@property (readonly, nonatomic) CAMLivePhotoBloomView *_bloomView;
@property (nonatomic) long long livePhotoMode;
@property (nonatomic) BOOL allowsAutomaticMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)enablingAnimationDuration;

- (id)imageForAccessibilityHUD;
- (id)initWithLayoutStyle:(long long)a0;
- (void)reloadData;
- (id)headerView;
- (id)_currentBaseImage;
- (void)interruptEnablingAnimation;
- (id)titleForMenuItemAtIndex:(long long)a0;
- (id)_availableModes;
- (void)setAllowsAutomaticMode:(BOOL)a0 needsReloadData:(BOOL)a1;
- (void)_updateBaseImage;
- (long long)modeForIndex:(long long)a0;
- (void).cxx_destruct;
- (void)setSelectedIndex:(long long)a0;
- (long long)indexForMode:(long long)a0;
- (void)finishExpansionAnimated:(BOOL)a0;
- (long long)numberOfMenuItems;
- (void)prepareHeaderViewForExpanding:(BOOL)a0;
- (void)performEnablingAnimation;

@end
