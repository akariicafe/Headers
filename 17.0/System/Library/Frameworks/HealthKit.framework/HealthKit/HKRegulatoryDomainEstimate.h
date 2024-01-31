@class NSString, NSDate;

@interface HKRegulatoryDomainEstimate : NSObject <NSCopying, HKCurrentCountryCode>

@property (readonly, copy, nonatomic) NSString *ISOCode;
@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) long long provenance;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithISOCode:(id)a0 timestamp:(id)a1 provenance:(long long)a2;

@end
