@interface TSTTableSortRule : NSObject <NSCopying>

@property (readonly, nonatomic) struct TSUModelColumnOrRowIndex { unsigned int _index; } baseIndex;
@property (readonly, nonatomic) int direction;

+ (id)ruleWithBaseIndex:(struct TSUModelColumnOrRowIndex { unsigned int x0; })a0 direction:(int)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeToArchive:(void *)a0;
- (id)initFromArchive:(const void *)a0;
- (id)initWithBaseIndex:(struct TSUModelColumnOrRowIndex { unsigned int x0; })a0 direction:(int)a1;
- (id)ruleByChangingBaseIndexTo:(struct TSUModelColumnOrRowIndex { unsigned int x0; })a0;
- (id)ruleByChangingDirectionTo:(int)a0;

@end
