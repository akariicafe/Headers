@class NSSet;

@interface WBSSavedPasswordStore : WBSSavedAccountStore

@property (readonly, nonatomic) NSSet *highLevelDomainsOfAllSavedPasswordsExcludingNeverSaveMarkerPasswords;

@end
