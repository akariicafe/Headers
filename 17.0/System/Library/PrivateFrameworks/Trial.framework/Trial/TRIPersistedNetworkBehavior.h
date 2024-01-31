@interface TRIPersistedNetworkBehavior : TRIPBMessage

@property (nonatomic) BOOL allowsCellular;
@property (nonatomic) BOOL hasAllowsCellular;
@property (nonatomic) int networkBehavior;
@property (nonatomic) BOOL hasNetworkBehavior;

+ (id)descriptor;

@end
