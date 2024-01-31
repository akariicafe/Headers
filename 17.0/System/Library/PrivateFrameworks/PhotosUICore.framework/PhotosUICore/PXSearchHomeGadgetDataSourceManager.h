@class PXTapToRadarGadgetProvider, NSArray, NSString, PXSearchZeroKeywordDataSource;

@interface PXSearchHomeGadgetDataSourceManager : PXGadgetDataSourceManager <PXSearchZeroKeywordChangeDelegate> {
    NSArray *_gadgetProviders;
}

@property (readonly, nonatomic) PXSearchZeroKeywordDataSource *zeroKeywordDataSource;
@property (retain, nonatomic) NSArray *zeroKeywordGadgetProviders;
@property (retain, nonatomic) PXTapToRadarGadgetProvider *tapToRadarProvider;
@property (nonatomic) long long filteringState;
@property (copy, nonatomic) id /* block */ zeroKeywordSectionsUpdateHandler;
@property (readonly, nonatomic) BOOL isExpectedToLoadNonEmptyDataSourceSoon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)gadgetProviders;
- (void)_waitForFirstDisplayTimedOut;
- (BOOL)_zeroKeywordDataSourceHasZeroKeywords;
- (void)didUpdateSections:(id)a0;
- (id)hiddenGadgetProviders;
- (void)ppt_prepareZeroKeywordRequest:(id /* block */)a0;
- (void)refreshData;
- (id)zeroKeywordSections;

@end
