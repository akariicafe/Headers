@class NSString, NTKComplication;

@interface NTKComplicationTombstone : NTKComplication {
    NSString *_uniqueIdentifier;
}

@property (readonly, nonatomic) NTKComplication *complication;

+ (BOOL)supportsSecureCoding;
+ (id)_allComplicationConfigurationsWithType:(unsigned long long)a0;
+ (id)tombstoneWithComplication:(id)a0;

- (id)appIdentifier;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_addKeysToJSONDictionary:(id)a0;
- (id)_generateUniqueIdentifier;
- (id)_migrateToFamily:(long long)a0 withAllowedComplications:(id)a1;
- (BOOL)supportsComplicationFamily:(long long)a0 forDevice:(id)a1;

@end
