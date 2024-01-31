@interface FigAlternateObjCVideoLayoutAttributes : FigKVCInspectable {
    struct OpaqueCMTagCollection { } *_tagCollection;
}

@property (readonly, nonatomic) unsigned long long packingType;
@property (readonly, nonatomic) unsigned long long projectionType;
@property (readonly, nonatomic) unsigned long long stereoViewComponents;

- (void)dealloc;
- (id)initWithTagCollection:(struct OpaqueCMTagCollection { } *)a0;

@end
