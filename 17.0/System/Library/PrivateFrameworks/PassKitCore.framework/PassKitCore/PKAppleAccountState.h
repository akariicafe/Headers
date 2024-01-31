@class NSString;

@interface PKAppleAccountState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isWalletDataclassEnabled;
@property (readonly, nonatomic) BOOL isUbiquityDataclassEnabled;
@property (readonly, nonatomic) BOOL isManaged;
@property (readonly, nonatomic) BOOL isPrimary;

- (id)initWithAccount:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
