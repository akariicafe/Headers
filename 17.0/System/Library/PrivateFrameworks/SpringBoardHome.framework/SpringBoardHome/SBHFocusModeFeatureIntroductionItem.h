@class NSString, NSMutableSet, SBHIconManager;

@interface SBHFocusModeFeatureIntroductionItem : SBHFeatureIntroductionItem <SBHFocusModePopoverViewDelegate>

@property (weak, nonatomic) SBHIconManager *iconManager;
@property (retain, nonatomic) NSMutableSet *focusModePopoverViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tearDown;
- (void).cxx_destruct;
- (void)displayFeatureIntroductionAtLocations:(unsigned long long)a0 presentCompletion:(id /* block */)a1 dismissCompletion:(id /* block */)a2;
- (id)featureIntroductionIdentifier;
- (id)initWithIconManager:(id)a0;
- (void)setupFeatureIntroductionAtLocations:(unsigned long long)a0;
- (BOOL)shouldDisplayFeatureIntroductionAtLocations:(unsigned long long)a0;
- (void)_removeActiveFocusModeRequiringIntroduction;
- (void)_tearDownFocusModePopoverView:(id)a0;
- (void)focusModePopoverView:(id)a0 closeButtonTappedForIconListView:(id)a1;
- (void)focusModePopoverView:(id)a0 editPageButtonTappedForIconListView:(id)a1;
- (id)focusModePopoverViewActiveFocusMode:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusModePopoverViewFolderScrollAccessoryFrame:(id)a0;

@end
