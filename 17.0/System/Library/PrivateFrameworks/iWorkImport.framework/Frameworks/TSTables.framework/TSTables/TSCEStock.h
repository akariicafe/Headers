@class NSString, NSDate, TSUSparseArray;

@interface TSCEStock : NSObject

@property (readonly, nonatomic) TSUSparseArray *attributes;
@property (retain, nonatomic) NSString *symbol;
@property (retain, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *dateString;
@property (readonly, nonatomic) BOOL up;

+ (id)kNilStockAttributeString;
+ (id)nativeLocaleIdentifier;
+ (id)stockFromArchive:(const void *)a0;
+ (id)stockWithAttributes:(id)a0;

- (id)initWithSymbol:(id)a0;
- (id)init;
- (id)initWithAttributes:(id)a0;
- (id)valueForAttribute:(long long)a0;
- (void).cxx_destruct;
- (void)encodeToArchive:(void *)a0;
- (id)initFromArchive:(const void *)a0;
- (id)abbreviatedNumberForAttribute:(long long)a0 atLocale:(id)a1;
- (void)p_populateAttributesFromArray:(id)a0;
- (void)p_setFormattedAttr:(long long)a0 fromArray:(id)a1;
- (id)valueForAttribute:(long long)a0 forLocale:(id)a1;

@end
