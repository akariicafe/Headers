@interface MTAlertController : UIAlertController

@property (nonatomic) BOOL replacesExistingAlert;

- (id)init;
- (void)presentAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)alertIdentifier;

@end
