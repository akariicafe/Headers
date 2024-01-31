@class NSDictionary, NSArray;

@interface FigCaptureAudioFileRecordingSettings : FigCaptureRecordingSettings

@property (copy, nonatomic) NSDictionary *audioSettings;
@property (copy, nonatomic) NSArray *metadata;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
