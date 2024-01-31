@interface SUScriptSubscriptionStatusCoordinator : SUScriptObject

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)invalidateLastKnownStatus;

@end
