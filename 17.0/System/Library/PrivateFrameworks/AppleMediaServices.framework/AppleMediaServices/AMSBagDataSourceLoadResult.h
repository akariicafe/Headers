@class NSDictionary, NSString, NSDate;

@interface AMSBagDataSourceLoadResult : NSObject

@property (readonly, nonatomic) NSDictionary *data;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) NSString *loadedBagIdentifier;
@property (readonly, nonatomic) NSString *loadedBagPartialIdentifier;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 expirationDate:(id)a1 loadedBagIdentifier:(id)a2 loadedBagPartialIdentifier:(id)a3;

@end
