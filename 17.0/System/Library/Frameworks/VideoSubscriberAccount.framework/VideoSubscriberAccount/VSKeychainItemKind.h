@class NSString, NSDictionary, NSArray;

@interface VSKeychainItemKind : NSObject <NSCopying>

@property (copy, nonatomic) NSString *itemClassName;
@property (nonatomic) struct __CFString { } *secItemClass;
@property (readonly, copy, nonatomic) NSDictionary *attributesByName;
@property (readonly, copy, nonatomic) NSDictionary *attributesBySecItemAttributeKey;
@property (copy, nonatomic) NSArray *properties;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
