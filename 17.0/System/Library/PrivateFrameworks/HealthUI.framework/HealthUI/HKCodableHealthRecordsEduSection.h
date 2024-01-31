@class NSString, NSMutableArray;

@interface HKCodableHealthRecordsEduSection : PBCodable <NSCopying> {
    struct APPLE_HKCodableHealthRecordsEduSection_1 { unsigned char sectionType : 1; } _has;
}

@property (nonatomic) BOOL hasSectionType;
@property (nonatomic) long long sectionType;
@property (readonly, nonatomic) BOOL hasSectionLocalizedContent;
@property (retain, nonatomic) NSString *sectionLocalizedContent;
@property (retain, nonatomic) NSMutableArray *sectionLocaleIdentifiers;
@property (retain, nonatomic) NSMutableArray *sectionValidRegionCodes;
@property (retain, nonatomic) NSMutableArray *sectionAttributions;
@property (retain, nonatomic) NSMutableArray *sectionCitations;

+ (Class)sectionAttributionsType;
+ (Class)sectionCitationsType;
+ (Class)sectionLocaleIdentifiersType;
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
- (void)addSectionLocaleIdentifiers:(id)a0;
- (void)clearSectionAttributions;
- (void)clearSectionCitations;
- (void)clearSectionLocaleIdentifiers;
- (void)clearSectionValidRegionCodes;
- (id)sectionAttributionsAtIndex:(unsigned long long)a0;
- (id)sectionCitationsAtIndex:(unsigned long long)a0;
- (id)sectionLocaleIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)sectionLocaleIdentifiersCount;

@end
