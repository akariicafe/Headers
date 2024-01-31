@class NSString;

@interface OBTemplateLabel : UILabel

@property (copy, nonatomic) NSString *displayText;
@property (copy, nonatomic) NSString *symbolName;

- (id)init;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateTextAlignment;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (void)setTitleTrailingSymbol:(id)a0;

@end
