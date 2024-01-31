@class IMBalloonPluginDataSource, IMPluginPayload, NSString;

@interface IMTranscriptPluginChatItem : IMMessagePartChatItem <IMPluginChatItemProtocol>

@property (retain, nonatomic) IMBalloonPluginDataSource *dataSource;
@property (retain, nonatomic) IMPluginPayload *initialPayload;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL hasSetIsLastChatItemOfPluginType;
@property (readonly, nonatomic) BOOL isDataSourceInitialized;
@property (readonly, nonatomic) NSString *pluginSessionGUID;
@property (readonly, nonatomic) unsigned long long playbackType;
@property (nonatomic, setter=setLastChatItemOfPluginType:) BOOL isLastChatItemOfPluginType;
@property (readonly, nonatomic) BOOL parentChatHasKnownParticipants;
@property (readonly, nonatomic) BOOL isPlayed;
@property (readonly, nonatomic) BOOL isSaved;
@property (readonly, retain, nonatomic) NSString *type;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned char)contentType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)messageSummaryInfo;
- (BOOL)wantsAutoPlayback;
- (id)_initWithItem:(id)a0 initialPayload:(id)a1 index:(long long)a2 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 parentChatHasKnownParticipants:(BOOL)a4;
- (id)replyContextPreviewChatItemForReply:(id)a0 chatContext:(id)a1;

@end
