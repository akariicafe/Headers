@interface PVNoneEffect : PVEffect

- (struct CGSize { double x0; double x1; })outputSize;
- (struct HGRef<HGNode> { struct HGNode *x0; })hgNodeForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 inputs:(const void *)a1 renderer:(const void *)a2 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a3;
- (BOOL)loadEffect;

@end
