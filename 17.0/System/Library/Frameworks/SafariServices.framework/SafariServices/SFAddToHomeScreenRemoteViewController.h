@class NSString;
@protocol SFAddToHomeScreenRemoteViewControllerDelegate;

@interface SFAddToHomeScreenRemoteViewController : _UIRemoteViewController <SFAddToHomeScreenRemoteProtocol>

@property (weak, nonatomic) id<SFAddToHomeScreenRemoteViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (BOOL)shouldPropagateAppearanceCustomizations;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (void)serviceViewControllerDidFinishWithResult:(BOOL)a0;

@end
