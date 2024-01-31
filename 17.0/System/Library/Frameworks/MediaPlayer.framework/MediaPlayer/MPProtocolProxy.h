@class NSHashTable, Protocol;

@interface MPProtocolProxy : NSProxy

@property (retain, nonatomic) Protocol *protocol;
@property (retain, nonatomic) NSHashTable *objects;

+ (id)proxyForObject:(id)a0 protocol:(id)a1;
+ (id)proxyForObjects:(id)a0 protocol:(id)a1;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;

@end
