@class NSLocale;

@interface WeatherUI.PrecipitationTotalFormatter : NSMeasurementFormatter {
    void /* unknown type, empty encoding */ trimLeadingZeros;
}

@property (nonatomic, copy) NSLocale *locale;

- (id)init;
- (id)initWithCoder:(id)a0;

@end
