@class NSString;

@interface _PXAsyncIterator : NSObject <PXAsyncIterator>

@property (readonly, copy, nonatomic) id /* block */ handler;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL hasStopped;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)stop;
- (void)next;
- (void).cxx_destruct;
- (void)_executeNextRun;
- (id)initWithCount:(unsigned long long)a0 handler:(id /* block */)a1;

@end
