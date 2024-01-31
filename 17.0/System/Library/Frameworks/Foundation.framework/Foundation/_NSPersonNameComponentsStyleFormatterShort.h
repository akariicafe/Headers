@class _NSPersonNameComponentsStyleFormatter, _NSPersonNameComponentsStyleFormatterShortVariantGeneral;

@interface _NSPersonNameComponentsStyleFormatterShort : _NSPersonNameComponentsStyleFormatter {
    long long _shortNameFormat;
    _NSPersonNameComponentsStyleFormatterShortVariantGeneral *_variantFormatter;
    _NSPersonNameComponentsStyleFormatter *_subFormatter;
    BOOL _forceShortNameEnabled;
}

@property long long shortNameFormat;
@property (readonly) _NSPersonNameComponentsStyleFormatterShortVariantGeneral *variantFormatter;
@property (retain) _NSPersonNameComponentsStyleFormatter *subFormatter;
@property BOOL forceShortNameEnabled;

- (id)fallbackStyleFormatter;
- (void)dealloc;
- (id)keysOfInterest;
- (BOOL)isEnabled;
- (id)_formattedStringFromOrderedKeys:(id)a0 components:(id)a1 attributesByRange:(id)a2;
- (id)abbreviatedKeys;
- (id)initWithMasterFormatter:(id)a0;
- (id)orderedKeysOfInterest;

@end
