@class NSObject;
@protocol OS_dispatch_queue;

@interface IDSDaemonResponseHandler : NSObject

@property (readonly, nonatomic) id block;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BOOL isSync;

- (id)initWithBlock:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (id)initWithBlock:(id)a0 queue:(id)a1 isSync:(BOOL)a2;

@end
