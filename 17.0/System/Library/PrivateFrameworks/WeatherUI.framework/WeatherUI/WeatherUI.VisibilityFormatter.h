@class NSLocale;

@interface WeatherUI.VisibilityFormatter : NSMeasurementFormatter

@property (nonatomic, copy) NSLocale *locale;

- (id)init;
- (id)initWithCoder:(id)a0;

@end
