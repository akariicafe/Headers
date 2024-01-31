@class NSString, NSDictionary, NSDate;

@interface AMSBagNetworkTaskResult : NSObject

@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) NSDictionary *data;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) BOOL expired;
@property (readonly, nonatomic) NSString *loadedBagIdentifier;
@property (readonly, nonatomic) NSString *loadedBagPartialIdentifier;
@property (readonly, nonatomic) NSString *storefront;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 expirationDate:(id)a1 loadedBagIdentifier:(id)a2 loadedBagPartialIdentifier:(id)a3 storefront:(id)a4 accountIdentifier:(id)a5;

@end
