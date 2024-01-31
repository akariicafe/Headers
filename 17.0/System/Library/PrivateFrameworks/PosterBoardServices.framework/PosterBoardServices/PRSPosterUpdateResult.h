@class NSError, PRSPosterUpdate;

@interface PRSPosterUpdateResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) PRSPosterUpdate *update;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) id updatedValue;
@property (readonly, copy, nonatomic) id initialValue;

+ (id)failedUpdateResultForUpdate:(id)a0 error:(id)a1;
+ (id)successfulUpdateResultForUpdate:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithUpdate:(id)a0;
- (id)requestedValue;

@end
