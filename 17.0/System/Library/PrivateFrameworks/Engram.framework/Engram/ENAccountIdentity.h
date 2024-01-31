@protocol ENAccountKey, ENDeviceKey;

@interface ENAccountIdentity : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<ENAccountKey> accountKey;
@property (retain, nonatomic) id<ENDeviceKey> deviceKey;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAccountKey:(id)a0 deviceKey:(id)a1;

@end
