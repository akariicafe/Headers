@class NSString;

@interface MSDCodeEntryAlertController : UIAlertController <MSDCodeEntryContentViewControllerDelegate>

@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didCompleteVerification:(BOOL)a0 forCode:(id)a1;
- (id)initWithVerificationCode:(id)a0 completion:(id /* block */)a1;

@end
