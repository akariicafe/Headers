@class BackendXPC;

@interface CryptoBackendXPC : BackendXPC

@property (readonly, nonatomic) BackendXPC *baseBackendXPC;

+ (BOOL)supportsSecureCoding;

- (BOOL)isUnlocked;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFormat:(const void *)a0 baseBackendXPC:(id)a1;
- (void)replaceWithBackendXPC:(id)a0;

@end
