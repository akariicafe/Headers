@class NSString;

@interface MXRequestMitigated : PBCodable <NSCopying> {
    struct { unsigned char mitigationType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) NSString *requestId;
@property (nonatomic) BOOL hasMitigationType;
@property (nonatomic) int mitigationType;

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
- (int)StringAsMitigationType:(id)a0;
- (id)mitigationTypeAsString:(int)a0;

@end
