@class NSString, WebBookmark;

@interface URLCompletionMatchBookmarkData : NSObject <WBSURLCompletionMatchData>

@property (readonly, nonatomic) WebBookmark *bookmark;
@property (readonly, nonatomic) NSString *originalURLString;
@property (readonly, nonatomic) BOOL containsBookmark;
@property (readonly, nonatomic) double lastVisitedTimeInterval;
@property (readonly, nonatomic) BOOL lastVisitWasFailure;
@property (readonly, nonatomic) BOOL visitWasClientError;
@property (readonly, nonatomic) BOOL shouldPreload;
@property (readonly, nonatomic) long long visitCount;
@property (readonly, nonatomic) long long visitCountScore;
@property (readonly, nonatomic) BOOL onlyContainsCloudTab;
@property (readonly, copy, nonatomic) NSString *cloudTabDeviceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBookmark:(id)a0;
- (id)_userVisibleURLString;
- (void)enumeratePageTitlesAndUserVisibleURLsUsingBlock:(id /* block */)a0;
- (void)enumeratePageTitlesUsingBlock:(id /* block */)a0;
- (void)enumerateUserVisibleURLsUsingBlock:(id /* block */)a0;
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
- (id)initWithBookmark:(id)a0 shouldPreload:(BOOL)a1;
- (float)_topSitesScoreAtTime:(double)a0;
- (id)initWithCloudTab:(id)a0 deviceName:(id)a1;

@end
