@class NSString, _UITextLayoutControllerBase, NSDictionary;
@protocol UICoordinateSpace, _UITextLayoutController;

@interface _UITextLayoutBaselineCalculator : NSObject <_UITextLayoutBaselineCalculator> {
    _UITextLayoutControllerBase<_UITextLayoutController> *_textLayoutController;
    NSDictionary *_typingAttributes;
    id<UICoordinateSpace> _coordinateSpace;
    double _scale;
    BOOL _usesLineFragmentOrigin;
    struct CGPoint { double x; double y; } _fallbackTextContainerOrigin;
}

@property (readonly, nonatomic) double firstBaselineOffsetFromTop;
@property (readonly, nonatomic) double lastBaselineOffsetFromBottom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
