@class NSDictionary;

@interface FedStatsCohortFactory : NSObject

@property (readonly) NSDictionary *cohortObjects;

+ (id)sharedInstance;
+ (id)cohortQueryFieldByName:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
