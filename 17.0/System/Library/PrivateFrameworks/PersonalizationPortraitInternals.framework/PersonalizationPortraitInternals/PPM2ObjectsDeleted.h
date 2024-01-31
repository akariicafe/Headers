@interface PPM2ObjectsDeleted : PBCodable <NSCopying> {
    struct { unsigned char domain : 1; unsigned char donationSource : 1; unsigned char error : 1; } _has;
}

@property (nonatomic) BOOL hasDomain;
@property (nonatomic) int domain;
@property (nonatomic) BOOL hasError;
@property (nonatomic) BOOL error;
@property (nonatomic) BOOL hasDonationSource;
@property (nonatomic) int donationSource;

+ (id)options;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsDomain:(id)a0;
- (id)domainAsString:(int)a0;
- (int)StringAsDonationSource:(id)a0;
- (id)donationSourceAsString:(int)a0;

@end
