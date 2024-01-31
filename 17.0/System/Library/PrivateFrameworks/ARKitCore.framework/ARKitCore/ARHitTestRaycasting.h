@interface ARHitTestRaycasting : NSObject

+ (id)convertHitTestResult:(SEL)a0 resultType:(const struct CV3DHitTestResult { struct __CFUUID *x0; double x1[16]; int x2; int x3; int x4; struct __CFUUID *x5; } *)a1 origin:(unsigned long long)a2 referenceOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a3;
+ (unsigned int)fillPointCloud:(const struct { void /* unknown type, empty encoding */ x0[4]; } *)a0 cloudFeatures:(id)a1 vergenceAngleCosines:(const float *)a2 cloudWorldPoints:(id)a3 pointsWorld:(void *)a4 covariancesWorld:(void *)a5 wideToJasperTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a6;
+ (id)hitTestFromOrigin:(id)a0 resultType:(SEL)a1 origin:(id)a2 withDirection:(unsigned long long)a3 referenceOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a4;

@end
