@class _ICLLParticipantQuery;

@interface _ICLLParticipantChangeAction : PBCodable <NSCopying> {
    long long _participantId;
    _ICLLParticipantQuery *_participantQuery;
    int _status;
    struct { unsigned char participantId : 1; unsigned char status : 1; } _has;
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
