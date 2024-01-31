@class NSNumber, NSString, NSArray;

@interface VCScreenShare : NSObject

@property (retain, nonatomic) NSNumber *clientPID;
@property (retain, nonatomic) NSString *selectiveScreenUUID;
@property (retain, nonatomic) NSArray *excludedApplicationBundleIDs;
@property (readonly, nonatomic) unsigned int height;
@property (readonly, nonatomic) unsigned int width;
@property (readonly, nonatomic) unsigned int frameRate;
@property (readonly, nonatomic) unsigned int screenCaptureDisplayID;
@property (readonly, nonatomic) BOOL isWindowed;
@property (nonatomic) BOOL isCursorCaptured;
@property (nonatomic) BOOL privateContentCaptureAllowed;
@property (nonatomic) BOOL contentRepickingAllowed;
@property (readonly, nonatomic) unsigned int selectiveSharingPort;
@property (readonly, nonatomic) long long captureSourceID;

- (void)dealloc;
- (id)initWithConfig:(id)a0 pid:(id)a1 captureSourceID:(id)a2;
- (void)setConfig:(id)a0 pid:(id)a1 captureSourceID:(id)a2;
- (void)updateScreenCaptureWithConfig:(id)a0;

@end
