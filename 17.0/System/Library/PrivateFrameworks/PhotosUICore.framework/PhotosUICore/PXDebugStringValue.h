@class NSString;

@interface PXDebugStringValue : PXDebugValue {
    unsigned long long _highlightStyle;
}

@property (readonly, nonatomic) NSString *string;

- (void).cxx_destruct;
- (unsigned long long)highlightStyle;
- (id)initWithLabel:(id)a0 highlightedScore:(double)a1;
- (id)initWithLabel:(id)a0 boolValue:(BOOL)a1 positiveValue:(BOOL)a2 positiveHighlighted:(BOOL)a3 negativeHighlighted:(BOOL)a4;
- (id)initWithLabel:(id)a0 doubleValue:(double)a1;
- (id)initWithLabel:(id)a0 integerValue:(long long)a1;
- (id)initWithLabel:(id)a0 string:(id)a1 highlightStyle:(unsigned long long)a2;

@end
