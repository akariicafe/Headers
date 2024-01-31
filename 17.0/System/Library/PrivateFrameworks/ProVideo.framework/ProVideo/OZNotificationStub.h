@class NSTimer;

@interface OZNotificationStub : NSObject {
    NSTimer *_pTimer;
    void *_pDocument;
}

- (void)dealloc;
- (void)fire;
- (void)createTimer;
- (id)initWithOZDocument:(void *)a0 useTimer:(BOOL)a1;
- (void)processNotifications:(id)a0;
- (void)releaseTimer;

@end
