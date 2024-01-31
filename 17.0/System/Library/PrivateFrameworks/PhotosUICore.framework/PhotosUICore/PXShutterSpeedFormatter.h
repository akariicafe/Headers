@interface PXShutterSpeedFormatter : NSNumberFormatter

+ (id)stringForObjectValue:(id)a0;

- (id)stringForObjectValue:(id)a0;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 range:(inout struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 error:(out id *)a3;

@end
