@class NSData;

@interface NSSUpdateBetaEnrollmentStatusReqMsg : PBCodable <NSCopying> {
    struct { unsigned char unenroll : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBetaProgramInfo;
@property (retain, nonatomic) NSData *betaProgramInfo;
@property (nonatomic) BOOL hasUnenroll;
@property (nonatomic) BOOL unenroll;

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
