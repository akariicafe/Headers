@class NSString;

@interface TPSAnalyticsEventTipSaved : TPSAnalyticsEvent

@property (nonatomic) BOOL saved;
@property (retain, nonatomic) NSString *tipID;
@property (copy, nonatomic) NSString *correlationID;
@property (copy, nonatomic) NSString *collectionID;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithTipID:(id)a0 saved:(BOOL)a1 correlationID:(id)a2 collectionID:(id)a3;

- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithTipID:(id)a0 saved:(BOOL)a1 correlationID:(id)a2 collectionID:(id)a3;

@end
