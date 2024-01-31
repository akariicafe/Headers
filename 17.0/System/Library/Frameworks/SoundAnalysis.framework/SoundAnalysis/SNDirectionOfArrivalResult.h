@class NSArray, NSString;

@interface SNDirectionOfArrivalResult : NSObject <NSCopying, NSSecureCoding, SNTimeRangeProvidingWritable, SNResult, SNTimeRangeProviding> {
    float _azimuth;
    float _elevation;
    NSArray *_spatialSpectrum;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) float azimuth;
@property (readonly, nonatomic) float elevation;
@property (readonly, nonatomic) NSArray *spatialSpectrum;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
