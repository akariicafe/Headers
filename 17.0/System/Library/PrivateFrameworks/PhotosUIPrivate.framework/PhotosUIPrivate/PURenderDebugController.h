@interface PURenderDebugController : NSObject

+ (id)shareSheetViewController;
+ (id)debugFilesDirectory;
+ (void)deleteDebugDirectory;
+ (id)getDebugFiles;
+ (id)listDebugFilesViewController;
+ (void)setCoreImageDebugMode:(BOOL)a0 dumpInputs:(BOOL)a1 dumpOutputs:(BOOL)a2 dumpIntermediates:(BOOL)a3 dumpTiming:(BOOL)a4;

@end
