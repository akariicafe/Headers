@class NSPointerArray;

@interface TSTTableStrokePresetList : NSObject {
    unsigned long long mCount;
}

@property (retain, nonatomic) NSPointerArray *presets;

+ (id)strokePresetListForDefaultPropertyMapWithFatStroke:(id)a0 andThinStroke:(id)a1;
+ (id)strokePresetListForDefaultPropertyMapWithHorizontalStroke:(id)a0 verticalStroke:(id)a1 exteriorStroke:(id)a2;
+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;
+ (id)strokePresetListForDefaultPropertyMapForTablePresetID:(unsigned long long)a0 colors:(id)a1;

- (id)init;
- (unsigned long long)count;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)exteriorStrokeForStrokePreset:(unsigned long long)a0;
- (id)horizontalStrokeForStrokePreset:(unsigned long long)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (unsigned int)maskForStrokePreset:(unsigned long long)a0;
- (id)presetAtIndex:(unsigned long long)a0;
- (void)setStroke:(id)a0 forPresetIndex:(unsigned long long)a1;
- (void)setStrokePreset:(id)a0 atIndex:(unsigned long long)a1;
- (id)verticalStrokeForStrokePreset:(unsigned long long)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (unsigned int)maskForStrokePresets:(id)a0;

@end
