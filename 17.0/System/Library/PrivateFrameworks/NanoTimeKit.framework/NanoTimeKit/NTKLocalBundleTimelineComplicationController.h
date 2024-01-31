@interface NTKLocalBundleTimelineComplicationController : NTKLocalTimelineComplicationController

+ (BOOL)_acceptsComplicationType:(unsigned long long)a0 family:(long long)a1 forDevice:(id)a2;
+ (BOOL)_acceptsComplicationType:(unsigned long long)a0 forDevice:(id)a1;
+ (BOOL)acceptsComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
+ (Class)complicationDataSourceClassForComplication:(id)a0 family:(long long)a1 device:(id)a2;
+ (Class)dataSourceFromComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;

@end
