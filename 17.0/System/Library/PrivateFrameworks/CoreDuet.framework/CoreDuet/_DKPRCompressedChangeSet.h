@class NSData;

@interface _DKPRCompressedChangeSet : PBCodable <NSCopying> {
    unsigned long long _uncompressedLength;
    NSData *_compressedData;
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
