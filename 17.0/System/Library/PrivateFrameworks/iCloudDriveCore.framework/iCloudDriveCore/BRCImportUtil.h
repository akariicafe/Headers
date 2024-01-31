@interface BRCImportUtil : NSObject

+ (void)forceIngestionForItemID:(id)a0 completionHandler:(id /* block */)a1;
+ (BOOL)isFileNameIgnoredForSync:(id)a0 isRegFile:(BOOL)a1;
+ (BOOL)reimportItemsBelowItemWithIdentifier:(id)a0 error:(id *)a1;
+ (void)requestModificationOfItemIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (BOOL)shouldFileIDBeIgnoredAsNonMigrated:(id)a0 deviceID:(id)a1 isRegFile:(BOOL)a2 rowid:(id)a3 isBusyDate:(BOOL *)a4 isIgnoredFromSync:(BOOL *)a5;

@end
