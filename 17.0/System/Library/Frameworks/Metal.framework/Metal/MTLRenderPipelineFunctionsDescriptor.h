@class NSArray;

@interface MTLRenderPipelineFunctionsDescriptor : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *objectAdditionalBinaryFunctions;
@property (copy, nonatomic) NSArray *meshAdditionalBinaryFunctions;
@property (copy, nonatomic) NSArray *vertexAdditionalBinaryFunctions;
@property (copy, nonatomic) NSArray *fragmentAdditionalBinaryFunctions;
@property (copy, nonatomic) NSArray *tileAdditionalBinaryFunctions;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
