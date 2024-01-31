@class NSString, NSMutableDictionary;

@interface HREIdentifierBuilder : NSObject

@property (readonly, nonatomic) NSMutableDictionary *keyValues;
@property (retain, nonatomic) NSString *baseIdentifier;
@property (readonly, nonatomic) NSString *composedString;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBaseIdentifier:(id)a0;
- (id)makeComposedString;

@end
