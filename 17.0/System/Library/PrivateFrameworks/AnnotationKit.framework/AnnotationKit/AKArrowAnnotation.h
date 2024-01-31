@class NSDictionary, NSString, NSTextStorage;

@interface AKArrowAnnotation : AKShapeAnnotation <AKTextAnnotationProtocol>

@property struct CGPoint { double x; double y; } startPoint;
@property struct CGPoint { double x; double y; } endPoint;
@property struct CGPoint { double x; double y; } midPoint;
@property unsigned long long arrowHeadStyle;
@property (retain) NSTextStorage *annotationText;
@property (copy) NSDictionary *typingAttributes;
@property unsigned long long maximumNumberOfCharacters;
@property BOOL isEditingText;
@property BOOL textIsFixedWidth;
@property BOOL textIsFixedHeight;
@property BOOL textIsClipped;
@property BOOL shouldUsePlaceholderText;
@property (getter=isHighlighted) BOOL highlighted;
@property NSString *textContentType;
@property unsigned long long formContentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)a0;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)displayName;
- (id)initWithCoder:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitTestBounds;
- (void)translateBy:(struct CGPoint { double x0; double x1; })a0;
- (id)keysForValuesToObserveForUndo;
- (void)adjustModelToCompensateForOriginalExif;
- (void)flattenModelExifOrientation:(long long)a0 withModelSize:(struct CGSize { double x0; double x1; })a1;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;

@end
