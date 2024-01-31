@class NSString;

@interface GDKTSSegmentMetadata : NSObject <GDTripMetadataProtocol>

@property (readonly, nonatomic) NSString *segmentId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSegmentId:(id)a0;

@end
