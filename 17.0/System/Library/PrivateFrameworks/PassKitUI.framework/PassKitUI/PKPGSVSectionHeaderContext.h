@class NSArray, UIView;
@protocol PKPGSVSectionHeaderView;

@interface PKPGSVSectionHeaderContext : NSObject {
    double _containerWidth;
    struct CGSize { double width; double height; } _cachedHeaderViewSize;
    UIView<PKPGSVSectionHeaderView> *_headerView;
    NSArray *_subheaderContexts;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _headerMargins;
}

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
