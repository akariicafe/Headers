@class HDCodableMedicationDoseEvent, NSString, HDCodableMedicationSchedule, HDCodableQuantity, NSMutableArray, HDCodableMedicationChartSeries;

@interface HDCodableMedicationShareableModel : PBCodable <NSCopying> {
    struct { unsigned char freeTextMedicationForm : 1; unsigned char freeTextMedicationLoggingUnit : 1; unsigned char latestSupportedVersion : 1; unsigned char minimumSupportedVersion : 1; unsigned char archived : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasConceptIdentifier;
@property (retain, nonatomic) NSString *conceptIdentifier;
@property (readonly, nonatomic) BOOL hasAudienceRawValue;
@property (retain, nonatomic) NSString *audienceRawValue;
@property (readonly, nonatomic) BOOL hasBaseUnitStrength;
@property (retain, nonatomic) NSString *baseUnitStrength;
@property (retain, nonatomic) NSMutableArray *ingredientComponentStrings;
@property (readonly, nonatomic) BOOL hasOntologyLoggingUnitSingular;
@property (retain, nonatomic) NSString *ontologyLoggingUnitSingular;
@property (readonly, nonatomic) BOOL hasOntologyLoggingUnitPlural;
@property (retain, nonatomic) NSString *ontologyLoggingUnitPlural;
@property (readonly, nonatomic) BOOL hasEduContentString;
@property (retain, nonatomic) NSString *eduContentString;
@property (readonly, nonatomic) BOOL hasSideEffectsContentString;
@property (retain, nonatomic) NSString *sideEffectsContentString;
@property (readonly, nonatomic) BOOL hasMedicationVisualizationConfigJSONString;
@property (retain, nonatomic) NSString *medicationVisualizationConfigJSONString;
@property (nonatomic) BOOL hasFreeTextMedicationForm;
@property (nonatomic) long long freeTextMedicationForm;
@property (nonatomic) BOOL hasFreeTextMedicationLoggingUnit;
@property (nonatomic) long long freeTextMedicationLoggingUnit;
@property (readonly, nonatomic) BOOL hasSchedule;
@property (retain, nonatomic) HDCodableMedicationSchedule *schedule;
@property (readonly, nonatomic) BOOL hasMostRecentDose;
@property (retain, nonatomic) HDCodableMedicationDoseEvent *mostRecentDose;
@property (retain, nonatomic) NSMutableArray *monthHighlights;
@property (nonatomic) BOOL hasArchived;
@property (nonatomic) BOOL archived;
@property (nonatomic) BOOL hasLatestSupportedVersion;
@property (nonatomic) long long latestSupportedVersion;
@property (nonatomic) BOOL hasMinimumSupportedVersion;
@property (nonatomic) long long minimumSupportedVersion;
@property (readonly, nonatomic) BOOL hasChartSeries;
@property (retain, nonatomic) HDCodableMedicationChartSeries *chartSeries;
@property (readonly, nonatomic) BOOL hasPreferredName;
@property (retain, nonatomic) NSString *preferredName;
@property (readonly, nonatomic) BOOL hasBrandName;
@property (retain, nonatomic) NSString *brandName;
@property (readonly, nonatomic) BOOL hasGenericName;
@property (retain, nonatomic) NSString *genericName;
@property (readonly, nonatomic) BOOL hasManufacturedDoseForm;
@property (retain, nonatomic) NSString *manufacturedDoseForm;
@property (readonly, nonatomic) BOOL hasBasicDoseForm;
@property (retain, nonatomic) NSString *basicDoseForm;
@property (readonly, nonatomic) BOOL hasFreeTextMedicationName;
@property (retain, nonatomic) NSString *freeTextMedicationName;
@property (readonly, nonatomic) BOOL hasFreeTextMedicationStrengthQuantity;
@property (retain, nonatomic) HDCodableQuantity *freeTextMedicationStrengthQuantity;
@property (readonly, nonatomic) BOOL hasPregnancyDescriptionContentString;
@property (retain, nonatomic) NSString *pregnancyDescriptionContentString;

+ (Class)ingredientComponentStringsType;
+ (Class)monthHighlightsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearIngredientComponentStrings;
- (unsigned long long)ingredientComponentStringsCount;
- (void)addIngredientComponentStrings:(id)a0;
- (void)addMonthHighlights:(id)a0;
- (void)clearMonthHighlights;
- (id)ingredientComponentStringsAtIndex:(unsigned long long)a0;
- (id)monthHighlightsAtIndex:(unsigned long long)a0;
- (unsigned long long)monthHighlightsCount;

@end
