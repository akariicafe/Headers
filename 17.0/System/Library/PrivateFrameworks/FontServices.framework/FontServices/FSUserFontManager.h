@interface FSUserFontManager : NSObject

+ (id)resumeSuspendedFontFiles;
+ (id)xpcInterface;
+ (double)secondsSinceLastAccessed:(id)a0;
+ (void)enableOrDisablePersistentURLs:(id)a0 enabled:(BOOL)a1;
+ (void)reset;
+ (id)registeredFamiliesForIdentifier:(id)a0 enabled:(BOOL)a1;
+ (id)knownFontProviders;
+ (void)synchronizeFontAssets:(id /* block */)a0;
+ (id)userFontsInfo;
+ (id)fontProvidersSubscriptionSupportInfoAndFontFamiliesInstalled:(unsigned long long *)a0 andRemovedCount:(unsigned long long *)a1 andProfileFontsCount:(unsigned long long *)a2;
+ (void)unregisterAndRemoveFontFilesForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_removeAllUserFonts;
+ (struct { unsigned int x0[8]; })auditToken;
+ (void)suspendFontProvider:(id)a0;
+ (id)registeredFontsInfoForIdentifier:(id)a0 enabled:(BOOL)a1 appInfo:(id)a2;
+ (void)updateAppInfo:(id)a0 forIdentifier:(id)a1;
+ (id)identifierFromDirectoryName:(id)a0;
+ (id)directoryNameFromIdentifier:(id)a0;
+ (id)registeredFontsForIdentifier:(id)a0 enabled:(BOOL)a1;
+ (void)installFonts:(id)a0 forIdentifier:(id)a1 enabled:(BOOL)a2 appInfo:(id)a3 completionHandler:(id /* block */)a4;
+ (id)suspendedFontProviders;
+ (void)synchronizeProfileFonts:(id /* block */)a0;
+ (void)synchronizeFontProviders;
+ (void)deleteAppDialogWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (id)profileFontsInfo;
+ (void)uninstallFonts:(id)a0 forIdentifier:(id)a1 appInfo:(id)a2 completionHandler:(id /* block */)a3;
+ (id)_UserFontManagerConnection;

@end
