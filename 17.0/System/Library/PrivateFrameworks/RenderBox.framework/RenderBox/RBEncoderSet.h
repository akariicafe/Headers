@interface RBEncoderSet : NSObject {
    struct refcounted_ptr<RB::Encoder::FontSet> { struct FontSet *_p; } _font_set;
    BOOL _final;
}

- (id)init;
- (void)commit;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addDisplayList:(id)a0;

@end
