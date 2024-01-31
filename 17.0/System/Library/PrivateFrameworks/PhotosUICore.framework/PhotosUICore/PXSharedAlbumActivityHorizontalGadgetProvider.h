@class PXFeedSectionInfosManager, NSDate, PXInboxAggregateDataSourceManager;

@interface PXSharedAlbumActivityHorizontalGadgetProvider : PXGadgetProvider <PXFeedSectionInfosManagerDelegate, PXForYouRankable>

@property (retain, nonatomic) PXFeedSectionInfosManager *feedSectionInfosManager;
@property (retain, nonatomic) PXInboxAggregateDataSourceManager *inboxDataSourceManager;
@property (readonly, nonatomic) NSDate *mostRecentContentDate;
@property (readonly, nonatomic) long long forYouContentIdentifier;

- (id)init;
- (void)dealloc;
- (void)_accountStoreDidChange:(id)a0;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (void).cxx_destruct;
- (void)_updateGadgets;
- (BOOL)_areSharedStreamsEnabled;
- (long long)_countOfSectionInfosToDisplay:(unsigned long long)a0;
- (id)_currentGadgetOfType:(unsigned long long)a0;
- (id)_gadgetTitle;
- (void)_navigateToSharedAlbumActivityFeed:(id)a0;
- (void)_updateGadgetTitle;
- (void)feedSectionInfosManager:(id)a0 sectionInfosDidChange:(id)a1;

@end
