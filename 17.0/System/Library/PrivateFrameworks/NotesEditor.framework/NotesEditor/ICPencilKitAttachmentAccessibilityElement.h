@class ICInlineCanvasTextAttachment, NSArray, ICBaseTextView, NSString, UIView;

@interface ICPencilKitAttachmentAccessibilityElement : UIAccessibilityElement <ICAccessibilityRotorSearchElement>

@property (retain, nonatomic) NSArray *cachedResizeHandleElements;
@property (weak, nonatomic) ICInlineCanvasTextAttachment *textAttachment;
@property (weak, nonatomic) ICBaseTextView *textView;
@property (readonly, nonatomic) UIView *attachmentDrawingView;
@property (readonly, nonatomic) NSArray *resizeHandleElements;
@property (readonly, nonatomic) NSArray *supportedRotorTypes;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } textRangeInNote;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)isSelected;
- (id)accessibilityCustomActions;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityActivate;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityContainer;
- (id)accessibilityCustomRotors;
- (id)accessibilityDragSourceDescriptors;
- (id)accessibilityValue;
- (id)_accessibilityParentForFindingScrollParent;
- (id)initWithTextAttachment:(id)a0 textView:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeInTextStorage;
- (BOOL)selectTextRangeAction;
- (BOOL)showingResizeHandles;

@end
