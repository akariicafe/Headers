@class NSString;

@interface ISURLCacheConfiguration : NSObject <NSCopying>

@property (nonatomic) unsigned long long diskCapacity;
@property (nonatomic) unsigned long long memoryCapacity;
@property (copy, nonatomic) NSString *persistentIdentifier;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
