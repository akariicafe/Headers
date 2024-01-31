@class NSString, NSMutableArray, MTTimerDuration;
@protocol MTPersistence, MTDurationUpdateDelegate;

@interface MTTimerDurationManager : NSObject <MTTimerObserver>

@property (retain, nonatomic) id<MTPersistence> persistence;
@property (retain, nonatomic) NSMutableArray *_recentDurations;
@property (retain, nonatomic) NSMutableArray *_favoriteDurations;
@property (retain, nonatomic) MTTimerDuration *_latestDuration;
@property (weak, nonatomic) id<MTDurationUpdateDelegate> updateDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultDurations;
+ (id)durationFromTimer:(id)a0;
+ (id)durationWithMinutes:(unsigned long long)a0;
+ (double)intervalWithMinutes:(unsigned long long)a0;

- (void)removeRecentDuration:(id)a0;
- (id)initWithPersistence:(id)a0;
- (void)addFavoriteDuration:(id)a0;
- (void)setDurationUpdateDelegate:(id)a0;
- (void)source:(id)a0 didAddTimers:(id)a1;
- (void)source:(id)a0 didDismissTimer:(id)a1;
- (id)latestDuration;
- (id)favoriteDurations;
- (void)nextTimerDidChange:(id)a0;
- (void)source:(id)a0 didFireTimer:(id)a1;
- (void).cxx_destruct;
- (void)saveLatestDuration:(id)a0;
- (void)removeFavoriteDuration:(id)a0;
- (void)addRecentDuration:(id)a0;
- (void)source:(id)a0 didRemoveTimers:(id)a1;
- (id)recentDurations;
- (void)source:(id)a0 didUpdateTimers:(id)a1;
- (void)addDuration:(id)a0 toCollection:(id)a1 withKey:(id)a2 limit:(unsigned long long)a3;
- (void)clearAllDurations;
- (id)initWithPersistence:(id)a0 storage:(id)a1;
- (void)removeDuration:(id)a0 fromCollection:(id)a1 withKey:(id)a2;
- (id)restoreDurationWithKey:(id)a0;
- (id)restoreDurationsWithKey:(id)a0;
- (void)source:(id)a0 didUpdateTimers:(id)a1 fromTimers:(id)a2;
- (void)synchronizeCollection:(id)a0 withKey:(id)a1;
- (void)syncrhonizeObject:(id)a0 withKey:(id)a1;

@end
