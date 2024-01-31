@class NSString;

@interface SUInstallPolicy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *clientName;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long skipsAllowed;
@property (readonly, nonatomic) BOOL autoUpdateEnabled;
@property (readonly, nonatomic) BOOL useDarkBoot;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)_setType:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_setClientName:(id)a0;
- (void)_setAutoUpdateEnabled:(BOOL)a0;
- (void)_setDarkBoolEnabled:(BOOL)a0;
- (id)initWithInstallPolicyType:(unsigned long long)a0;

@end
