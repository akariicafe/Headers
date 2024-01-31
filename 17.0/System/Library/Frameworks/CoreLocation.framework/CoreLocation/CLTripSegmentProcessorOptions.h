@interface CLTripSegmentProcessorOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL runLinearInterpolator;
@property (readonly, nonatomic) BOOL runInertialIntegrator;
@property (readonly, nonatomic) BOOL runMapIntegrator;
@property (readonly, nonatomic) BOOL useXPCServiceForMapQuery;
@property (readonly, nonatomic) BOOL shouldRecordDataInFileForReplay;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setRunInertialIntegrator:(BOOL)a0;
- (void)setRunLinearInterpolator:(BOOL)a0;
- (void)setRunMapIntegrator:(BOOL)a0;
- (void)setUseXPCService:(BOOL)a0;
- (void)setshouldRecordDataInFileForReplay:(BOOL)a0;

@end
