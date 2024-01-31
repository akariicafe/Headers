@interface ConfigChangeLogs : NSObject

+ (id)configChangeLogFiles;
+ (id)configChangeLogFilesIncludingAllKeys:(BOOL)a0 orSpecificKeys:(id)a1;
+ (int)writeConfigChangeLog:(struct _BaseStation { } *)a0;

@end
