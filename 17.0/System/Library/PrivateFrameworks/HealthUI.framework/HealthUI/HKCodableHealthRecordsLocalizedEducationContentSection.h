@class NSString, NSMutableArray;

@interface HKCodableHealthRecordsLocalizedEducationContentSection : PBCodable <NSCopying> {
    struct APPLE_HKCodableHealthRecordsLocalizedEducationContentSection_1 { unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) long long type;
@property (readonly, nonatomic) BOOL hasSectionLocalizedContent;
@property (retain, nonatomic) NSString *sectionLocalizedContent;
@property (readonly, nonatomic) BOOL hasSectionLocaleIdentifier;
@property (retain, nonatomic) NSString *sectionLocaleIdentifier;
@property (retain, nonatomic) NSMutableArray *sectionValidRegionCodes;
@property (retain, nonatomic) NSMutableArray *sectionAttributions;
@property (retain, nonatomic) NSMutableArray *sectionCitations;

+ (Class)sectionAttributionsType;
+ (Class)sectionCitationsType;
+ (Class)sectionValidRegionCodesType;

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
- (void)addSectionAttributions:(id)a0;
- (void)addSectionCitations:(id)a0;
- (void)addSectionValidRegionCodes:(id)a0;
- (unsigned long long)sectionAttributionsCount;
- (unsigned long long)sectionCitationsCount;
- (unsigned long long)sectionValidRegionCodesCount;
- (id)sectionValidRegionCodesAtIndex:(unsigned long long)a0;
- (void)clearSectionAttributions;
- (void)clearSectionCitations;
- (void)clearSectionValidRegionCodes;
- (id)sectionAttributionsAtIndex:(unsigned long long)a0;
- (id)sectionCitationsAtIndex:(unsigned long long)a0;

@end
