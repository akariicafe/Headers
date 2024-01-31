@class NSMutableArray;

@interface NPKProtoStatusForShareableCredentialsRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *shareableCredentialsDatas;

+ (Class)shareableCredentialsDataType;

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
- (void)addShareableCredentialsData:(id)a0;
- (void)clearShareableCredentialsDatas;
- (id)shareableCredentialsDataAtIndex:(unsigned long long)a0;
- (unsigned long long)shareableCredentialsDatasCount;

@end
