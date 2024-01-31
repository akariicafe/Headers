@class NSString;

@interface TPSAnalyticsEventAnimationFinished : TPSAnalyticsEvent

@property (nonatomic) BOOL animationFinished;
@property (readonly, nonatomic) NSString *animationSource;
@property (retain, nonatomic) NSString *tipID;
@property (retain, nonatomic) NSString *collectionID;
@property (retain, nonatomic) NSString *correlationID;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithTipID:(id)a0 animationFinished:(BOOL)a1 animationSource:(id)a2 collectionID:(id)a3 correlationID:(id)a4;

- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithTipID:(id)a0 animationFinished:(BOOL)a1 animationSource:(id)a2 collectionID:(id)a3 correlationID:(id)a4;

@end
