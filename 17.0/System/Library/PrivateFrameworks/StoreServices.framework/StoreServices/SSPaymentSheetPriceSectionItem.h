@class NSString;

@interface SSPaymentSheetPriceSectionItem : NSObject <NSCopying>

@property (copy) NSString *label;
@property (copy) NSString *price;

- (id)initWithDictionary:(id)a0;
- (id)initWithXPCEncoding:(id)a0;
- (void).cxx_destruct;
- (id)copyXPCEncoding;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_parseDictionary:(id)a0 withCaseControl:(BOOL)a1;

@end
