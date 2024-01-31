@interface WebCoreStatistics : NSObject

+ (void)emptyCache;
+ (id)statistics;
+ (int)cachedPageCount;
+ (unsigned long long)javaScriptInterpretersCount;
+ (void)garbageCollectJavaScriptObjects;
+ (unsigned long long)iconRecordCount;
+ (unsigned long long)javaScriptProtectedObjectsCount;
+ (int)autoreleasedPageCount;
+ (unsigned long long)cachedFontDataCount;
+ (unsigned long long)cachedFontDataInactiveCount;
+ (int)cachedFrameCount;
+ (void)garbageCollectJavaScriptObjectsOnAlternateThreadForDebugging:(BOOL)a0;
+ (unsigned long long)glyphPageCount;
+ (unsigned long long)iconPageURLMappingCount;
+ (unsigned long long)iconRetainedPageURLCount;
+ (unsigned long long)iconsWithDataCount;
+ (unsigned long long)javaScriptGlobalObjectsCount;
+ (unsigned long long)javaScriptNoGCAllowedObjectsCount;
+ (id)javaScriptObjectTypeCounts;
+ (unsigned long long)javaScriptObjectsCount;
+ (unsigned long long)javaScriptProtectedGlobalObjectsCount;
+ (id)javaScriptProtectedObjectTypeCounts;
+ (unsigned long long)javaScriptReferencedObjectsCount;
+ (id)javaScriptRootObjectClasses;
+ (id)javaScriptRootObjectTypeCounts;
+ (id)memoryStatistics;
+ (void)purgeInactiveFontData;
+ (void)returnFreeMemoryToSystem;
+ (void)setCacheDisabled:(BOOL)a0;
+ (void)setJavaScriptGarbageCollectorTimerEnabled:(BOOL)a0;
+ (void)setShouldPrintExceptions:(BOOL)a0;
+ (BOOL)shouldPrintExceptions;
+ (void)startIgnoringWebCoreNodeLeaks;
+ (void)stopIgnoringWebCoreNodeLeaks;

@end
