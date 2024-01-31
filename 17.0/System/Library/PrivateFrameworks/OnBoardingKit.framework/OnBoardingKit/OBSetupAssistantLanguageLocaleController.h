@class NSString;

@interface OBSetupAssistantLanguageLocaleController : OBTableWelcomeController <OBSetupAssistantSupport>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)bottomPaddingHeight;
- (double)headerViewBottomToTableViewHeaderTopPadding;
- (double)headerViewBottomToTableViewTopPaddingForLocalePane;

@end
