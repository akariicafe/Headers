@class NSString, NSDictionary, NSURL, NSDate, UIImage;

@interface CAMStillImagePersistenceResponse : CAMPersistenceResponse <CAMTransientAssetConvertible>

@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, copy, nonatomic) NSString *burstIdentifier;
@property (readonly, nonatomic) unsigned long long burstRepresentedCount;
@property (readonly, nonatomic, getter=isExpectingPairedVideo) BOOL expectingPairedVideo;
@property (readonly, nonatomic) unsigned long long mediaType;
@property (readonly, nonatomic) unsigned long long mediaSubtypes;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) unsigned short sessionIdentifier;
@property (readonly, copy, nonatomic) NSURL *persistenceURL;
@property (readonly, nonatomic) NSDate *captureDate;
@property (readonly, nonatomic) UIImage *placeholderImage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } finalExpectedPixelSize;
@property (readonly, nonatomic, getter=isTransientAssetTemporaryPlaceholder) BOOL transientAssetTemporaryPlaceholder;
@property (readonly, copy, nonatomic) NSDictionary *stillImageMetadata;
@property (readonly, nonatomic) unsigned long long numberOfRepresentedAssets;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) NSString *irisStillImageUUID;
@property (readonly, nonatomic) NSURL *irisVideoPersistenceURL;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } irisStillDisplayTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 captureSession:(unsigned short)a1 url:(id)a2 creationDate:(id)a3 scrubberImage:(id)a4 finalExpectedPixelSize:(struct CGSize { double x0; double x1; })a5 metadata:(id)a6 burstIdentifier:(id)a7 burstRepresentedCount:(unsigned long long)a8 expectingPairedVideo:(BOOL)a9 coordinationInfo:(id)a10;

@end
