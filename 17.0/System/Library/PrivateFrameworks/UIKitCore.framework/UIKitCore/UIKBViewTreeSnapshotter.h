@class NSMutableArray, UIView;

@interface UIKBViewTreeSnapshotter : NSObject {
    NSMutableArray *_inputViews;
}

@property (readonly, nonatomic) UIView *snapshotView;

+ (id)snapshotterForKeyboardView:(id)a0 afterScreenUpdates:(BOOL)a1;

- (void)dealloc;
- (void).cxx_destruct;

@end
