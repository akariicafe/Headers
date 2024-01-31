@class NSData, NSMutableArray;

@interface NPKProtoStatusForShareableCredentialsResponse : PBCodable <NSCopying>

@property (nonatomic) int aggregateStatus;
@property (retain, nonatomic) NSMutableArray *updatedCredentialsDatas;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSData *errorData;

+ (Class)updatedCredentialsDataType;

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
- (int)StringAsAggregateStatus:(id)a0;
- (void)addUpdatedCredentialsData:(id)a0;
- (id)aggregateStatusAsString:(int)a0;
- (void)clearUpdatedCredentialsDatas;
- (id)updatedCredentialsDataAtIndex:(unsigned long long)a0;
- (unsigned long long)updatedCredentialsDatasCount;

@end
