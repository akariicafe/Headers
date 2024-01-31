@interface ICDefaultAccountUtilities : NSObject

+ (void)setDefaultAccountIdentifier:(id)a0;
+ (id)defaultAccount;
+ (id)accountToAddNewNoteWithTagSelection:(id)a0 modernContext:(id)a1;
+ (id)defaultAccountWithHTMLNoteContext:(id)a0;
+ (id)defaultFolderWithHTMLNoteContext:(id)a0;

@end
