@class TRAArbitrationAmbientPresentationInputs;

@interface TRAMutableSettingsAmbientPresentation : TRASettingsAmbientPresentation

@property (retain, nonatomic) TRAArbitrationAmbientPresentationInputs *ambientPresentationInputs;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAmbientPresentationInputs:(id)a0;

@end
