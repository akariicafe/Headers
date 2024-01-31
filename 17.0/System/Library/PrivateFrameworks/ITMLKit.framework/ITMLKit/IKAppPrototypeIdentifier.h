@class NSString, NSDictionary;

@interface IKAppPrototypeIdentifier : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *selector;
@property (readonly, copy, nonatomic) NSDictionary *groupingValues;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 selector:(id)a1 groupingValues:(id)a2;

@end
