@class NSString, NSNumberFormatter;

@interface _NCTimeFormatData : NSObject

@property (readonly, nonatomic) NSString *formatHourMinSecSubsec;
@property (readonly, nonatomic) NSString *formatHourMinSec;
@property (readonly, nonatomic) NSString *formatHourMin;
@property (readonly, nonatomic) NSString *formatMinSecSubsec;
@property (readonly, nonatomic) NSString *formatMinSec;
@property (readonly, nonatomic) NSString *formatMin;
@property (readonly, nonatomic) NSNumberFormatter *singleWidthNumberFormatter;
@property (readonly, nonatomic) NSNumberFormatter *doubleWidthNumberFormatter;

+ (id)_timeFormatDataAccessLock;
+ (id)_timeLocaleForLocale:(id)a0;
+ (id)instanceForLocale:(id)a0;

- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;

@end
