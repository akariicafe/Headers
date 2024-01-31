@class NSString, NSDate;

@interface HKMobileCountryCode : NSObject <HKCurrentCountryCode>

@property (readonly, copy, nonatomic) NSString *code;
@property (readonly, copy, nonatomic) NSString *ISOCode;
@property (readonly, nonatomic, getter=isOverridden) BOOL overridden;
@property (readonly, nonatomic) long long provenance;
@property (readonly, copy, nonatomic) NSDate *timestamp;

- (id)countryCode;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMobileCountryCode:(id)a0 ISOCode:(id)a1 isOverridden:(BOOL)a2;

@end
