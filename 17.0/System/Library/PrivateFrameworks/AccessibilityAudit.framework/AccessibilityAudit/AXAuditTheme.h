@interface AXAuditTheme : NSObject

+ (id)sharedTheme;

- (id)backgroundColorForHighlightStyle:(unsigned long long)a0;
- (id)borderColorForHighlightStyle:(unsigned long long)a0;
- (double)borderWidthForHighlightStyle:(unsigned long long)a0;

@end
