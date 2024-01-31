@class NSString, NSDateFormatter;

@interface MTDateFormatting : NSObject {
    NSString *_amString;
    NSString *_pmString;
    NSDateFormatter *_dateOnlyFormatter;
    NSDateFormatter *_timeOnlyFormatter;
}

@property (readonly, weak, nonatomic) NSString *amString;
@property (readonly, weak, nonatomic) NSString *pmString;
@property (readonly, nonatomic) BOOL use24HourTime;
@property (readonly, nonatomic) BOOL timeDesignatorAppearsBeforeTime;

+ (id)sharedInstance;

- (void)_reloadLocaleInfo;
- (id)init;
- (void)dealloc;
- (id)timeDesignatorForDate:(id)a0;
- (id)localizedTimeStringFromDate:(id)a0 forTimeZone:(id)a1 timeDesignator:(out id *)a2;
- (id)_dateOnlyFormatter;
- (id)_timeOnlyFormatter;
- (id)timeDesignatorForDate:(id)a0 timeZone:(id)a1;
- (void).cxx_destruct;
- (void)_clearLocaleDependentState;
- (void)_loadLocaleInfo;
- (id)localizedTimeStringFromDate:(id)a0 timeDesignator:(out id *)a1;

@end
