@class NSString;

@interface MBAccountChange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) NSString *personaIdentifier;
@property (readonly, nonatomic) BOOL isPrimaryAccount;
@property (readonly, nonatomic) long long changeType;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAccountIdentifier:(id)a0 personaIdentifier:(id)a1 isPrimaryAccount:(BOOL)a2 changeType:(long long)a3;

@end
