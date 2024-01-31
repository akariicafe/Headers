@protocol HUServiceDetailsCameraSettingsReaderWriterConfigurator;

@interface HUServiceDetailsCameraSettingsReaderWriter : NSObject

@property (weak, nonatomic) id<HUServiceDetailsCameraSettingsReaderWriterConfigurator> configurator;

- (id)initWithConfigurator:(id)a0;
- (void).cxx_destruct;
- (id)_fastUpdateResultsForCharacteristic:(id)a0 withTitle:(id)a1;
- (id)readWithOptions:(id)a0;
- (id)updateUserSettingsWithValue:(BOOL)a0;

@end
