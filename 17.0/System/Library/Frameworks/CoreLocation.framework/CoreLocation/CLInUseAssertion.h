@interface CLInUseAssertion : CLAssertion

+ (id)newAssertionForBundleIdentifier:(id)a0 bundlePath:(id)a1 reason:(id)a2 level:(int)a3;
+ (id)newAssertionForBundle:(id)a0 withReason:(id)a1 level:(int)a2;
+ (id)newAssertionForBundleIdentifier:(id)a0 withReason:(id)a1 level:(int)a2;
+ (id)newAssertionForBundle:(id)a0 withReason:(id)a1;
+ (id)newAssertionForBundleIdentifier:(id)a0 withReason:(id)a1;

@end
