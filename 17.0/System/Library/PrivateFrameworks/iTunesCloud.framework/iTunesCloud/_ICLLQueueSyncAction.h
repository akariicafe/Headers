@class _ICLLQueue, _ICLLPlaybackControlSettings, NSString;

@interface _ICLLQueueSyncAction : PBCodable <NSCopying> {
    _ICLLPlaybackControlSettings *_controlSettings;
    _ICLLQueue *_queue;
    NSString *_queueContext;
    int _revision;
    struct { unsigned char revision : 1; } _has;
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
