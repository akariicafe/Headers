@class _SBUISystemApertureCAPackageView;

@interface SBUISystemApertureCAPackageContentProvider : SBUISystemApertureAspectFittingContentProvider {
    _SBUISystemApertureCAPackageView *_packageView;
}

@property (nonatomic) struct CGSize { double x0; double x1; } intrinsicPackageSize;

- (id)publishedObjectWithName:(id)a0;
- (BOOL)setState:(id)a0 animated:(BOOL)a1;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithPackageName:(id)a0 inBundle:(id)a1;

@end
