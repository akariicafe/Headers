@class NSNumber, NSDictionary;

@interface AMSSubscriptionEntitlementsResult : NSObject

@property (retain, nonatomic) NSNumber *appAdamId;
@property (retain, nonatomic) NSNumber *appVersion;
@property (retain, nonatomic) NSDictionary *entitlements;
@property (retain, nonatomic) NSDictionary *serverResponse;

- (id)exportObject;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
