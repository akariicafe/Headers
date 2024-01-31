@protocol SYDClientProtocol;

@interface SYDClientProtocolProxy : NSObject <SYDClientProtocol>

@property (weak, nonatomic) id<SYDClientProtocol> target;

- (void)storeDidChangeWithStoreID:(id)a0 changeDictionary:(id)a1 reply:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;

@end
