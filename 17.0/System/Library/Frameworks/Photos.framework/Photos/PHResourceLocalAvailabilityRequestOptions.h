@class NSObject;
@protocol OS_dispatch_queue;

@interface PHResourceLocalAvailabilityRequestOptions : NSObject

@property (nonatomic) BOOL treatLivePhotoAsStill;
@property (nonatomic) BOOL dontAllowRAW;
@property (nonatomic) BOOL includeAllAssetResources;
@property (nonatomic) BOOL includeOriginalResourcesOnly;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue;
@property (nonatomic) BOOL allowMissingVideoComplement;

- (id)description;
- (void).cxx_destruct;

@end
