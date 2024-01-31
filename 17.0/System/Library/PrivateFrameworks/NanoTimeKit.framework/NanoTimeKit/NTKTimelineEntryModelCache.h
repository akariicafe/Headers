@class NSMutableArray, NSDate;
@protocol NTKTimelineEntryModelCacheDataSource;

@interface NTKTimelineEntryModelCache : NSObject {
    NSMutableArray *_cachedEntryModels;
}

@property (readonly, nonatomic) NSDate *cacheStartDate;
@property (readonly, nonatomic) NSDate *cacheEndDate;
@property (weak, nonatomic) id<NTKTimelineEntryModelCacheDataSource> dataSource;

+ (id)_endOfDayForDate:(id)a0;
+ (id)_startOfDayAfterDate:(id)a0;
+ (id)_startOfDayBeforeDate:(id)a0;
+ (id)_startOfDayForDate:(id)a0;

- (id)init;
- (id)calendar;
- (void)invalidate;
- (void).cxx_destruct;
- (id)_cachedEntryModelAfterDate:(id)a0 limit:(unsigned long long)a1;
- (id)_cachedEntryModelBeforeDate:(id)a0 limit:(unsigned long long)a1;
- (id)_cachedEntryModelForDate:(id)a0;
- (void)_extendCacheTowardDate:(id)a0;
- (id)entryModelForDate:(id)a0;
- (id)entryModelsAfterDate:(id)a0 limit:(unsigned long long)a1;
- (id)entryModelsBeforeDate:(id)a0 limit:(unsigned long long)a1;
- (BOOL)hasEntryModelForDate:(id)a0;

@end
