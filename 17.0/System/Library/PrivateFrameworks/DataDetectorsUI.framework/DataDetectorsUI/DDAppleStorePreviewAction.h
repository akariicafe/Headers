@interface DDAppleStorePreviewAction : DDPreviewAction

+ (BOOL)handlesUrl:(id)a0 result:(struct __DDResult { } *)a1;
+ (id)urlForURL:(id)a0 result:(struct __DDResult { } *)a1;

- (id)menuActions;
- (id)previewActionsWithValidatedURL:(id)a0;
- (id)commitURL;
- (id)createViewController;
- (BOOL)showMenuTitle;

@end
