@interface LSAltIconManager : NSObject

+ (id)sharedInstance;

- (id)init;
- (id)_getPreferredIconNameForIdentifier:(id)a0;
- (void)clearAlternateNameForBundleIdentifier:(id)a0 validationDictionary:(id)a1;
- (BOOL)isValidAlternateIcon:(id)a0 forIconsDict:(id)a1;
- (void)_setPreferredIconName:(id)a0 forIdentifier:(id)a1;
- (id)alternateIconNameForIdentifier:(id)a0 error:(id *)a1;
- (BOOL)_setAlternateIconName:(id)a0 forIdentifier:(id)a1 withIconsDictionary:(id)a2 error:(id *)a3;
- (void)setAlternateIconName:(id)a0 forIdentifier:(id)a1 iconsDictionary:(id)a2 reply:(id /* block */)a3;

@end
