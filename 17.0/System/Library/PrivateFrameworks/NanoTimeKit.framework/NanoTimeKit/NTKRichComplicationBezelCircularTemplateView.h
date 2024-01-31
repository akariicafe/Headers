@interface NTKRichComplicationBezelCircularTemplateView : NTKRichComplicationBezelBaseCircularView

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (id)_bezelTextProviderFromTemplate:(id)a0;
- (id)_circularTemplateFromTemplate:(id)a0;
- (Class)_circularViewClassFromFromTemplate:(id)a0;

@end
