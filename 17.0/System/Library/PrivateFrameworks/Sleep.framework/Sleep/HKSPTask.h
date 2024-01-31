@class NSString, NACancelationToken;

@interface HKSPTask : NSObject <HKSPCancelable> {
    NACancelationToken *_token;
    id /* block */ _cancelableBlock;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) BOOL isCanceled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBlock:(id /* block */)a0;
- (void)execute;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithIdentifier:(id)a0 block:(id /* block */)a1 delay:(double)a2;
- (id)initWithBlock:(id /* block */)a0 delay:(double)a1;
- (id)initWithIdentifier:(id)a0 block:(id /* block */)a1;

@end
