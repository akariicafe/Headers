@interface PKInkProperties : NSObject

+ (id)functionNames;
+ (id)arrayForBezierControlPoints:(struct { double x0; double x1; double x2; double x3; })a0;
+ (BOOL)bezierControlPoints:(struct { double x0; double x1; double x2; double x3; })a0 isEqual:(struct { double x0; double x1; double x2; double x3; })a1;
+ (id)blendModeNames;
+ (struct { double x0; double x1; double x2; double x3; })controlPointsForFunctionType:(unsigned long long)a0;
+ (double)defaultValueForInput:(unsigned long long)a0;
+ (unsigned long long)functionTypeForBezierControlPoints:(struct { double x0; double x1; double x2; double x3; })a0;
+ (unsigned long long)functionTypeForName:(id)a0;
+ (id)inkPropertyNames;
+ (id)inkTypeNames;
+ (id)inputMaskNames;
+ (id)inputNames;
+ (struct { double x0; double x1; })rangeForInkProperty:(unsigned long long)a0;
+ (struct { double x0; double x1; })rangeForInput:(unsigned long long)a0;

@end
