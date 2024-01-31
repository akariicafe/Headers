@class NSString, NSDictionary;

@interface BDSCloudSyncDiagnosticDatabaseInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL attached;
@property (nonatomic) BOOL establishedSalt;
@property (copy, nonatomic) NSString *container;
@property (readonly, nonatomic) NSDictionary *stateForLog;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAttached:(BOOL)a0 establishedSalt:(BOOL)a1 container:(id)a2;

@end
