@class NSPredicate, NSObject;
@protocol OS_dispatch_queue;

@interface OSLogEventStreamBase : NSObject

@property (nonatomic) unsigned long long flags;
@property (copy, nonatomic) NSPredicate *filterPredicate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *target;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ streamHandler;
@property (nonatomic) unsigned int invalidated;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (id)init;
- (void)setEventHandler:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;

@end
