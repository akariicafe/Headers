@class NSString;

@interface _SBHStackConfigurationIconView : SBIconView <SBIconListLayoutObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)groupNameBaseForComponentBackgroundViewOfType:(long long)a0;

- (void)_updateCloseBoxForAllIconsInListView:(id)a0 animated:(BOOL)a1;
- (id)_stackConfigurationViewController;
- (id)_iconListView;
- (BOOL)shouldTapGestureRecognizeAlongsideDragInteractionGestures;
- (unsigned long long)customIconImageViewControllerPriority;
- (BOOL)shouldShowCloseBox;
- (void)iconListView:(id)a0 didRemoveIconView:(id)a1;
- (void)iconListView:(id)a0 didAddIconView:(id)a1;
- (BOOL)_cannotRemoveLastWidgetInWidgetSheet;

@end
