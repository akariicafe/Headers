@interface AFUIUtilities : NSObject

+ (void)animateUsingSpringWithMass:(double)a0 stiffness:(double)a1 damping:(double)a2 animations:(id /* block */)a3 completion:(id /* block */)a4;
+ (void)animateUsingSpringWithStiffness:(double)a0 damping:(double)a1 animations:(id /* block */)a2;
+ (id)parsedUtteranceFromText:(id)a0 context:(id)a1;
+ (BOOL)shouldShowSiriXIndicator;

@end
