@class NSArray, PXLabeledValue;

@interface PXSmartAlbumShutterSpeedCondition : PXSmartAlbumEXIFCondition {
    NSArray *_shutterSpeedValues;
}

@property (readonly, nonatomic) NSArray *shutterSpeedValues;
@property (retain, nonatomic) PXLabeledValue *shutterSpeedValue;
@property (retain, nonatomic) PXLabeledValue *secondShutterSpeedValue;

+ (id)formatter;
+ (id)defaultSingleQueryForEditingContext:(id)a0;

- (void).cxx_destruct;

@end
