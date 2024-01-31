@class TSCH3DChartBarElementProperties;

@interface TSCH3DBarChartDefaultAppearance : NSObject <TSCH3DBarChartAppearance> {
    TSCH3DChartBarElementProperties *_properties;
}

+ (int)shapeType;
+ (struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x0; float x1; float x2; float x3; int x4; } x0; struct BarExtrusionSpineDetails { float x0; long long x1; long long x2; float x3; } x1; })defaultDetails;

- (void).cxx_destruct;
- (id)initWithProperties:(id)a0;
- (BOOL)isCircular;
- (float)chartMinZForScene:(id)a0;
- (float)depthForScene:(id)a0;
- (float)maxValueForSeries:(long long)a0;
- (float)signedValueForSeries:(id)a0 index:(void *)a1;

@end
