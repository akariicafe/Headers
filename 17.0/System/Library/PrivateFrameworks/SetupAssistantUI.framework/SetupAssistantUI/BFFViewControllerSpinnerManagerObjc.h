@interface BFFViewControllerSpinnerManagerObjc : NSObject <BFFNavigationControllerDelegate> {
    void /* unknown type, empty encoding */ weakObjectHashTable;
    void /* unknown type, empty encoding */ navigationController;
    void /* unknown type, empty encoding */ exceptionClassList;
}

+ (void)configureWithNavigationController:(id)a0;
+ (void)startAnimatingSpinnerFor:(id)a0 identifier:(id)a1;
+ (void)stopAnimatingSpinnerFor:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 operation:(long long)a2 animated:(BOOL)a3;
- (void)startAnimatingSpinnerFor:(id)a0 identifier:(id)a1;
- (void)stopAnimatingSpinnerFor:(id)a0;

@end
