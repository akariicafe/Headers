@interface TSTCellRangeControlSpec : TSTCellSpec {
    unsigned int _interactionType;
}

@property (readonly, nonatomic) double minimum;
@property (readonly, nonatomic) double maximum;
@property (readonly, nonatomic) double increment;
@property (readonly, nonatomic) unsigned int legacyDisplayFormatType;

+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;
+ (id)cellSpecFromTSKFormat:(id)a0;
+ (double)defaultCellValueForInteractionType:(unsigned int)a0;
+ (id)defaultRangeControlSpecOfType:(unsigned int)a0;
+ (BOOL)legalRangeControlMinimum:(double)a0 maximum:(double)a1 increment:(double)a2;
+ (id)sliderSpecWithMinimum:(double)a0 maximum:(double)a1 increment:(double)a2;
+ (id)stepperSpecWithMinimum:(double)a0 maximum:(double)a1 increment:(double)a2;

- (unsigned long long)hash;
- (unsigned int)interactionType;
- (BOOL)isEqual:(id)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)asRangeControlSpec;
- (id)initWithInteractionType:(unsigned int)a0 minimum:(double)a1 maximum:(double)a2 increment:(double)a3;
- (double)recomputedValueFromValue:(double)a0 changed:(BOOL *)a1;
- (id)tskStepperSliderFormatWithDisplayFormatType:(unsigned int)a0;
- (BOOL)validateFormatAndValue:(id)a0;
- (double)valueFromString:(id)a0 locale:(id)a1;

@end
