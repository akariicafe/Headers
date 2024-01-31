@class NSArray;

@interface CAMPhotoFormatStatusIndicator : CAMExpandingControl

@property (nonatomic, setter=_setAdvancedFormatIndex:) unsigned long long _advancedFormatIndex;
@property (nonatomic, setter=_setEssentialFormatIndex:) unsigned long long _essentialFormatIndex;
@property (readonly, nonatomic) long long encoding;
@property (readonly, nonatomic) long long resolution;
@property (nonatomic) struct { long long x0; long long x1; } photoFormat;
@property (readonly, copy, nonatomic) NSArray *allowedFormats;
@property (readonly, nonatomic) struct { long long encoding; long long resolution; } essentialFormat;
@property (readonly, nonatomic) struct { long long encoding; long long resolution; } advancedFormat;

+ (id)localizedTitleForFormat:(struct { long long x0; long long x1; })a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setAllowedFormats:(id)a0 essentialFormatIndex:(unsigned long long)a1 advancedFormatIndex:(unsigned long long)a2;
- (void)setPhotoFormat:(struct { long long x0; long long x1; })a0 animated:(BOOL)a1;

@end
