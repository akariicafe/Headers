@interface ReusableTabManager : WBReusableTabManager

- (id)windowStates;
- (id)tabGroupManager;
- (id)reusableTabDocumentWithUUID:(id)a0;
- (id)faviconForUUID:(id)a0;
- (void)enumerateReusableTabDocuments:(id /* block */)a0;

@end
