@class NSString, NSNumber;

@interface AXAuditDeviceSetting : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *currentValueNumber;
@property (nonatomic) BOOL enabled;
@property (nonatomic) unsigned long long settingType;
@property (nonatomic) long long sliderTickMarks;

+ (id)allKnownIdentifiers;
+ (id)createWithIdentifier:(id)a0 currentValue:(id)a1 settingType:(unsigned long long)a2;
+ (void)registerTransportableObjectWithManager:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
