@class NSString, NSDictionary, NSArray, NSError, CLLocation;

@interface HomeUtilityServices.UtilityServices : NSObject

+ (void)authorizeAndSubscribeToSinglePremise:(NSString *)a0 utilityID:(NSString *)a1 authCode:(NSString *)a2 completionHandler:(void (^)(NSDictionary *, NSError *))a3;
+ (void)getUtilityInformation:(NSString *)a0 completionHandler:(void (^)(NSDictionary *, NSError *))a1;
+ (void)searchUtilitiesNearLocation:(CLLocation *)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;
+ (void)subscribePremiseToUsageData:(NSString *)a0 utilityID:(NSString *)a1 utilityHomeID:(NSString *)a2 completionHandler:(void (^)(BOOL, NSError *))a3;
+ (void)tafAuthorizeAndSubscribeToSinglePremise:(NSString *)a0 utilityID:(NSString *)a1 fields:(NSDictionary *)a2 completionHandler:(void (^)(NSDictionary *, NSError *))a3;

- (id)init;

@end
