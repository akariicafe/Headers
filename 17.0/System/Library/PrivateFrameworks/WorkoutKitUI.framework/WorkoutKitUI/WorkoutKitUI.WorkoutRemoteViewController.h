@interface WorkoutKitUI.WorkoutRemoteViewController : _UIRemoteViewController <WorkoutRemoteViewServiceExportedInterface> {
    void /* unknown type, empty encoding */ dismissHandler;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)dismiss;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
