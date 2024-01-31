@class UIView;
@protocol PKPGSVSectionSubheaderView;

@interface PKPGSVSectionSubheaderContext : NSObject {
    UIView<PKPGSVSectionSubheaderView> *_view;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _margins;
}

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
