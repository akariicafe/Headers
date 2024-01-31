@interface DEUpdater : NSObject

+ (BOOL)putManifest:(id)a0 src:(id)a1 contents:(id)a2 summary:(id)a3 overrides:(id)a4;
+ (BOOL)putManifest:(id)a0 src:(id)a1 contents:(id)a2 summary:(id)a3 overrides:(id)a4 dirDownloadType:(unsigned long long)a5;
+ (id)summarize:(id)a0 filter:(id)a1;

@end
