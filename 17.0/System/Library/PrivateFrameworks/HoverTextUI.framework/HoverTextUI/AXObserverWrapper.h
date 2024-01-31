@class AXElement, NSArray, NSRunLoop;

@interface AXObserverWrapper : NSObject

@property (retain, nonatomic) AXElement *systemElement;
@property (retain, nonatomic) struct __AXObserver { } *observer;
@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) NSArray *notifications;
@property (retain, nonatomic) NSRunLoop *runloop;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSystemElement:(id)a0 runloop:(id)a1 notifications:(id)a2 handler:(id /* block */)a3 error:(id *)a4;

@end
