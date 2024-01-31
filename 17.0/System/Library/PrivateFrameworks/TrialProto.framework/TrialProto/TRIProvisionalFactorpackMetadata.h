@class NSString;

@interface TRIProvisionalFactorpackMetadata : TRIPBMessage

@property (copy, nonatomic) NSString *factorPackId;
@property (nonatomic) BOOL hasFactorPackId;
@property (nonatomic) BOOL rejected;
@property (nonatomic) BOOL hasRejected;
@property (nonatomic) unsigned int attempts;
@property (nonatomic) BOOL hasAttempts;

+ (id)descriptor;

@end
