@class NSString, NSNumber;

@interface TPSAnalyticsEventContentViewed : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *collectionID;
@property (retain, nonatomic) NSString *correlationID;
@property (retain, nonatomic) NSString *clientConditionID;
@property (readonly, nonatomic) NSNumber *sessionViewNumber;
@property (retain, nonatomic) NSString *viewMethod;
@property (retain, nonatomic) NSString *viewMode;
@property (retain, nonatomic) NSString *widgetType;

+ (BOOL)supportsSecureCoding;
+ (void)setAppReferrer:(id)a0;
+ (id)eventWithContentID:(id)a0 collectionID:(id)a1 correlationID:(id)a2 clientConditionID:(id)a3 viewMethod:(id)a4 viewMode:(id)a5;
+ (id)eventWithContentID:(id)a0 collectionID:(id)a1 correlationID:(id)a2 clientConditionID:(id)a3 widgetType:(id)a4;
+ (void)incrementSessionViewNumberForKey:(id)a0;
+ (void)resetSessionViewNumber;
+ (BOOL)updateSessionViewNumber;

- (id)eventName;
- (void)log;
- (id)mutableAnalyticsEventRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithContentID:(id)a0 collectionID:(id)a1 correlationID:(id)a2 clientConditionID:(id)a3 viewMethod:(id)a4 viewMode:(id)a5;
- (id)_initWithContentID:(id)a0 collectionID:(id)a1 correlationID:(id)a2 clientConditionID:(id)a3 widgetType:(id)a4;
- (BOOL)isWidget;

@end
