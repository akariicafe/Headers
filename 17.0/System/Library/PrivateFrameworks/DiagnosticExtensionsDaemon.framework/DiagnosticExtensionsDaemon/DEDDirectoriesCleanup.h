@interface DEDDirectoriesCleanup : NSObject

+ (BOOL)isDryRun;
+ (void)run;
+ (BOOL)shouldRun;
+ (void)didRun;

@end
