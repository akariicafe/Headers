@class NSString;

@interface PKStackedTextItem : NSObject

@property (readonly, copy, nonatomic) NSString *groupingIdentifier;
@property (readonly, nonatomic) unsigned long long numberOfContentRows;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *primary;
@property (copy, nonatomic) NSString *secondary;
@property (copy, nonatomic) NSString *tertiary;
@property (nonatomic, getter=isSignificantPrimary) BOOL significantPrimary;
@property (nonatomic, getter=isDeemphasizedPrimary) BOOL deemphasizedPrimary;
@property (nonatomic, getter=isStrikethroughPrimary) BOOL strikethroughPrimary;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithNumberOfContentRows:(unsigned long long)a0 groupingIdentifier:(id)a1;

@end
