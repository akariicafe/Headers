@class _TtC21DocumentUnderstanding13DUDisplayInfo;

@interface DUDisplayInfoObjC : NSObject {
    _TtC21DocumentUnderstanding13DUDisplayInfo *_underlying;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameInWindow;
@property (nonatomic) struct CGPoint { double x0; double x1; } absoluteOriginOnScreen;
@property (nonatomic) BOOL isOnScreen;

- (id)init;
- (void).cxx_destruct;

@end
