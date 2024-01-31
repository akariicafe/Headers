@interface FigAlternateObjCVideoImmersiveAttributes : FigKVCInspectable {
    struct OpaqueCMTagCollection { } *_tagCollection;
}

@property (readonly, nonatomic) long long packing;
@property (readonly, nonatomic) long long channelLayout;
@property (readonly, nonatomic) long long projection;

- (void)dealloc;
- (id)initWithTagCollection:(struct OpaqueCMTagCollection { } *)a0;

@end
