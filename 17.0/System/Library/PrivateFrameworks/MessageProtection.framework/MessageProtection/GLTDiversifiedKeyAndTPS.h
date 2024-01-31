@class NSData;

@interface GLTDiversifiedKeyAndTPS : NSObject

@property (readonly, nonatomic) NSData *trackingPreventionSalt;
@property (readonly, nonatomic) struct __SecKey { } *diversifiedKey;

- (void).cxx_destruct;
- (id)initWithKey:(struct __SecKey { } *)a0 trackingPreventionSalt:(id)a1;

@end
