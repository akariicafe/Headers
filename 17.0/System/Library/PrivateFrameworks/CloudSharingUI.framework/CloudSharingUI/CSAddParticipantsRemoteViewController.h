@class NSString, UIViewController;
@protocol CSAddParticipantsPublicController;

@interface CSAddParticipantsRemoteViewController : _UIRemoteViewController <CSAddParticipantsViewControllerHost>

@property (weak, nonatomic) UIViewController<CSAddParticipantsPublicController> *publicController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

@end
