@class CBTwilightParams, CBChromaticCorrectionParams, NSObject;
@protocol OS_os_log;

@interface CBBacklightNode : NSObject {
    NSObject<OS_os_log> *_log;
}

@property (readonly) CBTwilightParams *twilight;
@property (readonly) CBChromaticCorrectionParams *ammolite;

- (id)initWithService:(unsigned int)a0;

@end
