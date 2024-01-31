@class NSArray, NSString, UIToolbar, UIView, NSMutableSet, PUToolbarViewModel;

@interface PUExtendedToolbar : UIToolbar <PUToolbarViewModelChangeObserver>

@property (nonatomic, setter=_setNumberOfNestedChanges:) long long _numberOfNestedChanges;
@property (nonatomic, setter=_setUpdating:) BOOL _isUpdating;
@property (nonatomic, setter=_setNeedsUpdateToolbarItems:) BOOL _needsUpdateToolbarItems;
@property (nonatomic, setter=_setNeedsUpdateAccessoryView:) BOOL _needsUpdateAccessoryView;
@property (nonatomic, setter=_setNeedsUpdateAccessoryViewTopOutset:) BOOL _needsUpdateAccessoryViewTopOutset;
@property (nonatomic, setter=_setNeedsUpdateContainedToolbar:) BOOL _needsUpdateContainedToolbar;
@property (nonatomic, setter=_setNeedsUpdateAccessoryViewContainer:) BOOL _needsUpdateAccessoryViewContainer;
@property (copy, nonatomic, setter=_setToolbarItems:) NSArray *_toolbarItems;
@property (retain, nonatomic, setter=_setAccessoryView:) UIView *_accessoryView;
@property (nonatomic, setter=_setContainedToolbarHeight:) double _containedToolbarHeight;
@property (nonatomic, setter=_setAccessoryViewTopOutset:) double _accessoryViewTopOutset;
@property (retain, nonatomic, setter=_setContainedToolbar:) UIToolbar *_containedToolbar;
@property (retain, nonatomic, setter=_setAccessoryViewContainer:) UIView *_accessoryViewContainer;
@property (readonly, nonatomic) NSMutableSet *_accessoryViewContainers;
@property (retain, nonatomic) PUToolbarViewModel *toolbarViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)setBarStyle:(long long)a0;
- (BOOL)_shouldStretchDuringCrossfadeTransition;
- (void)_invalidateToolbarItems;
- (void)_invalidateAccessoryViewTopOutset;
- (void)_performChanges:(id /* block */)a0;
- (BOOL)_needsUpdate;
- (void)_assertInsideChangeBlock;
- (void)tintColorDidChange;
- (void)_invalidateContainedToolbar;
- (void)_assertInsideUpdate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateAccessoryTopOutsetViewIfNeeded;
- (void)_updateToolbarItemsIfNeeded;
- (void)_invalidateAccessoryViewContainer;
- (void)_setNeedsUpdate;
- (void)_invalidateSize;
- (void)_updateIfNeededWithAnimatorBlock:(id /* block */)a0;
- (void)_updateAccessoryViewIfNeeded;
- (void)_updateViewsIfNeededWithAnimatorBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_getContainedToolbarFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 accessoryViewContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 forBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)_performChanges:(id /* block */)a0 withAnimatorBlock:(id /* block */)a1;
- (void)_invalidateAccessoryView;
- (void)setToolbarViewModel:(id)a0 withAnimatorBlock:(id /* block */)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
