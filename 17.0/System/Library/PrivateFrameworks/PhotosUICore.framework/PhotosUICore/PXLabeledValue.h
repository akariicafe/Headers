@class NSString;
@protocol PXLabeledValueType;

@interface PXLabeledValue : NSObject <NSCopying>

@property (class, readonly) PXLabeledValue *separatorLabeledValue;

@property (readonly, nonatomic) id<PXLabeledValueType> value;
@property (readonly, nonatomic) NSString *localizedLabel;
@property (readonly, nonatomic) NSString *localizedBadgeLabel;
@property (readonly, nonatomic, getter=isSeparator) BOOL separator;

- (BOOL)isEqualToLabeledValue:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initSeparator;
- (id)initWithValue:(id)a0 localizedLabel:(id)a1;
- (id)labeledValueWithLocalizedBadgeLabel:(id)a0;

@end
