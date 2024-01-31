@class NSDictionary, ACAccount, NSNumber;

@interface AMSAccountDeviceInfoResult : NSObject

@property (readonly, nonatomic) NSDictionary *rawResult;
@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSNumber *isBundleOwner;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 responseDictionary:(id)a1;

@end
