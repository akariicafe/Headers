@class NSMutableArray, TSCHMultiDataLayerAnimationInfo;

@interface TSCHMultiDataChartRepAnimationDictionaryEntry : NSObject {
    TSCHMultiDataLayerAnimationInfo *_animationInfo;
    NSMutableArray *_animations;
}

+ (id)entry;

- (id)init;
- (void).cxx_destruct;
- (id)animation;
- (void)addAnimation:(id)a0 animationInfo:(id)a1;

@end
