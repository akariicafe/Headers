@class NSHashTable, NSDate;

@interface SBFDateTimeController : NSObject {
    NSHashTable *_observers;
}

@property (class, readonly, nonatomic) SBFDateTimeController *sharedInstance;

@property (readonly, copy, nonatomic) NSDate *currentDate;
@property (copy, nonatomic) NSDate *overrideDate;
@property (nonatomic) double overrideDateOffset;

- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;

@end
