@class NSString, SBReusableViewMap, SBIconDragManager;
@protocol SBRecycledViewsContainerProviding;

@interface PRWidgetIconViewProvider : NSObject <SBReusableViewMapDelegate, SBIconViewDelegate, SBIconViewObserver, SBIconViewProviding> {
    SBReusableViewMap *_iconViewMap;
}

@property (weak, nonatomic) id<SBRecycledViewsContainerProviding> recycledViewsContainerProvider;
@property (readonly, nonatomic, getter=isWidgetInteractionDisabled) BOOL widgetInteractionDisabled;
@property (readonly, nonatomic) BOOL useMaterialBackground;
@property (retain, nonatomic) SBIconDragManager *dragManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)iconViewMap;
- (void)configureIconView:(id)a0 forIcon:(id)a1;
- (void)iconViewWillBeginDrag:(id)a0 session:(id)a1;
- (void)iconView:(id)a0 didChangeCustomImageViewController:(id)a1;
- (void)iconView:(id)a0 dragLiftAnimationDidChangeDirection:(long long)a1;
- (void)iconView:(id)a0 item:(id)a1 willAnimateDragCancelWithAnimator:(id)a2;
- (void)recycleIconView:(id)a0;
- (BOOL)isIconViewRecycled:(id)a0;
- (id)customImageViewControllerForIconView:(id)a0;
- (BOOL)iconView:(id)a0 canAddDragItemsToSession:(id)a1;
- (id)dequeueReusableIconViewOfClass:(Class)a0;
- (id)recycledViewsContainerProviderForViewMap:(id)a0;
- (void)iconView:(id)a0 didEndDragSession:(id)a1 withOperation:(unsigned long long)a2;
- (unsigned long long)viewMap:(id)a0 maxRecycledViewsOfClass:(Class)a1;
- (void).cxx_destruct;
- (void)iconView:(id)a0 willAnimateDragLiftWithAnimator:(id)a1 session:(id)a2;
- (id)iconView:(id)a0 dragPreviewForItem:(id)a1 session:(id)a2 previewParameters:(id)a3;
- (id)dragItemsForIconView:(id)a0;
- (id)initWithRecycledViewsContainerProvider:(id)a0 widgetInteractionDisabled:(BOOL)a1 useMaterialBackground:(BOOL)a2;

@end
