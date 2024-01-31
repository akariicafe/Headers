@class NSString;

@interface CRListItemMarker : NSObject

@property (retain) NSString *stringValue;
@property struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property struct _NSRange { unsigned long long location; unsigned long long length; } itemizingComponentRange;
@property long long type;

- (long long)integerValue;
- (void).cxx_destruct;
- (BOOL)_canCompositeDecimalBeSucceededByCompositeDecimal:(id)a0;
- (long long)_valueFromDecimal;
- (long long)_valueFromDecorativeDecimal;
- (long long)_valueFromLowercaseLatin;
- (long long)_valueFromUppercaseLatin;
- (id)_valuesFromCompositeDecimal;
- (BOOL)canBeSucceededByMarker:(id)a0;
- (id)initWithType:(long long)a0 stringValue:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 itemizingComponentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;

@end
