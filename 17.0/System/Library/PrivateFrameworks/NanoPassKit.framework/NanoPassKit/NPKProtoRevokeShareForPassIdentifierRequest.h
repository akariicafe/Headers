@class NSString, NSData;

@interface NPKProtoRevokeShareForPassIdentifierRequest : PBRequest <NSCopying> {
    struct { unsigned char shouldCascade : 1; } _has;
}

@property (retain, nonatomic) NSString *passIdentifier;
@property (retain, nonatomic) NSData *shareData;
@property (nonatomic) BOOL hasShouldCascade;
@property (nonatomic) BOOL shouldCascade;

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

@end
