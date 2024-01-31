@class NSString;

@interface NPKProtoPassAssociatedDataRequest : PBRequest <NSCopying> {
    struct { unsigned char passRequestedData : 1; } _has;
}

@property (retain, nonatomic) NSString *passUniqueID;
@property (nonatomic) BOOL hasPassRequestedData;
@property (nonatomic) unsigned long long passRequestedData;

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
