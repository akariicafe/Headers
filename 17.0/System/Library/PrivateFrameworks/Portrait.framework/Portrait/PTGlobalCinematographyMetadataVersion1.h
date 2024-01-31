@interface PTGlobalCinematographyMetadataVersion1 : PTGlobalCinematographyMetadata

@property (nonatomic) float focusPullerAlpha;
@property (nonatomic) float focusPullerMaxV;
@property (nonatomic) float focusPullerResistance;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } minimumRackFocusPullTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maximumRackFocusPullTime;
@property (nonatomic) float maximumDisparityPerSecond;

- (id)initWithData:(id)a0;
- (id)initWithMinorVersion:(unsigned int)a0;
- (unsigned int)sizeOfSerializedObjectWithOptions:(id)a0;
- (BOOL)writeToData:(id)a0 withOptions:(id)a1;

@end
