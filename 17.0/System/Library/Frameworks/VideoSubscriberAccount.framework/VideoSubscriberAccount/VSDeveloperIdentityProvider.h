@class NSString, NSArray;

@interface VSDeveloperIdentityProvider : NSManagedObject

@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *providerID;
@property (copy, nonatomic) NSString *nameForSorting;
@property (copy, nonatomic) NSString *authenticationURL;
@property (copy, nonatomic) NSString *certificateURL;
@property (copy, nonatomic) NSArray *authenticationSchemes;

@end
