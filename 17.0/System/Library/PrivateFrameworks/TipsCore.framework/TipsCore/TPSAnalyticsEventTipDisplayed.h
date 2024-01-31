@class NSString, TPSExperiment;

@interface TPSAnalyticsEventTipDisplayed : TPSAnalyticsEvent

@property (readonly, nonatomic) NSString *tipID;
@property (readonly, nonatomic) NSString *correlationID;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *context;
@property (readonly, nonatomic) unsigned long long displayType;
@property (readonly, nonatomic) unsigned long long usageFlags;
@property (nonatomic) unsigned long long displayCount;
@property (nonatomic) BOOL overrideHoldout;
@property (readonly, nonatomic) TPSExperiment *experiment;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithTipID:(id)a0 correlationID:(id)a1 bundleID:(id)a2 context:(id)a3 displayType:(unsigned long long)a4 usageFlags:(unsigned long long)a5 experiment:(id)a6 overrideHoldout:(BOOL)a7 date:(id)a8;

- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void)setDataProvider:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithTipID:(id)a0 correlationID:(id)a1 bundleID:(id)a2 context:(id)a3 displayType:(unsigned long long)a4 usageFlags:(unsigned long long)a5 experiment:(id)a6 overrideHoldout:(BOOL)a7 date:(id)a8;
- (id)duetEvent;

@end
