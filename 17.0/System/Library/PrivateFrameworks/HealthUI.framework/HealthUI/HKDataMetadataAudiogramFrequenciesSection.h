@interface HKDataMetadataAudiogramFrequenciesSection : HKDataMetadataSimpleSection

- (void)_addCellsFromAudiogramSample:(id)a0 forLeftEar:(BOOL)a1 unitController:(id)a2;
- (id)_formattedFrequencyStringFromSensitivityPoint:(id)a0;
- (id)_formattedSensitivityStringFromSensitivityPoint:(id)a0 isLeftEar:(BOOL)a1 unitController:(id)a2;
- (id)initWithSample:(id)a0 leftEar:(BOOL)a1 unitController:(id)a2;

@end
