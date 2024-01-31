@class UIScreen, UIViewController, NSString;

@interface NUExtensionDevice : NSObject <NUDevice>

@property (readonly, nonatomic) UIScreen *screen;
@property (readonly, weak, nonatomic) UIViewController *hostViewController;
@property (readonly, nonatomic, getter=isSplitScreen) BOOL splitScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithScreen:(id)a0 hostViewController:(id)a1;

@end
