@class IMBalloonPluginDataSource;

@interface IMTranscriptPluginStatusChatItem : IMMessageStatusChatItem

@property (readonly, nonatomic) IMBalloonPluginDataSource *dataSource;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithItem:(id)a0 dataSource:(id)a1 statusItemSequenceNumber:(unsigned long long)a2;
- (id)copyWithStatusItemSequenceNumber:(unsigned long long)a0;

@end
