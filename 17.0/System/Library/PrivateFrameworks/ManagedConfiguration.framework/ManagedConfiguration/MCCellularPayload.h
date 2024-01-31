@class NSArray, MCAPNConfiguration;

@interface MCCellularPayload : MCPayload

@property (retain, nonatomic) MCAPNConfiguration *attachAPN;
@property (retain, nonatomic) NSArray *APNs;

+ (id)localizedSingularForm;
+ (id)typeStrings;
+ (id)localizedPluralForm;

- (id)verboseDescription;
- (void).cxx_destruct;
- (id)APNsDescription;
- (id)APNConfigurationDescription;
- (id)APNsLabel;
- (id)attachAPNConfigurationLabel;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)installationWarnings;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;

@end
