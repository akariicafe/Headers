@class NSString, NSSet, TSTTableStyleNetwork;

@interface TSTTableStylePreset : TSPObject <TSSPreset, TSSStyleClient, TSKModel> {
    TSTTableStyleNetwork *_styleNetwork;
}

@property (nonatomic) unsigned long long tempUpgradePresetID;
@property (readonly, nonatomic) unsigned long long presetID;
@property (copy, nonatomic) TSTTableStyleNetwork *styleNetwork;
@property (nonatomic) BOOL tableHasStrongOwnership;
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSSet *referencedStyles;

+ (BOOL)needsObjectUUID;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (id)p_documentRoot;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)a0;
- (id)swatchImage;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)initWithStyleNetwork:(id)a0;

@end
