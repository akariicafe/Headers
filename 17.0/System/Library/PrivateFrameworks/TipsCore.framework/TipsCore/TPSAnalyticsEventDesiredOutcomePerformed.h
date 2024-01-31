@class NSString;

@interface TPSAnalyticsEventDesiredOutcomePerformed : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *tipID;
@property (nonatomic) double timeToDesiredOutcome;
@property (nonatomic) long long displayCount;
@property (retain, nonatomic) NSString *correlationID;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *context;
@property (retain, nonatomic) NSString *experimentID;
@property (retain, nonatomic) NSString *experimentCampID;
@property (retain, nonatomic) NSString *displayType;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithTipID:(id)a0 correlationID:(id)a1 displayType:(id)a2 overrideHoldout:(BOOL)a3 lastDisplayedContext:(id)a4 lastHintDisplayedDate:(id)a5 desiredOutcomePerformedDate:(id)a6;

- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void)setDataProvider:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithTipID:(id)a0 correlationID:(id)a1 displayType:(id)a2 overrideHoldout:(BOOL)a3 context:(id)a4 lastHintDisplayedDate:(id)a5 desiredOutcomePerformedDate:(id)a6;

@end
