@class UIColor, NSString;

@interface AKStrokedAnnotation : AKAnnotation <AKStrokedAnnotationProtocol>

@property double strokeWidth;
@property (retain) UIColor *strokeColor;
@property (getter=isDashed) BOOL dashed;
@property long long brushStyle;
@property BOOL hasShadow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)a0;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)displayName;
- (id)initWithCoder:(id)a0;
- (id)keysForValuesToObserveForUndo;
- (id)keysForValuesToObserveForRedrawing;

@end
