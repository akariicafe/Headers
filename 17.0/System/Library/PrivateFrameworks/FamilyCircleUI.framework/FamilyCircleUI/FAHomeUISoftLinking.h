@class NSString, HUAddPeopleViewController;

@interface FAHomeUISoftLinking : NSObject <HUAddPeopleViewControllerDelegate> {
    HUAddPeopleViewController *_addPeopleController;
    NSString *_homeReloadSignal;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getHomeImage;
+ (id)getURLScheme;

- (void).cxx_destruct;
- (void)addPeopleViewController:(id)a0 didSendInvitations:(id)a1;
- (void)addPeopleViewControllerDidCancel:(id)a0;
- (id)getPeopleAddController;
- (id)initWithHome:(id)a0 notificationName:(id)a1;

@end
