@class NSString;

@interface BFFFinishSetupFaceIDViewController : BFFFaceIDViewController <BFFFaceIDViewControllerDelegate>

@property (copy, nonatomic) NSString *passcode;
@property (copy, nonatomic) id /* block */ completion;

- (id)init;
- (void).cxx_destruct;
- (void)faceIDViewController:(id)a0 didCompleteWithResult:(unsigned long long)a1 pushedViewControllers:(id)a2;
- (id)passcodeForFaceIDViewController:(id)a0;

@end
