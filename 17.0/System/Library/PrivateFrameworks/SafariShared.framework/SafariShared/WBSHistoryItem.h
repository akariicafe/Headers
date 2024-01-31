@class NSString, NSSet, NSURL, NSDate, NSMutableArray, WBSHistoryVisit;

@interface WBSHistoryItem : NSObject {
    WBSHistoryVisit *_lastVisit;
}

@property (readonly, nonatomic) unsigned long long dailyVisitCountScoresCountOnSynchronizationQueue;
@property (readonly, nonatomic) const int *dailyVisitCountScoresPtrOnSynchronizationQueue;
@property (readonly, nonatomic) unsigned long long weeklyVisitCountScoresCountOnSynchronizationQueue;
@property (readonly, nonatomic) const int *weeklyVisitCountScoresPtrOnSynchronizationQueue;
@property (nonatomic) long long databaseID;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *urlString;
@property (readonly, nonatomic) NSString *userVisibleURLString;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *stringForUserTypedDomainExpansion;
@property (readonly, nonatomic) WBSHistoryVisit *lastVisit;
@property (readonly, nonatomic) double lastVisitedTimeInterval;
@property (readonly, nonatomic) NSDate *lastVisitedDate;
@property (readonly, nonatomic) NSMutableArray *visits;
@property (nonatomic) long long statusCode;
@property (readonly, nonatomic) BOOL lastVisitWasHTTPNonGet;
@property (nonatomic) BOOL lastVisitWasFailure;
@property (readonly, nonatomic) WBSHistoryItem *lastVisitRedirectDestinationItem;
@property (readonly, nonatomic) WBSHistoryItem *endOfLastVisitRedirectChain;
@property (readonly, nonatomic) WBSHistoryVisit *lastVisitOnSynchronizationQueue;
@property (readonly, nonatomic) double lastVisitedTimeIntervalOnSynchronizationQueue;
@property (readonly, nonatomic) NSSet *visitsPendingWriteToDataStoreOnSynchronizationQueue;
@property (readonly, copy, nonatomic) NSString *userVisibleHostOrFallbackURLString;

+ (void)initialize;
+ (double)timeIntervalForDailyAndWeeklyVisitCountScores;
+ (id)synchronizationQueue;

- (void)clearVisitsPendingWriteToDataStoreFromSynchronizationQueue;
- (id)initWithURLString:(id)a0;
- (void)removeVisitsOnSynchronizationQueue:(id)a0 candidateLastVisit:(id)a1;
- (void)addExistingVisit:(id)a0;
- (void)dealloc;
- (void)_wasVisitedOnSynchronizationQueue:(id)a0;
- (void)_addVisitToPendingWriteSet:(id)a0;
- (void)updateLastVisitIfNil:(id)a0;
- (void)wasRedirectedFrom:(id)a0 to:(id)a1;
- (id)visitForTimeOnSynchronizationQueue:(double)a0;
- (void)wasVisited:(id)a0;
- (void)_addVisit:(id)a0;
- (id)initWithHistoryStreamedItem:(const struct _HistoryStreamedItem { struct { unsigned int x0; unsigned int x1; } x0; long long x1; long long x2; long long x3; long long x4; long long x5; char *x6; int *x7; unsigned long long x8; int *x9; unsigned long long x10; } *)a0;
- (id)_visitsPendingWriteSetCreatingIfNeeded:(BOOL)a0;
- (id)initWithSQLiteRow:(id)a0;
- (void)_addExistingVisit:(id)a0;
- (void)updateWithServiceItem:(id)a0;
- (void).cxx_destruct;
- (BOOL)_visitsPendingWriteSetContains:(id)a0;
- (void)visitWasModified:(id)a0;
- (void)removeVisits:(id)a0 candidateLastVisit:(id)a1;
- (void)mergeDataFromItem:(id)a0;
- (void)updateWithStreamedItem:(const struct _HistoryStreamedItem { struct { unsigned int x0; unsigned int x1; } x0; long long x1; long long x2; long long x3; long long x4; long long x5; char *x6; int *x7; unsigned long long x8; int *x9; unsigned long long x10; } *)a0;

@end
