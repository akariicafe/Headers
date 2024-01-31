@class NSDate;

@interface ATXBatteryDrainBehavior : NSObject

@property (retain, nonatomic) NSDate *lastCachedDate;
@property (nonatomic) unsigned long long lastCachedClassification;

+ (id)sharedInstance;

- (unsigned long long)fetchADBLDrainClassification;

@end
