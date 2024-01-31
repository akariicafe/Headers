@class NSString, HDCodableSample;

@interface HDCodableStateOfMind : PBCodable <HDDecoding, NSCopying> {
    struct { long long *list; unsigned long long count; unsigned long long size; } _domains;
    struct { long long *list; unsigned long long count; unsigned long long size; } _labels;
    struct { unsigned char reflectiveInterval : 1; unsigned char valence : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic) BOOL hasReflectiveInterval;
@property (nonatomic) long long reflectiveInterval;
@property (nonatomic) BOOL hasValence;
@property (nonatomic) double valence;
@property (readonly, nonatomic) unsigned long long labelsCount;
@property (readonly, nonatomic) long long *labels;
@property (readonly, nonatomic) unsigned long long domainsCount;
@property (readonly, nonatomic) long long *domains;
@property (readonly, nonatomic) BOOL hasContext;
@property (retain, nonatomic) NSString *context;

- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearLabels;
- (long long)domainsAtIndex:(unsigned long long)a0;
- (void)addDomains:(long long)a0;
- (void)addLabels:(long long)a0;
- (BOOL)applyToObject:(id)a0;
- (void)clearDomains;
- (long long)labelsAtIndex:(unsigned long long)a0;
- (void)setDomains:(long long *)a0 count:(unsigned long long)a1;
- (void)setLabels:(long long *)a0 count:(unsigned long long)a1;

@end
