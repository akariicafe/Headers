@class NSArray;

@interface DDRResetOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL hideProgress;
@property (nonatomic) BOOL eraseDataPlan;
@property (nonatomic) BOOL disallowProximitySetup;
@property (copy, nonatomic) NSArray *exclusionPaths;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
