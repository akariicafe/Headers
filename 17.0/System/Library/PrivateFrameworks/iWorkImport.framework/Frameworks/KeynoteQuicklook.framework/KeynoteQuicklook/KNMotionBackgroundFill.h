@class NSSet, KNMotionBackgroundStyle, NSString, TSDFill;

@interface KNMotionBackgroundFill : TSDFill <TSSStyleClient>

@property (retain, nonatomic) KNMotionBackgroundStyle *motionBackgroundStyle;
@property (retain, nonatomic) TSDFill *alternateFillForDowngrading;
@property (readonly, nonatomic) NSSet *referencedStyles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)referenceColor;
- (long long)fillType;
- (void)paintPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (void)paintRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)paintPath:(struct CGPath { } *)a0 naturalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContext:(struct CGContext { } *)a2 isPDF:(BOOL)a3;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)a0;
- (id)makeAlternateFillForDowngrading;
- (void)didInitFromSOS;
- (id)initWithMotionBackgroundStyle:(id)a0;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)updateAlternateFillForDowngrading;

@end
