@class NSString;

@interface PPM2AttributedFeedback : PBCodable <NSCopying> {
    struct { unsigned char algorithm : 1; unsigned char category : 1; unsigned char domain : 1; unsigned char source : 1; unsigned char type : 1; unsigned char isRemote : 1; } _has;
}

@property (nonatomic) BOOL hasSource;
@property (nonatomic) int source;
@property (nonatomic) BOOL hasAlgorithm;
@property (nonatomic) int algorithm;
@property (nonatomic) BOOL hasDomain;
@property (nonatomic) int domain;
@property (readonly, nonatomic) BOOL hasActiveTreatments;
@property (retain, nonatomic) NSString *activeTreatments;
@property (readonly, nonatomic) BOOL hasClientId;
@property (retain, nonatomic) NSString *clientId;
@property (readonly, nonatomic) BOOL hasMappingId;
@property (retain, nonatomic) NSString *mappingId;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasCategory;
@property (nonatomic) int category;
@property (readonly, nonatomic) BOOL hasDynamicCategory;
@property (retain, nonatomic) NSString *dynamicCategory;
@property (nonatomic) BOOL hasIsRemote;
@property (nonatomic) BOOL isRemote;

+ (id)options;

- (int)StringAsSource:(id)a0;
- (id)sourceAsString:(int)a0;
- (unsigned long long)hash;
- (id)typeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsType:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsCategory:(id)a0;
- (id)categoryAsString:(int)a0;
- (int)StringAsAlgorithm:(id)a0;
- (id)algorithmAsString:(int)a0;
- (int)StringAsDomain:(id)a0;
- (id)domainAsString:(int)a0;

@end
