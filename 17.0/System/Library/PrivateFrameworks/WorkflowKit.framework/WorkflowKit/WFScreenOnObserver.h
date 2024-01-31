@class NSObject;
@protocol OS_dispatch_queue, WFScreenOnObserverDelegate;

@interface WFScreenOnObserver : NSObject

@property (nonatomic) int token;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BOOL screenOn;
@property (weak, nonatomic) id<WFScreenOnObserverDelegate> delegate;

- (id)init;
- (void)start;
- (void)stop;
- (void)stateChanged:(BOOL)a0;
- (void).cxx_destruct;

@end
