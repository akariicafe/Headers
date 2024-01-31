@class NSOrderedSet, NSString;

@interface CFXEffectType : NSObject

@property (retain, nonatomic) NSOrderedSet *effects;
@property (nonatomic) int jtEffectType;
@property (copy, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *identifier;

+ (void)initialize;
+ (id)effectTypeWithIdentifier:(id)a0;
+ (id)effectTypeIdentifiers;

- (id)initWithIdentifier:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
