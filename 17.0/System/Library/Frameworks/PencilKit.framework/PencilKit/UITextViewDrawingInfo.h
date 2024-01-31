@class PKTiledView, UITextView, NSMutableDictionary;
@protocol UITextViewDrawingDelegate;

@interface UITextViewDrawingInfo : NSObject {
    BOOL _addBottomPadding;
    BOOL _rulerEnabled;
    UITextView *_textView;
    PKTiledView *_tiledView;
    id<UITextViewDrawingDelegate> _delegate;
    Class _drawingClass;
    NSMutableDictionary *_cachedViewProviders;
}

- (void).cxx_destruct;

@end
