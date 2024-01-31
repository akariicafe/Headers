@class OADFill, OADTableCellBorderStyle;

@interface OADTableCellStyle : NSObject {
    OADTableCellBorderStyle *mBorderStyle;
    OADFill *mFill;
}

+ (id)defaultStyle;
+ (id)defaultFill;

- (id)description;
- (void).cxx_destruct;
- (void)setBorderStyle:(id)a0;
- (id)borderStyle;
- (id)fill;
- (void)setFill:(id)a0;
- (id)shallowCopy;
- (void)applyOverridesFrom:(id)a0;

@end
