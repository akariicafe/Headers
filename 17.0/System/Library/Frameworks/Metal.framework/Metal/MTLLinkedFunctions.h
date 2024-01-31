@class NSArray, NSDictionary;

@interface MTLLinkedFunctions : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *functions;
@property (copy, nonatomic) NSArray *binaryFunctions;
@property (copy, nonatomic) NSDictionary *groups;
@property (copy, nonatomic) NSArray *privateFunctions;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;
+ (id)linkedFunctions;

- (void)reset;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
