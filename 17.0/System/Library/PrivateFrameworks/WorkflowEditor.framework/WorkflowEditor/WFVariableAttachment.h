@class UIFont, UIColor, NSString, WFSlotIdentifier, WFVariable;

@interface WFVariableAttachment : NSTextAttachment <WFVariableDelegate, NSCopying>

@property (readonly, nonatomic) WFVariable *variable;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isEmphasized) BOOL emphasized;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIFont *surroundingTextFont;
@property (copy, nonatomic) NSString *overrideVariableName;
@property (copy, nonatomic) WFSlotIdentifier *containingSlotIdentifier;

- (id)accessibilityLabel;
- (void)dealloc;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1 characterIndex:(unsigned long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (id)description;
- (void).cxx_destruct;
- (id)initWithVariable:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)variableName;
- (void)variableDidChange:(id)a0;
- (unsigned long long)currentControlState;

@end
