@class _HKCFGNodeCache, NSScanner;

@interface _HKCFGParseContext : NSObject

@property (readonly, nonatomic) NSScanner *scanner;
@property (readonly, nonatomic) unsigned long long lengthAllowance;
@property (readonly, nonatomic) unsigned long long recursiveDepth;
@property (readonly, nonatomic) _HKCFGNodeCache *cache;

- (void)increaseLengthAllowance:(unsigned long long)a0;
- (void)decrementRecursiveDepth;
- (void)incrementRecursiveDepth;
- (void).cxx_destruct;
- (void)decreaseLengthAllowance:(unsigned long long)a0;
- (id)initWithScanner:(id)a0 lengthAllowance:(unsigned long long)a1;

@end
