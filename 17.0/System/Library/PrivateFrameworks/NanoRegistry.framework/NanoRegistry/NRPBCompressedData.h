@class NSData;

@interface NRPBCompressedData : PBCodable <NSCopying> {
    NSData *_possiblyCompressedData;
    BOOL _compressed;
    struct { unsigned char compressed : 1; } _has;
}

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
