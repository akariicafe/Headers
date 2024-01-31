@interface PXMemoriesFeedTileIdentifierConverter : PXSectionedTileIdentifierConverter

- (BOOL)reverseTransformTileIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; } *)a0;
- (BOOL)_shouldConvertIdentifierFromMemory:(id)a0 toMemory:(id)a1;
- (BOOL)_shouldConvertIdentifierFromMemoryInfo:(id)a0 toMemoryInfo:(id)a1;
- (BOOL)transformTileIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; } *)a0 group:(unsigned long long *)a1;

@end
