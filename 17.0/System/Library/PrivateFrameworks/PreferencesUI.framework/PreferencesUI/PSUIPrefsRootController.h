@class PSUIPrefsListController;

@interface PSUIPrefsRootController : PSRootController {
    PSUIPrefsListController *_rootListController;
}

- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)rootListController;
- (void)dealloc;
- (void)setupControllerForToolbar:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (id)initWithTitle:(id)a0 identifier:(id)a1;

@end
