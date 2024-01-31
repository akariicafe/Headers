@interface CAMFlashCompromisedInstructionLabel : CAMInstructionLabel

@property (nonatomic) unsigned long long compromise;

+ (id)_textForCompromise:(unsigned long long)a0;
+ (BOOL)shouldDisplayInstructionForCompromise:(unsigned long long)a0;

- (id)_textColor;
- (void)_updateTextWithPriorCompromise:(unsigned long long)a0;
- (id)_symbolPrefixName;

@end
