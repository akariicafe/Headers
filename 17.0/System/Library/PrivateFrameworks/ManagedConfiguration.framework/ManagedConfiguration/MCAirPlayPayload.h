@class NSArray;

@interface MCAirPlayPayload : MCPayload

@property (retain, nonatomic) NSArray *titlesAndDescriptions;
@property (retain, nonatomic) NSArray *allowListDestinations;
@property (retain, nonatomic) NSArray *destinationsWithPasswords;

+ (id)localizedSingularForm;
+ (id)typeStrings;
+ (id)localizedPluralForm;

- (id)verboseDescription;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;

@end
