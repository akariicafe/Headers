@class NSString;
@protocol EXBDisplayConfigurationBuilding;

@interface EXBSeededDisplayConfigurationBuilder : NSObject <EXBDisplayConfigurationBuilding> {
    unsigned long long _seed;
    id<EXBDisplayConfigurationBuilding> _builder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setUniqueIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)buildConfigurationWithError:(out id *)a0;
- (void)setCloningSupported:(BOOL)a0;
- (void)setCurrentMode:(id)a0 preferredMode:(id)a1 otherModes:(id)a2;
- (void)setExpectsSecureRendering;
- (void)setOverscanned:(BOOL)a0 compensation:(long long)a1 safeRatio:(struct CGSize { double x0; double x1; })a2;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0 nativeBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)setUIKitMainLike;
- (id)initWithSeed:(unsigned long long)a0 builder:(id)a1;

@end
