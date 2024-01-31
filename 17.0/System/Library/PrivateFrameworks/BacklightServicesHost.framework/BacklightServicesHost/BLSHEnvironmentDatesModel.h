@class NSArray, NSMutableArray, NSDateInterval;
@protocol BLSHBacklightSceneHostEnvironment;

@interface BLSHEnvironmentDatesModel : NSObject {
    NSMutableArray *_specifiers;
    NSDateInterval *_dateInterval;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak, nonatomic) id<BLSHBacklightSceneHostEnvironment> environment;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy, nonatomic) NSArray *specifiers;
@property (readonly, nonatomic) long long count;

- (id)initWithEnvironment:(id)a0;
- (void).cxx_destruct;
- (id)missingIntervalForDateInterval:(id)a0;
- (void)clearAllSpecifiers;
- (void)purgeSpecifiersBefore:(id)a0;
- (void)registerSpecifiers:(id)a0 forDateInterval:(id)a1;
- (id)specifierForDate:(id)a0;

@end
