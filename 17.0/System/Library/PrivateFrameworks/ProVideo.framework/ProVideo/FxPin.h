@interface FxPin : NSObject {
    struct FxPinPriv { id x0; id x1; id x2; id x3; id x4; id x5; int x6; Class x7; } *_priv;
}

- (Class)valueClass;
- (int)direction;
- (id)init;
- (void)dealloc;
- (int)index;
- (id)properties;
- (id)uuid;
- (id)stream;
- (void)setUUID:(id)a0;
- (id)description;
- (void)setDirection:(int)a0;
- (void)setDisplayName:(id)a0;
- (void)setValueClass:(Class)a0;
- (id)displayName;
- (void)setDescription:(id)a0;
- (id)parentPlug;
- (void)setParentPlug:(id)a0;

@end
