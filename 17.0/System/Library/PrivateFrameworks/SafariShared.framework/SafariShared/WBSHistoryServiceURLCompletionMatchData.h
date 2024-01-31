@class NSArray, NSString;

@interface WBSHistoryServiceURLCompletionMatchData : NSObject <WBSURLCompletionMatchData> {
    struct unique_ptr<SafariShared::_HistoryStreamedMatchData, std::default_delete<SafariShared::_HistoryStreamedMatchData>> { struct __compressed_pair<SafariShared::_HistoryStreamedMatchData *, std::default_delete<SafariShared::_HistoryStreamedMatchData>> { struct _HistoryStreamedMatchData *__value_; } __ptr_; } _streamData;
    NSArray *_autocompleteTriggersAsStringArray;
}

@property (copy, nonatomic) NSArray *entries;
@property (nonatomic) double lastVisitedTimeInterval;
@property (readonly, nonatomic) BOOL lastVisitWasFailure;
@property (nonatomic) long long visitCount;
@property (nonatomic) long long visitCountScore;
@property (readonly, nonatomic) struct _HistoryStreamedMatchData { struct { unsigned int x0; unsigned int x1; } x0; double x1; void *x2; long long x3; int x4; long long x5; unsigned char x6; unsigned char x7; unsigned char x8; } *streamData;
@property (readonly, nonatomic) NSString *originalURLString;
@property (readonly, nonatomic) BOOL containsBookmark;
@property (readonly, nonatomic) BOOL visitWasClientError;
@property (readonly, nonatomic) BOOL shouldPreload;
@property (readonly, nonatomic) BOOL onlyContainsCloudTab;
@property (readonly, copy, nonatomic) NSString *cloudTabDeviceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setAutocompleteTriggers:(const void *)a0 length:(unsigned long long)a1;
- (void)enumeratePageTitlesAndUserVisibleURLsUsingBlock:(id /* block */)a0;
- (void)enumeratePageTitlesUsingBlock:(id /* block */)a0;
- (void)enumerateUserVisibleURLsUsingBlock:(id /* block */)a0;
- (id)initWithLastVisitWasFailure:(BOOL)a0 visitWasFromThisDevice:(BOOL)a1 visitWasClientError:(BOOL)a2;
- (id)initWithStreamData:(void *)a0 entries:(id)a1;
- (id)matchDataByMergingWithMatchData:(id)a0;
- (BOOL)matchesAutocompleteTrigger:(id)a0 isStrengthened:(BOOL)a1;
- (id)pageTitleAtIndex:(unsigned long long)a0;
- (id)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)a0;
- (float)topSitesScoreForPageTitleAtTime:(double)a0;
- (float)topSitesScoreForURLStringAtIndex:(unsigned long long)a0 atTime:(double)a1;
- (id)userVisibleURLStringAtIndex:(unsigned long long)a0;
- (id)userVisibleURLStringForPageTitleAtIndex:(unsigned long long)a0;
- (long long)visitCountScoreForPageTitleAtTime;
- (long long)visitCountScoreForURLStringAtIndex:(unsigned long long)a0;

@end
