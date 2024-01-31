@protocol HKNumberFormatter;

@interface HKDisplayTypeValueFormatter : NSObject {
    id<HKNumberFormatter> _numberFormatter;
}

- (void).cxx_destruct;
- (id)stringFromValue:(id)a0 displayType:(id)a1 unitController:(id)a2;
- (id)attributedStringFromValue:(id)a0 displayType:(id)a1 unitController:(id)a2 valueFont:(id)a3 unitFont:(id)a4;
- (id)attributedStringFromValue:(id)a0 displayType:(id)a1 unitController:(id)a2 valueFont:(id)a3 unitFont:(id)a4 formatForChart:(BOOL)a5;
- (id)attributedStringFromValue:(id)a0 displayType:(id)a1 unitController:(id)a2 valueFont:(id)a3 unitFont:(id)a4 formatForChart:(BOOL)a5 unitFormatString:(id)a6;
- (id)initWithNumberFormatter:(id)a0;

@end
