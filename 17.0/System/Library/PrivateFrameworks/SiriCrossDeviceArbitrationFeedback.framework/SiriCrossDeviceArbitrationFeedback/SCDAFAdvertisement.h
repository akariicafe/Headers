@class NSString, NSNumber;

@interface SCDAFAdvertisement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long confidence;
@property (nonatomic) unsigned long long deviceClass;
@property (retain, nonatomic) NSNumber *advertHash;
@property (nonatomic) unsigned long long productType;
@property (nonatomic) unsigned long long tieBreaker;
@property (nonatomic) unsigned long long goodnessScore;
@property (nonatomic) unsigned long long deviceGroup;

+ (id)advertisementsArrayWithDictionaryRepresentation:(id)a0;
+ (id)arrayDictionaryRepresentation:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (void)setDeviceGroupWithNumber:(id)a0;

@end
