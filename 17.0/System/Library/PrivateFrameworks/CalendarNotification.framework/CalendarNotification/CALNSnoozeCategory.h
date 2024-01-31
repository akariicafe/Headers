@class NSString, NSArray;

@interface CALNSnoozeCategory : NSObject {
    double _timedExpirationInterval;
    BOOL _relativeToEnd;
    BOOL _validForAllDay;
}

@property (readonly, nonatomic) NSString *suffix;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) double leeway;

+ (id)snoozeCategories;
+ (id)snoozeCategoryForEventWithStartDate:(id)a0 endDate:(id)a1 now:(id)a2 isAllDay:(BOOL)a3;

- (id)expirationDateForEventWithStartDate:(id)a0 endDate:(id)a1 isAllDay:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithSuffix:(id)a0 timedExpirationInterval:(double)a1 leeway:(double)a2 relativeToEnd:(BOOL)a3 validForAllDay:(BOOL)a4 actions:(id)a5;

@end
