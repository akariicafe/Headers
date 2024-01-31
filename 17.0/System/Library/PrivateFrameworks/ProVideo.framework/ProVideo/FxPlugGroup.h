@interface FxPlugGroup : NSObject {
    struct FxPlugGroupPriv { id x0; id x1; } *_priv;
}

+ (id)fxPlugGroupWithDescriptor:(id)a0;

- (id)initWithDescriptor:(id)a0;
- (void)dealloc;
- (unsigned int)count;
- (id)descriptor;
- (void)addFxPlugDescriptor:(id)a0;
- (id)fxPlugDescriptorAtIndex:(int)a0;

@end
