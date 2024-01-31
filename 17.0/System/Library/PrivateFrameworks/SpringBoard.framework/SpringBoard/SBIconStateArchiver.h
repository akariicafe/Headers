@interface SBIconStateArchiver : SBHIconStateArchiver

+ (id)modernizeRootArchive:(id)a0;
+ (id)rootArchiveFromITunesRepresentation:(id)a0;
+ (id)_iTunesIconCellForCell:(id)a0 preApex:(BOOL)a1 pending:(BOOL)a2 iconSource:(id)a3;
+ (id)_modernIconCellForCell:(id)a0 allowFolders:(BOOL)a1;
+ (id)_modernIconListForList:(id)a0 allowFolders:(BOOL)a1;
+ (id)_iTunesDictionaryForLeafIcon:(id)a0 withIdentifier:(id)a1;
+ (id)_modernIconListsForLists:(id)a0 allowFolders:(BOOL)a1;
+ (id)_migrateLeafIdentifierIfNecessary:(id)a0;
+ (id)_iTunesIconListsForLists:(id)a0 preApex:(BOOL)a1 pending:(BOOL)a2 iconSource:(id)a3;
+ (id)iTunesRepresentationFromRootArchive:(id)a0 preApex:(BOOL)a1 pending:(BOOL)a2 iconSource:(id)a3;
+ (id)_iTunesIconListForList:(id)a0 preApex:(BOOL)a1 pending:(BOOL)a2 iconSource:(id)a3;
+ (id)_iTunesDictionaryForLeafIdentifier:(id)a0;

@end
