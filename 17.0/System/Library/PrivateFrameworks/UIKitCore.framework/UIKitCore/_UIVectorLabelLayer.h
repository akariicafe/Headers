@class _UIVectorTextLayout, NSString, NSArray;

@interface _UIVectorLabelLayer : CALayer <CALayerDelegate, CAAnimationDelegate> {
    NSArray *_currentLayers;
    _UIVectorTextLayout *_currentTextLayout;
}

@property (copy, nonatomic) _UIVectorTextLayout *textLayout;
@property (nonatomic) unsigned long long maxRenderedMoveDistance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)willChangeValueForKey:(id)a0;
- (void).cxx_destruct;
- (void)didChangeValueForKey:(id)a0;
- (void)_applyTextLayoutChangeFrom:(id)a0 to:(id)a1;
- (void)_cleanupUnusedLayers;
- (id)_findSimilarLayer:(id)a0 inLayers:(id)a1;
- (BOOL)_isPathCompatible:(struct CGPath { } *)a0 with:(struct CGPath { } *)a1;
- (id)_layersForTextLayout:(id)a0;
- (void)_transitionWithSetup:(id /* block */)a0 target:(id /* block */)a1;

@end
