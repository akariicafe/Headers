@interface ContactsUtils : NSObject

+ (id)defaultContactKeysToFetch;
+ (id)contactForEmailAddress:(id)a0 fullName:(id)a1 firstName:(id)a2 lastName:(id)a3 keysToFetch:(id)a4;
+ (id)contactForAddress:(id)a0 fullName:(id)a1 firstName:(id)a2 lastName:(id)a3;
+ (id)contactForAddress:(id)a0 fullName:(id)a1 firstName:(id)a2 lastName:(id)a3 keysToFetch:(id)a4;
+ (id)contactForContact:(id)a0 keysToFetch:(id)a1;
+ (id)contactForPhoneNumber:(id)a0 fullName:(id)a1 firstName:(id)a2 lastName:(id)a3 keysToFetch:(id)a4;

@end
