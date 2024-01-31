@class NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface PXUserDefaultsStandardDataSource : NSObject <PXUserDefaultsDataSource> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly, nonatomic) PXUserDefaultsStandardDataSource *sharedInstance;

@property (readonly, nonatomic) NSDate *currentDate;

- (id)init;
- (void)setPersistedValue:(id)a0 forKey:(id)a1;
- (id)persistedValueForKey:(id)a0;
- (id)_initAsSharedInstance;
- (void).cxx_destruct;

@end
