@interface _UIONavigationBarTitleRenamerViewMetricsUpdateAction : _UIOServerAction

- (BOOL)isPermitted;
- (long long)textAlignment;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textAlignment:(long long)a1 session:(id)a2 responseHandler:(id /* block */)a3;
- (void)performActionFromConnection:(id)a0;

@end
