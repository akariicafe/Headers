@class _ICLLReactionAction, _ICLLAddQueueItemsAction, _ICLLQueueSyncAction, _ICLLDisplayMessage, _ICLLMoveQueueItemAction, _ICLLPlaybackSyncAction, _ICLLClientInfoAction, _ICLLPlayNowQueueItemsAction, NSString, _ICLLCurrentItemTransitionAction, _ICLLParticipantChangeAction, _ICLLReplaceQueueItemsAction, _ICLLCurrentItemChangeAction, _ICLLServerNoticeAction, _ICLLRemoveQueueItemAction;

@interface _ICLLActionMessage : PBCodable <NSCopying> {
    long long _originatorId;
    int _action;
    _ICLLAddQueueItemsAction *_addItems;
    _ICLLClientInfoAction *_clientInfo;
    _ICLLCurrentItemChangeAction *_currentItemChange;
    _ICLLCurrentItemTransitionAction *_currentItemTransition;
    _ICLLDisplayMessage *_displayMessage;
    _ICLLMoveQueueItemAction *_moveItem;
    NSString *_originatorUUID;
    _ICLLParticipantChangeAction *_participantChange;
    _ICLLPlayNowQueueItemsAction *_playNowQueueItems;
    _ICLLPlaybackSyncAction *_playbackSync;
    _ICLLQueueSyncAction *_queueSync;
    _ICLLReactionAction *_reaction;
    _ICLLRemoveQueueItemAction *_removeItem;
    _ICLLReplaceQueueItemsAction *_replaceQueueItems;
    _ICLLServerNoticeAction *_serverNotice;
    BOOL _displayNotice;
    struct { unsigned char originatorId : 1; unsigned char action : 1; unsigned char displayNotice : 1; } _has;
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
