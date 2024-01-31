@class NSString;
@protocol EDReceivingAccount;

@interface EMListUnsubscribeMailtoValues : NSObject <NSSecureCoding> {
    id<EDReceivingAccount> _account;
    NSString *_accountIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) NSString *subject;
@property (readonly, nonatomic) NSString *body;
@property (readonly, nonatomic) id<EDReceivingAccount> account;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAddresss:(id)a0 subject:(id)a1 body:(id)a2 account:(id)a3;

@end
