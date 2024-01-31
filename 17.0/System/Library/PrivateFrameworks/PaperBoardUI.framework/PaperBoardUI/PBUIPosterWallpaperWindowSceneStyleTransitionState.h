@class NSString;

@interface PBUIPosterWallpaperWindowSceneStyleTransitionState : NSObject <NSCopying, BSXPCCoding> {
    struct { BOOL valid; struct { long long startStyle; long long endStyle; double transitionFraction; } state; } _stateTable[4];
}

@property (readonly, nonatomic) struct { long long x0; long long x1; double x2; } highestPriorityStyleTransitionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)init;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)diffFromPosterWallpaperWindowSceneStyleTransitionState:(id)a0 updateHandler:(id /* block */)a1 removeHandler:(id /* block */)a2;
- (void)removeWallpaperStyleTransitionStateForPriority:(long long)a0;
- (void)setWallpaperStyleTransitionState:(struct { long long x0; long long x1; double x2; })a0 forPriority:(long long)a1;

@end
