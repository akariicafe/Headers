@class NSString;

@interface OBSetupAssistantBulletedListController : OBWelcomeController <OBSetupAssistantSupport>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (void)addBulletedListItemWithDescription:(id)a0 image:(id)a1;

@end
