@class NSMutableArray;

@interface ODDShape : ODDLayoutObject {
    int mType;
    int mPresetType;
    NSMutableArray *mAdjustments;
}

- (void)setType:(int)a0;
- (id)init;
- (int)presetType;
- (id)description;
- (void).cxx_destruct;
- (int)type;
- (id)adjustments;
- (void)addAdjustment:(id)a0;
- (void)setPresetType:(int)a0;

@end
