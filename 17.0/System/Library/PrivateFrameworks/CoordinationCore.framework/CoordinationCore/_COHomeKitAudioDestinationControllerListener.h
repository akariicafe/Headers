@class HMAccessory, HMHome, NSString;
@protocol _COHomeKitAudioDestinationControllerListenerDelegate;

@interface _COHomeKitAudioDestinationControllerListener : NSObject <HMAccessoryDelegatePrivate>

@property (readonly, nonatomic) HMAccessory *accessory;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, weak, nonatomic) id<_COHomeKitAudioDestinationControllerListenerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)accessoryDidUpdateAudioDestinationController:(id)a0;
- (id)initWitAccessory:(id)a0 home:(id)a1 delegate:(id)a2;

@end
