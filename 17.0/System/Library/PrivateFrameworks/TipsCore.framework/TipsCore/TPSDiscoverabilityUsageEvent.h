@class NSString, NSArray, NSDate;

@interface TPSDiscoverabilityUsageEvent : NSObject

@property (copy, nonatomic) NSString *contentIdentifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) unsigned long long displayType;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) long long state;
@property (nonatomic) long long ineligibleReason;
@property (copy, nonatomic) NSArray *eligibleContext;
@property (copy, nonatomic) NSString *context;
@property (copy, nonatomic) NSDate *date;

+ (id)_eventWithContentIdentifier:(id)a0 bundleIdentifier:(id)a1 displayType:(unsigned long long)a2 eligibleContext:(id)a3 context:(id)a4 state:(long long)a5 date:(id)a6;
+ (id)contentViewedEventWithContentIdentifer:(id)a0 bundleIdentifier:(id)a1 type:(unsigned long long)a2 date:(id)a3;
+ (id)eligibleEventWithContentIdentifer:(id)a0 bundleIdentifier:(id)a1 type:(unsigned long long)a2 eligibleContext:(id)a3 date:(id)a4;
+ (id)eligibleEventWithContentIdentifer:(id)a0 bundleIdentifier:(id)a1 type:(unsigned long long)a2 flags:(unsigned long long)a3 eligibleContext:(id)a4 date:(id)a5;
+ (id)hintDisplayedEventWithContentIdentifer:(id)a0 bundleIdentifier:(id)a1 type:(unsigned long long)a2 context:(id)a3 date:(id)a4;
+ (id)hintDisplayedEventWithContentIdentifer:(id)a0 bundleIdentifier:(id)a1 type:(unsigned long long)a2 flags:(unsigned long long)a3 context:(id)a4 date:(id)a5;
+ (id)ineligibleEventWithContentIdentifer:(id)a0 bundleIdentifier:(id)a1 type:(unsigned long long)a2 context:(id)a3 reason:(long long)a4 date:(id)a5;
+ (id)performedOutcomeEventWithContentIdentifer:(id)a0 bundleIdentifier:(id)a1 type:(unsigned long long)a2 context:(id)a3 date:(id)a4;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithContentIdentifier:(id)a0 bundleIdentifier:(id)a1 displayType:(unsigned long long)a2 eligibleContext:(id)a3 context:(id)a4 state:(long long)a5 date:(id)a6;

@end
