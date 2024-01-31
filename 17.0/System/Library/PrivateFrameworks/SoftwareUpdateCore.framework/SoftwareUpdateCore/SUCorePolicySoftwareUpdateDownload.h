@class NSDictionary;

@interface SUCorePolicySoftwareUpdateDownload : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long specifiedFields;
@property (nonatomic) BOOL allowsCellular;
@property (nonatomic) BOOL discretionary;
@property (nonatomic) BOOL disableUI;
@property (nonatomic) BOOL skipPhase;
@property (nonatomic) BOOL requiresPowerPluggedIn;
@property (nonatomic) int downloadTimeoutSecs;
@property (nonatomic) BOOL requiresInexpensiveAccess;
@property (retain, nonatomic) NSDictionary *basePreflightOptions;
@property (retain, nonatomic) NSDictionary *additionalOptions;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)backToDefaultsWithSkipPhaseSet:(BOOL)a0;
- (id)initWithSkipPhaseSet:(BOOL)a0;

@end
