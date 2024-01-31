@class TSCH3DChartElementProperties;

@interface TSCH3DChartMixinElementProperties : TSCH3DChartElementProperties {
    TSCH3DChartElementProperties *_original;
}

+ (id)propertiesWithProperties:(id)a0;

- (id)labels;
- (void).cxx_destruct;
- (id)initWithProperties:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyChartElementsTransform:(void *)a0;
- (BOOL)applyElementTransform:(void *)a0 series:(id)a1 index:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a2 propertyAccessor:(id)a3;
- (id)boundsGeometryForSeries:(id)a0 index:(void *)a1;
- (id)chartTransform;
- (float)elementTransformDepthFromPropertyAccessor:(id)a0;
- (id)elementsTransform;
- (id)geometryForSeries:(id)a0 index:(void *)a1;
- (id)getPropertiesOfType:(Class)a0;
- (id)normalsForSeries:(id)a0 index:(void *)a1;
- (id)renderingLightingModelForSeries:(id)a0;
- (id)texcoordsForSeries:(id)a0 index:(void *)a1;

@end
