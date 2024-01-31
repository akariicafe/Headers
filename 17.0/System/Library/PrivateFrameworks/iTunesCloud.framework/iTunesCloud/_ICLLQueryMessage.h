@class _ICLLQueueQuery, _ICLLPlaybackControlSettingsQuery, _ICLLParticipantQuery, _ICLLPlaybackSyncStateQuery;

@interface _ICLLQueryMessage : PBCodable <NSCopying> {
    _ICLLParticipantQuery *_participant;
    _ICLLPlaybackControlSettingsQuery *_playbackControlSettings;
    _ICLLPlaybackSyncStateQuery *_playbackSyncState;
    int _query;
    _ICLLQueueQuery *_queue;
    struct { unsigned char query : 1; } _has;
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
