@interface WFMarkupAction : WFAction

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (id)inputDictionary;
- (id)localizedSubcategoryForCategory:(id)a0;
- (void)runWithRemoteUserInterface:(id)a0 input:(id)a1;
- (id)subcategoryForCategory:(id)a0;

@end
