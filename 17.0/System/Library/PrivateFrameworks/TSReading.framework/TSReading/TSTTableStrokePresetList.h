@class TSTTableStrokePresetData;

@interface TSTTableStrokePresetList : NSObject {
    unsigned long long mCount;
    TSTTableStrokePresetData *mPresets[15];
}

+ (id)init;
+ (id)strokePresetListForDefaultPropertyMapForTablePresetIndex:(unsigned long long)a0 colors:(id)a1;
+ (id)strokePresetListForDefaultPropertyMapWithFatStroke:(id)a0 andThinStroke:(id)a1;
+ (id)strokePresetListForDefaultPropertyMapWithHorizontalStroke:(id)a0 verticalStroke:(id)a1 exteriorStroke:(id)a2;

- (void)dealloc;
- (unsigned long long)count;
- (BOOL)isEqual:(id)a0;
- (id)exteriorStrokeForStrokePreset:(unsigned long long)a0;
- (id)horizontalStrokeForStrokePreset:(unsigned long long)a0;
- (unsigned int)maskForStrokePreset:(unsigned long long)a0;
- (id)presetAtIndex:(unsigned long long)a0;
- (void)setStroke:(id)a0 forPresetIndex:(unsigned long long)a1;
- (void)setStrokePreset:(id)a0 atIndex:(unsigned long long)a1;
- (id)verticalStrokeForStrokePreset:(unsigned long long)a0;

@end
