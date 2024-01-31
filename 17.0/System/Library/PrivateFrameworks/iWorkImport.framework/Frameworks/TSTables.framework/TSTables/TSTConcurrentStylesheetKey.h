@class TSSStyle, TSSPropertyMap;

@interface TSTConcurrentStylesheetKey : NSObject

@property (retain, nonatomic) TSSStyle *style;
@property (retain, nonatomic) TSSPropertyMap *propertyMap;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithStyle:(id)a0 andPropertyMap:(id)a1;

@end
