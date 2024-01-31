@interface _UIONavigationBarTitleRenamerRemoteSessionAction : _UIOClientAction

+ (id)_actionWithSettings:(id)a0 responseHandler:(id /* block */)a1;
+ (id)didCancelSession:(id)a0 responseHandler:(id /* block */)a1;
+ (id)didEndEditingActionWithSession:(id)a0 text:(id)a1 responseHandler:(id /* block */)a2;
+ (id)fileRenameDidEndInSession:(id)a0 withFinalURL:(id)a1 responseHandler:(id /* block */)a2;
+ (id)fileRenameDidFailInSession:(id)a0 withError:(id)a1 proposedName:(id)a2 responseHandler:(id /* block */)a3;
+ (id)shouldEndEditingActionWithSession:(id)a0 text:(id)a1 responseHandler:(id /* block */)a2;
+ (id)willBeginRenamingActionWithSession:(id)a0 text:(id)a1 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 responseHandler:(id /* block */)a3;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRange;
- (id)text;
- (id)error;
- (int)_action;
- (id)finalURL;
- (void)handleClientActionToOverlayService:(id)a0;

@end
