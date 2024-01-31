@interface BMDSLJSONArchiver : NSCoder

+ (id)archiveCompatibleObjectWithObject:(id)a0 options:(unsigned long long)a1 userInfo:(id)a2;
+ (id)archivedStringWithDSL:(id)a0;
+ (id)archivedDataWithObject:(id)a0;
+ (void)registerJSONTransformers;
+ (id)archivedStringWithObject:(id)a0;
+ (id)archivedDataWithDSL:(id)a0;

@end
