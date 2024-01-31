@class NSString;

@interface BMPBNumDevicesPerTechnology : PBCodable <NSCopying> {
    struct { unsigned char number : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTechnologyString;
@property (retain, nonatomic) NSString *technologyString;
@property (nonatomic) BOOL hasNumber;
@property (nonatomic) int number;

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
