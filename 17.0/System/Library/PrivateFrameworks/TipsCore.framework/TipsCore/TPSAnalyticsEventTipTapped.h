@class NSString;

@interface TPSAnalyticsEventTipTapped : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *tipID;
@property (retain, nonatomic) NSString *correlationID;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *context;
@property (readonly, nonatomic) unsigned long long displayType;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithTipID:(id)a0 correlationID:(id)a1;
+ (id)eventWithTipID:(id)a0 correlationID:(id)a1 bundleID:(id)a2 context:(id)a3;

- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void)setDataProvider:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithTipID:(id)a0 correlationID:(id)a1;
- (id)_initWithTipID:(id)a0 correlationID:(id)a1 bundleID:(id)a2 context:(id)a3;

@end
