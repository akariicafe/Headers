@class NSString, BWStillImageSettings, FigCaptureRecordingSettings;

@interface BWNodeError : NSObject {
    long long _uniqueID;
    int _errorCode;
    NSString *_sourceNodeDescription;
    BWStillImageSettings *_stillImageSettings;
}

@property (readonly) int errorCode;
@property (readonly) NSString *sourceNodeDescription;
@property (readonly) BWStillImageSettings *stillImageSettings;
@property (readonly) FigCaptureRecordingSettings *recordingSettings;

+ (id)newError:(int)a0 sourceNode:(id)a1;
+ (id)newError:(int)a0 sourceNode:(id)a1 recordingSettings:(id)a2;
+ (id)newError:(int)a0 sourceNode:(id)a1 stillImageSettings:(id)a2;

- (unsigned long long)hash;
- (void)dealloc;
- (id)description;

@end
