@class NSString, NSMutableArray;

@interface _ICLLPlaybackSyncStateQuery : PBCodable <NSCopying> {
    NSString *_currentItemId;
    NSString *_initialAVSyncStartItemId;
    NSMutableArray *_participantStates;
    NSMutableArray *_transportControlStates;
    BOOL _initialAVSyncInitiator;
    struct { unsigned char initialAVSyncInitiator : 1; } _has;
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
