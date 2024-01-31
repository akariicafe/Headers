@class NSObject;
@protocol OS_dispatch_queue;

@interface PXVideoRequestOptions : NSObject <NSCopying>

@property (nonatomic) BOOL includeTimeRangeMapper;
@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed;
@property (nonatomic) long long version;
@property (nonatomic) long long deliveryMode;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) BOOL restrictToPlayableOnCurrentDevice;
@property (nonatomic, getter=isStreamingAllowed) BOOL streamingAllowed;
@property (nonatomic) long long streamingVideoIntent;
@property (nonatomic) long long downloadIntent;
@property (nonatomic) long long downloadPriority;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic, getter=isMediumHighQualityAllowed) BOOL allowMediumHighQuality;
@property (nonatomic) BOOL liveRenderVideoIfNeeded;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)photoKitRequestOptions;

@end
