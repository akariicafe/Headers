@class NSString, NSNumber;

@interface TPSAnalyticsEventFrequencyControl : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *displayType;
@property (retain, nonatomic) NSNumber *displayCount;
@property (retain, nonatomic) NSNumber *notDisplayedDueToFrequencyControlCount;
@property (retain, nonatomic) NSString *experimentID;
@property (retain, nonatomic) NSString *experimentCampID;

+ (BOOL)supportsSecureCoding;

- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void)setDataProvider:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDisplayType:(id)a0 displayCount:(id)a1 notDisplayedDueToFrequencyControlCount:(id)a2;

@end
