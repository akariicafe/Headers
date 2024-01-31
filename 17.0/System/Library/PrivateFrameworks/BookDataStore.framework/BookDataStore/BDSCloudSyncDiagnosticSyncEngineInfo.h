@class NSDictionary;

@interface BDSCloudSyncDiagnosticSyncEngineInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL establishedSalt;
@property (readonly, nonatomic) NSDictionary *stateForLog;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEstablishedSalt:(BOOL)a0;

@end
