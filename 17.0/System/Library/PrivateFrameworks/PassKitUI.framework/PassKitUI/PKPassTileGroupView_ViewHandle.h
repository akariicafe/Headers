@class PKPassTileView;

@interface PKPassTileGroupView_ViewHandle : NSObject {
    BOOL _initialLayout;
    PKPassTileView *_view;
    struct CGSize { double width; double height; } _size;
}

- (id)init;
- (void).cxx_destruct;

@end
