@class NSString, IMBalloonPluginDataSource;

@interface IMTranscriptPluginBreadcrumbChatItem : IMTranscriptChatItem <IMPluginChatItemProtocol>

@property (readonly, nonatomic) NSString *rawStatusText;
@property (retain, nonatomic) IMBalloonPluginDataSource *dataSource;
@property (readonly, nonatomic) NSString *statusText;
@property (readonly, nonatomic) unsigned long long optionFlags;
@property (readonly, retain, nonatomic) NSString *type;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)configureStatusTextWithAccount:(id)a0;
- (id)_initWithItem:(id)a0 datasource:(id)a1 statusText:(id)a2 optionFlags:(unsigned long long)a3;

@end
