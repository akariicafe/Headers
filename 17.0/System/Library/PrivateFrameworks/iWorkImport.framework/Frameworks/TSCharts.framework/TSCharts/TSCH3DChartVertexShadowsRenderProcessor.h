@class NSArray;

@interface TSCH3DChartVertexShadowsRenderProcessor : TSCH3DRetargetRenderProcessor {
    NSArray *_shadowsEffects;
}

- (id)init;
- (void)submit:(id)a0;
- (void).cxx_destruct;
- (long long)attribute:(id)a0 resource:(id)a1 specs:(const struct AttributeSpecs { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *)a2;
- (id)p_effects;
- (long long)texture:(id)a0 resource:(id)a1 attributes:(const void *)a2;

@end
