@class NSString, UIColor;

@interface MUTextFactoidViewModel : MUFactoidViewModel {
    BOOL _shouldReverseForRTLLayout;
    NSString *_symbolName;
    NSString *_titleString;
    NSString *_valueString;
    UIColor *_symbolColor;
    UIColor *_darkSymbolColor;
}

- (id)symbolColor;
- (id)symbolName;
- (void).cxx_destruct;
- (id)valueString;
- (id)titleString;
- (id)darkSymbolColor;
- (id)buildSymbolWithFont:(id)a0;
- (id)initWithTitle:(id)a0 valueString:(id)a1 symbolName:(id)a2 symbolColor:(id)a3 darkSymbolColor:(id)a4 shouldReverseForRTLLayout:(BOOL)a5;
- (BOOL)shouldReverseForRTLLayout;

@end
