@interface _SFWebProcessPlugIn : WBSWebProcessPlugIn {
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *_javaScriptConsoleOutputFile;
}

- (id)pageControllerWithBrowserContextController:(id)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)webProcessPlugIn:(id)a0 initializeWithObject:(id)a1;
- (void)_installUIClientIfNecessaryWithPageController:(id)a0;
- (void)didCreatePageController:(id)a0 forBrowserContextController:(id)a1;
- (void)willDestroyPageController:(id)a0 forBrowserContextController:(id)a1;

@end
