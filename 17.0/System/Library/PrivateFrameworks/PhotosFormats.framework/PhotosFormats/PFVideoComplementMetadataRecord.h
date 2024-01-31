@class NSString;

@interface PFVideoComplementMetadataRecord : NSObject

@property (copy) NSString *pairingIdentifier;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } videoDuration;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } imageDisplayTime;
@property (readonly) BOOL hasValidPairingIdentifier;
@property (readonly) BOOL hasValidVideoDuration;
@property (readonly) BOOL hasValidImageDisplayTime;

- (void).cxx_destruct;

@end
