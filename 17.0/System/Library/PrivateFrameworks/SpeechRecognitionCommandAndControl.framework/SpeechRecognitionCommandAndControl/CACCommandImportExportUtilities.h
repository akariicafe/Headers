@interface CACCommandImportExportUtilities : NSObject

+ (id)exportToURL:(id)a0;
+ (id)defaultExportURL;
+ (id)importFromURL:(id)a0;
+ (BOOL)isSupportedCommandType:(id)a0;
+ (unsigned long long)maximumNumberOfAllowedEntries;

@end
