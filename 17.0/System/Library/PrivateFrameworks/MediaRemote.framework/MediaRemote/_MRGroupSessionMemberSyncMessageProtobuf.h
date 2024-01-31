@class NSMutableArray;

@interface _MRGroupSessionMemberSyncMessageProtobuf : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *participants;
@property (retain, nonatomic) NSMutableArray *members;

+ (Class)participantsType;
+ (Class)membersType;

- (unsigned long long)hash;
- (void)addParticipants:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)participantsCount;
- (id)description;
- (void)clearParticipants;
- (void).cxx_destruct;
- (id)participantsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)membersAtIndex:(unsigned long long)a0;
- (void)addMembers:(id)a0;
- (void)clearMembers;
- (unsigned long long)membersCount;

@end
