@class NSString, NSArray, VKCImageAnalyzerRequest, NSValue, NSNumber, UTType;

@interface VKCRemoveBackgroundVideoRequest : NSObject

@property (retain, nonatomic) VKCImageAnalyzerRequest *photosRequest;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) int madRequestID;
@property (retain, nonatomic) NSValue *instancePoint;
@property (retain, nonatomic) NSNumber *maxDimension;
@property (retain, nonatomic) NSNumber *minDimension;
@property (retain, nonatomic) NSNumber *maxFileSize;
@property (retain, nonatomic) NSArray *stickerIDs;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maskTime;
@property (copy, nonatomic) UTType *outputType;

- (void).cxx_destruct;
- (id)createMADPreviewRequest;
- (id)createMADRequest;
- (id)initWithPhotosAnalyzerRequest:(id)a0;

@end
