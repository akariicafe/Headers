@class PVEffect;

@interface PVInstructionGraphOrientationEffectNode : PVInstructionGraphEffectNode {
    BOOL _bypassOutOfRangeEffects;
    PVEffect *_effect;
}

+ (id)newOrientationEffectNodeWithInputs:(id)a0 inputIDs:(id)a1 effect:(id)a2;

- (void)setEffect:(id)a0;
- (id)effect;
- (void).cxx_destruct;
- (struct PCRect<double> { double x0; double x1; double x2; double x3; })inputSizeForPVEffect:(id)a0 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a1;
- (BOOL)bypassOutOfRangeEffects;
- (id)dotTreeLabel:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a0;
- (struct HGRef<HGNode> { struct HGNode *x0; })internalHGNodeForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 trackInputs:(const void *)a1 renderer:(const void *)a2 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a3;
- (void)setBypassOutOfRangeEffects:(BOOL)a0;

@end
