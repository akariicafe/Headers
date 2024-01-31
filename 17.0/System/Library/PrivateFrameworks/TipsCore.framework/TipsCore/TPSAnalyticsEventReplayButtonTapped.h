@class NSString;

@interface TPSAnalyticsEventReplayButtonTapped : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *tipID;
@property (retain, nonatomic) NSString *collectionID;
@property (retain, nonatomic) NSString *correlationID;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithTipID:(id)a0 collectionID:(id)a1 correlationID:(id)a2;

- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithTipID:(id)a0 collectionID:(id)a1 correlationID:(id)a2;

@end
