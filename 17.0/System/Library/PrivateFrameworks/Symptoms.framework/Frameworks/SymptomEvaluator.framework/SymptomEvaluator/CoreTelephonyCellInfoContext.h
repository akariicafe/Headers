@class NSObject;
@protocol OS_dispatch_queue;

@interface CoreTelephonyCellInfoContext : NSObject

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)initWithCompletion:(id /* block */)a0 queue:(id)a1;

@end
