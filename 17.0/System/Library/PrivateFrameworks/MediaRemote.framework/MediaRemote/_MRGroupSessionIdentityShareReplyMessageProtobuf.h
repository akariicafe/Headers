@class _MRGroupSessionParticipantProtobuf;

@interface _MRGroupSessionIdentityShareReplyMessageProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasLocalParticipant;
@property (retain, nonatomic) _MRGroupSessionParticipantProtobuf *localParticipant;
@property (readonly, nonatomic) BOOL hasLeaderParticipant;
@property (retain, nonatomic) _MRGroupSessionParticipantProtobuf *leaderParticipant;

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
