@class FigCaptureSourceCommonSettings, NSMutableArray, NSDictionary;

@interface FigCaptureSourceBackings : NSObject {
    BOOL _hasMicSource;
}

@property (readonly, nonatomic) NSMutableArray *sourceInfoDictionaries;
@property (readonly, nonatomic) FigCaptureSourceCommonSettings *commonSettings;
@property (readonly, nonatomic) NSDictionary *hevcSettings;
@property (readonly, nonatomic) NSDictionary *h264Settings;
@property (readonly, nonatomic) NSDictionary *continuityCaptureCameraCapabilities;

+ (void)initialize;
+ (id)sharedCaptureSourceBackings;

- (void)removeSourceInfoDictionaries:(id)a0;
- (void)dealloc;
- (void)addSourceInfoDictionaries:(id)a0;
- (id)initWithSourceInfoDictionaries:(id)a0 commonSettings:(id)a1 hevcSettings:(id)a2 h264Settings:(id)a3;

@end
