@interface HUAccessoryDetailInfoListModuleController : HUItemModuleController {
    void /* unknown type, empty encoding */ delegate;
}

- (id)init:(id)a0;
- (void).cxx_destruct;
- (id)initWithModule:(id)a0;
- (unsigned long long)didSelectItem:(id)a0;
- (void)accessoryButtonTappedForItem:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;

@end
