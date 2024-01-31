@interface STHourglassView : STCAPackageView

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setStateName:(id)a0;
- (void)prepareForInterfaceBuilder;
- (void)animateToStateName:(id)a0 completionHandler:(id /* block */)a1;
- (id)makeCAPackage;

@end
