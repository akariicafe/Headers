@class NSMutableArray;

@interface MCAirPrintPayload : MCPayload

@property (retain, nonatomic) NSMutableArray *ippAddresses;
@property (nonatomic) unsigned long long airPrintCount;

+ (id)localizedSingularForm;
+ (id)typeStrings;
+ (id)localizedPluralForm;

- (id)verboseDescription;
- (void).cxx_destruct;
- (id)restrictions;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;

@end
