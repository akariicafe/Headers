@class NSString, UIWindow;
@protocol ICUIApplicationShimDelegate;

@interface ICUIApplicationShim : NSObject <ICUIApplicationShim>

@property (class, readonly) ICUIApplicationShim *sharedInstance;

@property (retain, nonatomic) id<ICUIApplicationShimDelegate> delegate;
@property (readonly, nonatomic) UIWindow *keyWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)endReceivingRemoteControlEvents;
- (void)beginReceivingRemoteControlEvents;
- (BOOL)isQuickNoteSessionActive;
- (BOOL)isSecureScreenShowing;

@end
