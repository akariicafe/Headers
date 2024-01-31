@class NSString, NSArray, NSMutableDictionary;

@interface HFLocalizableStringKey : NSObject <NSCopying>

@property (copy, nonatomic) id /* block */ stringLocalizationBlock;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSArray *argumentKeys;
@property (readonly, nonatomic) NSMutableDictionary *argumentMap;

+ (id)stringKeyWithKey:(id)a0 argumentKeys:(id)a1;
+ (id)stringKeyWithKey:(id)a0 arguments:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithKey:(id)a0 argumentKeys:(id)a1;
- (id)localizedStringWithArgumentBlock:(id /* block */)a0;

@end
