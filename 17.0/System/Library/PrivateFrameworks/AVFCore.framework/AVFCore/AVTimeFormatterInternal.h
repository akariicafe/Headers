@class NSString, NSNumberFormatter, NSLocale;

@interface AVTimeFormatterInternal : NSObject {
    long long style;
    double formatTemplate;
    BOOL isFullWidth;
    NSLocale *locale;
    BOOL isRightToLeft;
    NSString *cachedDateFormatterFormat;
    NSString *cachedDateFormatterTemplate;
    NSNumberFormatter *numberFormatterWithOneMinimumIntegerDigits;
    NSNumberFormatter *numberFormatterWithTwoMinimumIntegerDigits;
}

@end
