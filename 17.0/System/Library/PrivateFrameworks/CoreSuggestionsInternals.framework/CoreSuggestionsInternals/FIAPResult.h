@class NSArray, NSError;

@interface FIAPResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *historicalDataRequests;
@property (readonly, nonatomic) NSError *error;

+ (id)success;
+ (id)new;
+ (id)resultWithHistoricalDataRequests:(id)a0 error:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToResult:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHistoricalDataRequests:(id)a0 error:(id)a1;

@end
