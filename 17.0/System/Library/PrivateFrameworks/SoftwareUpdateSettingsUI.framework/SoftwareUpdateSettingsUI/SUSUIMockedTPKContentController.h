@class NSString;

@interface SUSUIMockedTPKContentController : TPKContentController <SoftwareUpdateSettingsMockingKit.SUSMKComingSoonTipResponderDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (void)contentDidBecomeAvailableWithTitle:(id)a0 andContent:(id)a1;
- (id)createTipKitDescription:(id)a0;

@end
