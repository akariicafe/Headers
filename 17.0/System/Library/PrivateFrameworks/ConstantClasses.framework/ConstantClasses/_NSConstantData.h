@interface _NSConstantData : NSData

+ (id)alloc;

- (id)retain;
- (void)dealloc;
- (unsigned long long)retainCount;
- (unsigned long long)length;
- (const void *)bytes;
- (oneway void)release;

@end
