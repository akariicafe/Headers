@interface HDRProcessorEx : HDRProcessor

- (long long)generateMSRColorConfigExWithOperation:(unsigned int)a0 InputSurfaces:(struct __IOSurface **)a1 OutputSurfaces:(struct __IOSurface **)a2 Metadatas:(id *)a3 Histograms:(struct RgbHistogram_t **)a4 Configs:(id *)a5 NumOfGroup:(int)a6 MVImageLayout:(unsigned int)a7;
- (int)processWithMSRColorConfigs:(id *)a0 MSRScaler:(struct __IOSurfaceAccelerator { } *)a1 InputSurfaces:(struct __IOSurface **)a2 OutputSurfaces:(struct __IOSurface **)a3 CropRects:(struct **)a4 NumOfCropRectsInAGroup:(int *)a5 NumOfGroup:(int)a6;

@end
