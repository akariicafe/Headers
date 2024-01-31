@interface VKMetrics : NSObject {
    struct unique_ptr<md::LabelMetrics, std::default_delete<md::LabelMetrics>> { struct __compressed_pair<md::LabelMetrics *, std::default_delete<md::LabelMetrics>> { struct LabelMetrics *__value_; } __ptr_; } _labelMetrics;
}

- (id)initWithDescriptor:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectForItem:(unsigned char)a0 text:(id)a1 locale:(id)a2;

@end
