@interface WFTakePhotoAction : WFAction

@property (nonatomic) unsigned long long remainingPhotos;

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (id)disabledOnPlatforms;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)runWithRemoteUserInterface:(id)a0 input:(id)a1;

@end
