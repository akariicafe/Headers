@class NSMutableArray;

@interface NPKProtoListSubcredentialInvitationsResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *subcredentialInvitationsDatas;

+ (Class)subcredentialInvitationsDataType;

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
- (void)addSubcredentialInvitationsData:(id)a0;
- (void)clearSubcredentialInvitationsDatas;
- (id)subcredentialInvitationsDataAtIndex:(unsigned long long)a0;
- (unsigned long long)subcredentialInvitationsDatasCount;

@end
