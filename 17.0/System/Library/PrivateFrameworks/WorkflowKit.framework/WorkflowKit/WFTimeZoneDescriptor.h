@class NSTimeZone, NSString, NSDictionary, NSNumber;

@interface WFTimeZoneDescriptor : MTLModel <MTLJSONSerializing, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, copy, nonatomic) NSString *localizedCityName;
@property (readonly, copy, nonatomic) NSNumber *alCityIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)timeZoneJSONTransformer;

@end
