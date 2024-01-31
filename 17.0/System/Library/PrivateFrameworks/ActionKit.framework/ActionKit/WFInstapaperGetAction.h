@interface WFInstapaperGetAction : WFInstapaperAction

- (void)engine:(id)a0 connection:(id)a1 didReceiveBookmarks:(id)a2 ofUser:(id)a3 forFolder:(id)a4;
- (id)connectionTypes;
- (BOOL)includeSpecialFolders;
- (void)runAsynchronouslyWithInput:(id)a0 selectedFolder:(id)a1;

@end
