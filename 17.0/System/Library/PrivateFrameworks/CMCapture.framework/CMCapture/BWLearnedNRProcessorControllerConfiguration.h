@class NSDictionary, BWVideoFormat;

@interface BWLearnedNRProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration

@property (retain, nonatomic) BWVideoFormat *inputFormat;
@property (retain, nonatomic) BWVideoFormat *outputFormat;
@property (nonatomic) BOOL quadraSupportEnabled;
@property (retain, nonatomic) BWVideoFormat *ultraHighResolutionInputFormat;
@property (retain, nonatomic) BWVideoFormat *ultraHighResolutionOutputFormat;
@property (retain, nonatomic) NSDictionary *finalCropRectOverscanMultiplierByPortType;

- (void)dealloc;

@end
