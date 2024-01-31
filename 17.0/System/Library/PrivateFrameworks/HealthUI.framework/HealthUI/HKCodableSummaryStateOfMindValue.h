@interface HKCodableSummaryStateOfMindValue : PBCodable <NSCopying> {
    struct { long long *list; unsigned long long count; unsigned long long size; } _domains;
    struct { long long *list; unsigned long long count; unsigned long long size; } _labels;
    struct APPLE_HKCodableSummaryStateOfMindValue_1 { unsigned char dateData : 1; unsigned char reflectiveInterval : 1; unsigned char valence : 1; } _has;
}

@property (nonatomic) BOOL hasDateData;
@property (nonatomic) double dateData;
@property (nonatomic) BOOL hasReflectiveInterval;
@property (nonatomic) long long reflectiveInterval;
@property (nonatomic) BOOL hasValence;
@property (nonatomic) double valence;
@property (readonly, nonatomic) unsigned long long labelsCount;
@property (readonly, nonatomic) long long *labels;
@property (readonly, nonatomic) unsigned long long domainsCount;
@property (readonly, nonatomic) long long *domains;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearLabels;
- (long long)domainsAtIndex:(unsigned long long)a0;
- (void)addDomains:(long long)a0;
- (void)addLabels:(long long)a0;
- (void)clearDomains;
- (long long)labelsAtIndex:(unsigned long long)a0;
- (void)setDomains:(long long *)a0 count:(unsigned long long)a1;
- (void)setLabels:(long long *)a0 count:(unsigned long long)a1;

@end
