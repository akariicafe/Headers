@class SYMessageHeader, NSString;

@interface SYBatchSyncStart : PBCodable <NSCopying> {
    struct { unsigned char estimatedChangeCount : 1; } _has;
}

@property (retain, nonatomic) SYMessageHeader *header;
@property (retain, nonatomic) NSString *syncID;
@property (nonatomic) BOOL hasEstimatedChangeCount;
@property (nonatomic) unsigned int estimatedChangeCount;

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
