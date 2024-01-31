@class NSString, NSDate;

@interface _GEOCountryConfigurationInfo : NSObject {
    unsigned int _source;
    NSString *_countryCode;
    NSDate *_dateOfLastUpdate;
}

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
