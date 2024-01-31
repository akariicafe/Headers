@class IKMutableArray;

@interface IKCSSSelectorList : NSObject <NSCopying>

@property (readonly, nonatomic) IKMutableArray *selectors;

- (id)init;
- (unsigned long long)count;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addSelector:(id)a0;
- (id)firstSelector;
- (id)lastSelector;
- (id)selectorAtIndex:(unsigned long long)a0;

@end
