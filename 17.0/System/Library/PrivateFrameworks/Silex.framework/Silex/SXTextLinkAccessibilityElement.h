@class NSURL, NSString, SXTextTangierFlowRep;

@interface SXTextLinkAccessibilityElement : UIAccessibilityElement

@property (weak, nonatomic) SXTextTangierFlowRep *parentRep;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rangeInParentRep;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *displayText;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)initWithHyperlinkField:(id)a0 parentRep:(id)a1;

@end
