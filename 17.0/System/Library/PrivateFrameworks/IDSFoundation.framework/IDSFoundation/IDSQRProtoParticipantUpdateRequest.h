@class IDSQRProtoMaterialInfo;

@interface IDSQRProtoParticipantUpdateRequest : PBRequest <NSCopying> {
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _participantIdLists;
    struct { unsigned char sessionStateCounter : 1; } _has;
}

@property (nonatomic) unsigned int operationFlags;
@property (readonly, nonatomic) unsigned long long participantIdListsCount;
@property (readonly, nonatomic) unsigned long long *participantIdLists;
@property (readonly, nonatomic) BOOL hasContextBlob;
@property (retain, nonatomic) IDSQRProtoMaterialInfo *contextBlob;
@property (nonatomic) BOOL hasSessionStateCounter;
@property (nonatomic) unsigned int sessionStateCounter;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addParticipantIdList:(unsigned long long)a0;
- (void)clearParticipantIdLists;
- (unsigned long long)participantIdListAtIndex:(unsigned long long)a0;
- (void)setParticipantIdLists:(unsigned long long *)a0 count:(unsigned long long)a1;

@end
