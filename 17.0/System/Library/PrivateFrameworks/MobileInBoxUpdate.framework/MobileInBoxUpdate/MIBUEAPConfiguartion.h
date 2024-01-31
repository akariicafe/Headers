@class NSArray;

@interface MIBUEAPConfiguartion : NSObject

@property (copy, nonatomic) NSArray *tlsCertificateChain;
@property (readonly, nonatomic) struct __SecKey { } *tlsKey;

- (id)init;
- (void).cxx_destruct;
- (void)setTLSKey:(struct __SecKey { } *)a0;

@end
