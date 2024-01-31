@class FCResourceRecordSource, FCTagRecordSource, FCPuzzleRecordSource, FCIssueListRecordSource, NSString, FCTagListRecordSource, FCArticleRecordSource, FCPurchaseLookupRecordSource, FCPuzzleTypeRecordSource, FCCKContentDatabase, FCAVAssetDownloadManager, NSArray, FCFeedDatabase, FCSportsEventRecordSource, FCArticleListRecordSource, FCIssueRecordSource, FCAudioConfigRecordSource, FCChannelMembershipController, FCFeedPrewarmer, FCWidgetSectionConfigRecordSource, FCForYouConfigRecordSource;
@protocol FCAssetKeyManagerType, FCAssetKeyCacheType, FCAVAssetFactoryType, FCAVAssetKeyCacheType, FCAVAssetCacheType;

@interface FCContentContextInternal : NSObject <FCContentContextInternal>

@property (retain, nonatomic) FCArticleRecordSource *articleRecordSource;
@property (retain, nonatomic) FCTagRecordSource *tagRecordSource;
@property (retain, nonatomic) FCSportsEventRecordSource *sportsEventRecordSource;
@property (retain, nonatomic) FCTagListRecordSource *tagListRecordSource;
@property (retain, nonatomic) FCChannelMembershipController *channelMembershipController;
@property (retain, nonatomic) FCResourceRecordSource *resourceRecordSource;
@property (retain, nonatomic) FCArticleListRecordSource *articleListRecordSource;
@property (retain, nonatomic) FCPurchaseLookupRecordSource *purchaseLookupRecordSource;
@property (retain, nonatomic) FCForYouConfigRecordSource *forYouConfigRecordSource;
@property (retain, nonatomic) FCWidgetSectionConfigRecordSource *widgetSectionConfigRecordSource;
@property (retain, nonatomic) FCIssueRecordSource *issueRecordSource;
@property (retain, nonatomic) FCIssueListRecordSource *issueListRecordSource;
@property (retain, nonatomic) FCAudioConfigRecordSource *audioConfigRecordSource;
@property (retain, nonatomic) FCPuzzleRecordSource *puzzleRecordSource;
@property (retain, nonatomic) FCPuzzleTypeRecordSource *puzzleTypeRecordSource;
@property (retain) FCFeedDatabase *feedDatabase;
@property (retain, nonatomic) FCCKContentDatabase *contentDatabase;
@property (retain, nonatomic) id<FCAssetKeyCacheType> assetKeyCache;
@property (retain, nonatomic) id<FCAssetKeyManagerType> assetKeyManager;
@property (retain, nonatomic) id<FCAVAssetFactoryType> avAssetFactory;
@property (retain, nonatomic) id<FCAVAssetCacheType> avAssetCache;
@property (retain, nonatomic) id<FCAVAssetKeyCacheType> avAssetKeyCache;
@property (retain, nonatomic) FCAVAssetDownloadManager *avAssetDownloadManager;
@property (retain, nonatomic) FCFeedPrewarmer *feedPrewarmer;
@property (readonly, nonatomic) NSArray *recordSources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)a0;
- (void).cxx_destruct;

@end
