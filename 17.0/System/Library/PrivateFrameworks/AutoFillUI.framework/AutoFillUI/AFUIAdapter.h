@interface AFUIAdapter : NSObject

+ (void)addTemporaryTextColorToTextField:(id)a0;
+ (id)textSignalsForResponder:(id)a0;
+ (void)removeTemporaryTextColorFromTextField:(id)a0;
+ (long long)alignmentFromTextField:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })areaForASPFromTextField:(id)a0;
+ (void)configureField:(id)a0 withASPForegroundView:(id)a1 withASPBackgroundView:(id)a2;
+ (void)enumerateSignUpSignalsFromButton:(id)a0 block:(id /* block */)a1;
+ (void)enumerateSignUpSignalsFromNavBarItem:(id)a0 block:(id /* block */)a1;
+ (void)enumerateSignUpSignalsFromViewController:(id)a0 block:(id /* block */)a1;
+ (void)enumerateSignUpSignalsFromViewControllerForResponder:(id)a0 block:(id /* block */)a1 viewControllerOut:(id *)a2;
+ (void)enumerateSignupSignalsFromAccessibility:(id)a0 block:(id /* block */)a1;
+ (id)firstResponderForInput;
+ (id)gatherRespondersFromResponder:(id)a0;
+ (id)placeholderTextForResponder:(id)a0;
+ (id)presentedRootViewControllerForResponder:(id)a0;
+ (BOOL)responderAcceptsText:(id)a0;
+ (Class)runtimeClass;
+ (void)setText:(id)a0 forResponder:(id)a1;
+ (id)textFromResponder:(id)a0;
+ (id)textInputRespondersFromResponders:(id)a0 currentResponder:(id)a1 indexOfCurrent:(unsigned long long *)a2;

@end
