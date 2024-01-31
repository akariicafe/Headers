@interface SLLastAccountManager : NSObject

+ (id)_lastAccountOfTypeIdentifier:(id)a0 inStore:(id)a1 updatePrefs:(BOOL)a2 prefKey:(id)a3 prefAppID:(id)a4;
+ (void)_setLastAccount:(id)a0 prefKey:(id)a1 prefAppID:(id)a2;
+ (id)lastTwitterAccountInAccountStore:(id)a0 updatePrefs:(BOOL)a1;
+ (void)setLastTwitterAccount:(id)a0;

@end
