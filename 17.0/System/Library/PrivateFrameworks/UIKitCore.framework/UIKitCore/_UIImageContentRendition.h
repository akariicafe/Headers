@class _UIImageContentRenditionResult, UIColor, _UIImageContentRBSymbolConfiguration;

@interface _UIImageContentRendition : NSObject {
    struct CGImage { } *_CGImage;
    _UIImageContentRBSymbolConfiguration *_rbSymbolConfig;
    _UIImageContentRenditionResult *_result;
    UIColor *_multiplyColor;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
