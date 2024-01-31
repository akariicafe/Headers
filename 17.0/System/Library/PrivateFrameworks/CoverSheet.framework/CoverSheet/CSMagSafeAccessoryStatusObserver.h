@protocol CSMagSafeAccessoryStatusProviding, CSMagSafeAccessoryStatusDelegate, NSObject;

@interface CSMagSafeAccessoryStatusObserver : NSObject {
    id<NSObject> _attachmentNotificationToken;
    id<NSObject> _detachmentNotificationToken;
    id<NSObject> _animationStatusNotificationToken;
    id<CSMagSafeAccessoryStatusProviding> _statusProvider;
}

@property (weak, nonatomic) id<CSMagSafeAccessoryStatusDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoverSheetContext:(id)a0;
- (void)notifiedWithAccessoryDetached;
- (void)notifiedWithAccessoryAttached;
- (void)notifiedWithAccessoryAnimationStatusChanged;

@end
