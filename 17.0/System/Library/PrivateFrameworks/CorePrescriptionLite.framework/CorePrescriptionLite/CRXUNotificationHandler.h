@class CRXUDispatchQueue, CRXUTimer;

@interface CRXUNotificationHandler : NSObject {
    CRXUDispatchQueue *_queue;
    id /* block */ _block;
    CRXUTimer *_timer;
    int _notificationToken;
}

- (void)invalidate;
- (void).cxx_destruct;
- (void)handleNotification:(id)a0;
- (void)handleTimer:(id)a0;
- (id)initWithNotification:(id)a0 timeout:(double)a1 queue:(id)a2 block:(id /* block */)a3;

@end
