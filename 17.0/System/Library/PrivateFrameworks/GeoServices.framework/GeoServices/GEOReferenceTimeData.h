@interface GEOReferenceTimeData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double refTime;
@property (readonly, nonatomic) double refError;
@property (readonly, nonatomic) double kernTime;
@property (readonly, nonatomic) struct timeval { long long tv_sec; int tv_usec; } kernBootTime;

- (void)encodeWithCoder:(id)a0;
- (double)currentReferenceTime;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithRefTime:(double)a0 refError:(double)a1 kernTime:(double)a2 bootTime:(struct timeval { long long x0; int x1; })a3;

@end
