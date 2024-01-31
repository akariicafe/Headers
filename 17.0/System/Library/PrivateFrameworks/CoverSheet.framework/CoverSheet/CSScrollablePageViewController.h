@interface CSScrollablePageViewController : CSPageViewController <CSScrollablePageViewControllerProtocol>

- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;

@end
