@class BKSAnimationFenceHandle, NSString;

@interface _UIKeyboardUIInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } beginFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endFrame;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long options;
@property (nonatomic) BOOL changedAccessoryOnly;
@property (nonatomic) BOOL assistantOnScreenOnly;
@property (nonatomic) unsigned long long assistantPosition;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } assistantFrame;
@property (nonatomic) BOOL forceNotification;
@property (nonatomic) BOOL wasCausedRemotely;
@property (nonatomic) BOOL dueToRotation;
@property (nonatomic, getter=isStartNotification) BOOL startNotification;
@property (nonatomic) unsigned long long notification;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyboardPosition;
@property (readonly, copy) BKSAnimationFenceHandle *animationFence;
@property (readonly) BOOL keyboardOnScreen;
@property BOOL assistantBarVisible;
@property BOOL requiresHeightForIntegratedAssistantBar;
@property (readonly) BOOL animated;
@property (readonly) BOOL tracking;
@property (nonatomic) BOOL resizing;
@property BOOL isLocal;
@property (copy, nonatomic) NSString *currentInputMode;
@property unsigned long long uiPosition;
@property unsigned long long keyboardScenePresentationMode;
@property (readonly) long long orientation;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *bundleIdentifier;

+ (id)animationFence;

- (id)notificationInfo;
- (void)resetAnimationFencing;
- (id)initWithKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 onScreen:(BOOL)a1 animated:(BOOL)a2 tracking:(BOOL)a3 fence:(id)a4;
- (void)encodeWithCoder:(id)a0;
- (void)addNotificationInfo:(id)a0 isStart:(BOOL)a1;
- (id)description;
- (id)initWithKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 onScreen:(BOOL)a1 animated:(BOOL)a2 tracking:(BOOL)a3 orientation:(long long)a4 fence:(id)a5;
- (id)copyWithoutFence;
- (void).cxx_destruct;
- (id)initWithKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 onScreen:(BOOL)a1 animated:(BOOL)a2 tracking:(BOOL)a3 wantsFence:(BOOL)a4;
- (BOOL)hasValidNotification;
- (id)initWithKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 onScreen:(BOOL)a1 animated:(BOOL)a2 tracking:(BOOL)a3 orientation:(long long)a4 wantsFence:(BOOL)a5;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
