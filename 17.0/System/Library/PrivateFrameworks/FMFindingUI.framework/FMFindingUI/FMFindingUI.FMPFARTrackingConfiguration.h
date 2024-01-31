@class NSArray;

@interface FMFindingUI.FMPFARTrackingConfiguration : ARWorldTrackingConfiguration

@property (class, nonatomic, readonly) NSArray *supportedVideoFormats;

- (id)initPrivate;
- (id)init;

@end
