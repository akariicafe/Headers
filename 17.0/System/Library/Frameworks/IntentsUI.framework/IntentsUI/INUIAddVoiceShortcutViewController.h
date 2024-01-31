@class INUIVoiceShortcutHostViewController, INShortcut, NSString, _UIRemoteViewController, UIViewController;
@protocol INUIAddVoiceShortcutViewControllerDelegate;

@interface INUIAddVoiceShortcutViewController : UIViewController <INUIVoiceShortcutRemoteViewControllerDelegate, _UIRemoteViewControllerContaining>

@property (retain, nonatomic) INShortcut *_shortcut;
@property (retain, nonatomic, getter=_remoteHostViewController, setter=_setRemoteHostViewController:) INUIVoiceShortcutHostViewController *remoteHostViewController;
@property (retain, nonatomic) UIViewController *currentChildViewController;
@property (weak, nonatomic) id<INUIAddVoiceShortcutViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;

+ (void)initialize;

- (void)loadView;
- (void).cxx_destruct;
- (id)initWithShortcut:(id)a0;
- (void)setChildViewController:(id)a0;
- (void)remoteViewControllerDidCancel;
- (void)remoteViewControllerDidCreateVoiceShortcut:(id)a0 error:(id)a1;

@end
