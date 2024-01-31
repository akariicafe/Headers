@class NSArray, NSObject;
@protocol OS_dispatch_queue, _UNNotificationContentExtensionVendorContainer;

@interface _UNNotificationContentExtensionVendorContext : NSExtensionContext <_UNNotificationExtensionVendorInterface, _UNNotificationExtensionHostInterface>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, getter=isQueueInactive) BOOL queueInactive;
@property (nonatomic) BOOL didCheckActionResponseDelegate;
@property (copy, nonatomic) NSArray *notificationActions;
@property (weak, nonatomic) id<_UNNotificationContentExtensionVendorContainer> notificationExtensionContainer;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void).cxx_destruct;
- (void)dismissNotificationContentExtension;
- (void)performNotificationDefaultAction;
- (void)_extensionRequestsDismiss;
- (void)requestDismiss;
- (void)_extensionRequestsDefaultAction;
- (void)_activateQueueIfNecessary;
- (void)_extensionDidCompleteNotificationResponse:(id)a0 withOption:(unsigned long long)a1;
- (void)_extensionDidUpdateNotificationActions:(id)a0;
- (void)_extensionDidUpdatePlayPauseMediaButton;
- (void)_extensionDidUpdateTitle:(id)a0;
- (void)_extensionMediaPlayingPaused;
- (void)_extensionMediaPlayingStarted;
- (void)_extensionSetPlayPauseMediaButtonColor:(id)a0;
- (void)_extensionSetPlayPauseMediaButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_extensionSetPlayPauseMediaButtonType:(unsigned long long)a0;
- (void)_extensionWantsMessagesFromHostDelivered;
- (void)_extensionWantsToBecomeFirstResponder:(BOOL)a0;
- (void)_extensionWantsToReceiveActionResponses:(BOOL)a0;
- (void)_extensionWantsToUpdateMediaPlayPauseButton;
- (void)_hostDidReceiveNotification:(id)a0;
- (void)_hostDidReceiveNotificationResponse:(id)a0;
- (void)_hostDidReceiveNotificationResponse:(id)a0 completionHandler:(id /* block */)a1;
- (void)_hostWantsMediaToPause;
- (void)_hostWantsMediaToPlay;
- (void)_hostWantsToPreserveInputViews;
- (void)_hostWantsToRestoreInputViews;
- (void)_hostWantsToUpdateMediaPlayPauseButton;
- (id)_notificationExtension;
- (void)_updateMediaPlayPauseButton;
- (void)mediaPlayingPaused;
- (void)mediaPlayingStarted;

@end
