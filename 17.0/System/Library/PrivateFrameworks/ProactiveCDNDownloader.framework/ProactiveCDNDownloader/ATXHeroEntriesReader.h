@interface ATXHeroEntriesReader : NSObject

+ (BOOL)validateReader:(id)a0 pbEntries:(id)a1;
+ (id)loadAppAndClipEntriesFromFileURL:(id)a0;
+ (id)loadAppAndClipEntriesFromData:(id)a0;
+ (id)appAndClipEntryFromPbEntries:(id)a0 position:(unsigned long long)a1;

@end
