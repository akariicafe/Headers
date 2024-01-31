@class NSError, NSString;

@interface SKBaseErrorEvent : NSObject <SKAnalyticsEventProtocol>

@property (retain, nonatomic) NSError *primaryError;
@property (retain, nonatomic) NSError *mappedError;
@property (retain, nonatomic) NSString *inAppPurchaseID;
@property (retain, nonatomic) NSString *serverCorrelationID;
@property (retain, nonatomic) NSString *environment;
@property (nonatomic) long long userAction;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) BOOL canCreatePayload;

- (void).cxx_destruct;
- (id)createPayload;

@end
