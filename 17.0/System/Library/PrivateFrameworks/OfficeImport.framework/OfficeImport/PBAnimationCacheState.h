@class NSMutableSet;

@interface PBAnimationCacheState : PDAnimationCacheState {
    NSMutableSet *mEntranceDrawables;
    NSMutableSet *mExitDrawables;
}

- (id)init;
- (BOOL)isValid:(id)a0;
- (void).cxx_destruct;

@end
