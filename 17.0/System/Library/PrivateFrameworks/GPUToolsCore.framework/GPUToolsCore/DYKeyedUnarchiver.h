@class NSSet;

@interface DYKeyedUnarchiver : NSObject

@property (class, readonly) NSSet *captureArchiveClassSet;
@property (class, readonly) NSSet *graphicsAPIInfosClassSet;
@property (class, readonly) NSSet *allClassSet;

+ (id)unarchivedObjectOfClass:(Class)a0 fromData:(id)a1 error:(id *)a2;
+ (id)unarchivedObjectOfClasses:(id)a0 fromData:(id)a1 error:(id *)a2;
+ (void)registerRuntimeClass:(id)a0 withSet:(id)a1;

@end
