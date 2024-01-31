@class NSTimer, NSObject;
@protocol OS_dispatch_source;

@interface B2PTimer : NSObject {
    NSObject<OS_dispatch_source> *_timerSource;
    id /* block */ _block;
    unsigned int _ms;
}

@property (readonly) int type;
@property (readonly) NSTimer *timer;

- (void)start;
- (id)description;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithDeadlineMS:(unsigned int)a0 type:(int)a1 queue:(id)a2 block:(id /* block */)a3;

@end
