@class NSString;

@interface HKFixedCurrentCountryCodeProvider : NSObject <HKCurrentCountryCodeProvider> {
    NSString *_countryCode;
}

- (id)initWithCountryCode:(id)a0;
- (void).cxx_destruct;
- (id)currentCountryCode;

@end
