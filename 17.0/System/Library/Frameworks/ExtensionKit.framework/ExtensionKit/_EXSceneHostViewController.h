@class NSUUID, _EXExtensionProcessHandle, NSString;

@interface _EXSceneHostViewController : UIViewController

@property (retain) _EXExtensionProcessHandle *extensionProcess;
@property (retain) NSUUID *sessionUUID;
@property (retain) NSString *role;

- (void)loadView;
- (void).cxx_destruct;
- (id)initWithExtensionProcess:(id)a0 sessionUUID:(id)a1 role:(id)a2;

@end
