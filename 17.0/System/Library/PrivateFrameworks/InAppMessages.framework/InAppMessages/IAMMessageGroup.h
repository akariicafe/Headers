@class IAMMessageCoordinator, NSString;
@protocol IAMMessageGroupInternalDelegate;

@interface IAMMessageGroup : NSObject

@property (weak, nonatomic) IAMMessageCoordinator *messageCoordinator;
@property (weak, nonatomic) id<IAMMessageGroupInternalDelegate> internalDelegate;
@property (readonly, nonatomic) NSString *groupIdentifier;

- (void)receiveEvent:(id)a0;
- (void)performModalMessagePresentation:(id)a0 fromViewController:(id)a1;
- (id)contextPropertyWithName:(id)a0;
- (void).cxx_destruct;
- (void)viewControllerForModalMessagePresentation:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldPerformModalMessagePresentation;
- (id)initWithGroupIdentifier:(id)a0;
- (void)reportContextPropertiesDidChange:(id)a0;
- (void)reportModalMessagePresentationFailedWithIdentifier:(id)a0;
- (void)reportModalMessageWasDismissedWithIdentifier:(id)a0;
- (void)reportModalMessageWasPresentedWithIdentifier:(id)a0;
- (void)reportModalMessageWithIdentifier:(id)a0 actionWasPerformedWithIdentifier:(id)a1;

@end
