@class Protocol;

@interface MRWeakProxy : NSObject

@property (weak, nonatomic) id object;
@property (retain, nonatomic) Protocol *protocol;

+ (id)weakProxyWithObject:(id)a0 protocol:(id)a1;

- (void)forwardInvocation:(id)a0;
- (unsigned long long)hash;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
