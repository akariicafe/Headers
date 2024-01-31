@class NSString, MKMapItem, GEOSearchCategory;

@interface MKSiriInteraction : NSObject

@property (class, retain, nonatomic) NSString *navigationHash;

@property (nonatomic) int action;
@property (nonatomic) int target;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (nonatomic) int resultIndex;
@property (retain, nonatomic) GEOSearchCategory *searchCategory;
@property (retain, nonatomic) NSString *searchQueryString;

+ (id)_siriIntentMurmurHash:(id)a0;
+ (void)generateHashForNavigationURL:(id)a0;
+ (void)removeRecentIntentWithPlacemark:(id)a0;
+ (void)removeRecentIntentWithSearchText:(id)a0;

- (id)_whiteListedSiriListActionAsString:(int)a0;
- (id)_siriIntentHash:(id)a0;
- (void)donateIfWanted;
- (void)_navTimerFired:(id)a0;
- (id)_whiteListedBrowseCategoryActionAsString:(int)a0;
- (BOOL)_isIntentDeletable;
- (id)initWithGEOUIAction:(int)a0 target:(int)a1 mapItem:(id)a2 resultIndex:(int)a3 searchCategory:(id)a4 searchQueryString:(id)a5;
- (void).cxx_destruct;
- (id)_whiteListedSearchActionAsString:(int)a0;
- (BOOL)_isStartNavigationAction:(int)a0;
- (BOOL)_isValidTargetForNavUI:(int)a0;
- (id)intentIfWanted;
- (id)_whiteListedNavigationActionAsString:(int)a0;
- (id)_whiteListedPlaceCardActionAsString:(int)a0;

@end
