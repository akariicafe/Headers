@class NSString;

@interface _DYNSKVCMutableCollectionPropertyBinding : NSObject

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *underlyingIvarName;

- (void)dealloc;
- (id)initWithKey:(id)a0 underlyingIvarName:(id)a1;
- (id)underlyingIvarValueForObject:(id)a0;

@end
