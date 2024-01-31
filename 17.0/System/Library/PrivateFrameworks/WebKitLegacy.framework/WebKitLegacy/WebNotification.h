@class WebNotificationPrivate;

@interface WebNotification : NSObject {
    WebNotificationPrivate *_private;
}

- (id)init;
- (void)dealloc;
- (id)body;
- (id)iconURL;
- (id)notificationID;
- (void)finalize;
- (id)tag;
- (id)origin;
- (id)title;
- (id)lang;
- (id)dir;
- (void)dispatchClickEvent;
- (void)dispatchCloseEvent;
- (void)dispatchErrorEvent;
- (void)dispatchShowEvent;
- (id)initWithCoreNotification:(void *)a0;

@end
