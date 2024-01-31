@class NSSet, NSMapTable, SBHIconEditingSettings, NSString, NSMutableArray;
@protocol SBIconListLayoutAnimating;

@interface SBIconDragUndoLayoutDelegate : NSObject <SBIconListLayoutAnimating, SBIconListLayoutDelegate> {
    NSMutableArray *_iconViewsHiddenForRemovalAnimation;
}

@property (readonly, copy, nonatomic) NSMapTable *originalIconScreenLocations;
@property (readonly, copy, nonatomic) NSMapTable *destinationIconScreenLocations;
@property (readonly, copy, nonatomic) NSSet *iconsAtHigherZLevel;
@property (retain, nonatomic) id<SBIconListLayoutAnimating> defaultRemovalAnimator;
@property (readonly, nonatomic) SBHIconEditingSettings *iconEditingSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)iconListView:(id)a0 animatorForRemovingIcons:(id)a1 proposedAnimator:(id)a2;
- (void)iconListView:(id)a0 wantsAnimatedLayoutForIconView:(id)a1 withParameters:(struct SBIconListLayoutAnimationParameters { struct CGPoint { double x0; double x1; } x0; double x1; struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } x2; BOOL x3; struct SBIconCoordinate { long long x0; long long x1; } x4; BOOL x5; BOOL x6; unsigned long long x7; })a2 alongsideAnimationBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (void)iconListView:(id)a0 wantsAnimatedRemovalForIconViews:(id)a1 completionHandler:(id /* block */)a2;
- (void)animateWithOptions:(unsigned long long)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;
- (id)iconListView:(id)a0 animatorForLayingOutIconView:(id)a1 proposedAnimator:(id)a2;
- (id)initWithOriginalIconScreenLocations:(id)a0 destinationIconScreenLocations:(id)a1 iconsAtHigherZLevel:(id)a2;
- (id)initWithPreModificationInfo:(id)a0;

@end
