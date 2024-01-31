@interface BLTReferenceCountedFile : NSObject

+ (BOOL)retain:(id)a0;
+ (id)metadataForFile:(id)a0;
+ (BOOL)release:(id)a0;
+ (BOOL)retain:(id)a0 fileData:(id)a1;
+ (BOOL)writeRetainCount:(long long)a0 oldMetadata:(id)a1 to:(id)a2;

@end
