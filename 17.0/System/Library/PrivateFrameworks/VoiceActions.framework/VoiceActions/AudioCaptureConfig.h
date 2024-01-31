@class NSString;

@interface AudioCaptureConfig : NSObject

@property (nonatomic) void /* unknown type, empty encoding */ leftOfStartFrameOffset;
@property (nonatomic) void /* unknown type, empty encoding */ rightOfEndFrameOffset;
@property (nonatomic, readonly) NSString *description;

- (id)init;

@end
