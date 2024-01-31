@class PKFamilyMemberCollection, NSString, PKAccountUserCollection, NSCalendar, NSArray, PKContactAvatarManager, NSMutableDictionary, PKTransactionSourceCollection, UIView, PKAccount, PKPaymentPass, PKSpendingSummaryFetcher;
@protocol PKSpendingSummaryViewControllerDelegate, PKHorizontalScrollingFooterViewProtocol;

@interface PKSpendingSummaryViewController : PKHorizontalScrollingViewController <PKSpendingSummaryFetcherObserver, PKSpendingSingleSummaryViewControllerDelegate, PKHorizontalScrollingViewControllerDataSource> {
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKFamilyMemberCollection *_familyCollection;
    PKAccount *_account;
    PKAccountUserCollection *_accountUserCollection;
    PKPaymentPass *_pass;
    PKSpendingSummaryFetcher *_summaryFetcher;
    PKContactAvatarManager *_avatarManager;
    NSCalendar *_currentCalendar;
    NSArray *_weeks;
    NSArray *_months;
    NSArray *_years;
    NSString *_navTitle;
    BOOL _transitioningMode;
    NSArray *_currentDataSet;
    unsigned long long _currentSummaryType;
    unsigned long long _displayType;
    NSArray *_currentMonthTransactions;
    long long _startingIndex;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lockUpdate;
    NSMutableDictionary *_pendingUpdates;
    NSArray *_emptyViewControllers;
    UIView<PKHorizontalScrollingFooterViewProtocol> *_footerView;
}

@property (weak, nonatomic) id<PKSpendingSummaryViewControllerDelegate> delegate;
@property (nonatomic) unsigned long long categorization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)footerView;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)invalidatedSpendingSummaryOfType:(unsigned long long)a0 startingWithDate:(id)a1;
- (void)invalidatedSummariesAvailable;
- (long long)startingIndex;
- (void)_changeModeTo:(unsigned long long)a0;
- (unsigned long long)_newDataSetIndexAfterTransitionFromMode:(unsigned long long)a0 toMode:(unsigned long long)a1;
- (void)_reportTappedButtonWithTag:(id)a0;
- (void)_updateBackTitle;
- (id)cachedDataAtIndex:(long long)a0;
- (void)didDequeueViewController:(id)a0;
- (void)didMoveToPrimaryIndex:(long long)a0;
- (id)emptyViewControllers;
- (void)fetchDataAtIndex:(long long)a0 completion:(id /* block */)a1;
- (double)footerViewContentHeight;
- (id)initWithTransactionSourceCollection:(id)a0 familyCollection:(id)a1 avatarManager:(id)a2 account:(id)a3 accountUserCollection:(id)a4 physicalCards:(id)a5 fetcher:(id)a6 weeks:(id)a7 months:(id)a8 years:(id)a9 type:(unsigned long long)a10 unit:(unsigned long long)a11 currentMonthTransactions:(id)a12 pendingPayments:(id)a13 upcomingScheduledPayments:(id)a14 dispayType:(unsigned long long)a15;
- (id)loadingDataObjectWithCurrentData:(id)a0 index:(long long)a1 swap:(BOOL)a2;
- (id)pkNavigationController;
- (void)prefetchDataIfNecessary;
- (void)spendingSingleSummaryViewController:(id)a0 changedSelection:(unsigned long long)a1;

@end
