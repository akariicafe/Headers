@interface BPSNTKCustomization : NSObject

- (id)facesViewController;
- (id)galleryViewController;
- (BOOL)handlePresentationOfNotification:(id)a0 fromNotificationCenter:(id)a1 withCompletionHandler:(id /* block */)a2;
- (BOOL)handleUserNotificationResponse:(id)a0 fromNotificationCenter:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)userNotificationCategories;

@end
