@class NSArray, NSDictionary;

@interface MRMutableVirtualVoiceInputDeviceDescriptor : MRVirtualVoiceInputDeviceDescriptor

@property (copy, nonatomic) NSArray *supportedFormats;
@property (copy, nonatomic) NSDictionary *defaultFormat;

- (void)setDefaultFormat:(id)a0;
- (void)setSupportedFormats:(id)a0;

@end
