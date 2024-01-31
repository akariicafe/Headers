@interface NTKDigitalTimeNoSecondsComplicationDataSource : NTKDigitalTimeComplicationDataSource

+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;
+ (BOOL)acceptsComplicationType:(unsigned long long)a0 forDevice:(id)a1;

- (id)_templateWithShouldDisplayIdealizeState:(BOOL)a0;

@end
