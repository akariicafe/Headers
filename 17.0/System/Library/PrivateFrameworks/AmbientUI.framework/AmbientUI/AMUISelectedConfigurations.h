@class NSDictionary, NSMutableDictionary, NSDate;

@interface AMUISelectedConfigurations : NSObject

@property (retain, nonatomic) NSDate *lastUseDate;
@property (retain, nonatomic) NSDate *lastUpdateDate;
@property (copy, nonatomic) NSMutableDictionary *selections;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)lastUpdatedDateFromDictionaryRepresentation:(id)a0;
+ (id)lastUsedDateFromDictionaryRepresentation:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)lastSelectedConfigurationUUIDForProviderBundleIdentifier:(id)a0;
- (void)setLastSelectedConfigurationUUID:(id)a0 forProviderBundleIdentifier:(id)a1;

@end
