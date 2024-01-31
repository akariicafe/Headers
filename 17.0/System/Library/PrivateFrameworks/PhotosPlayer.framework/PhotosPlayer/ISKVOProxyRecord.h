@class ISKVOProxy, NSObject;
@protocol OS_dispatch_queue;

@interface ISKVOProxyRecord : NSObject

@property (readonly, nonatomic) ISKVOProxy *proxy;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)initWithProxy:(id)a0 queue:(id)a1;

@end
