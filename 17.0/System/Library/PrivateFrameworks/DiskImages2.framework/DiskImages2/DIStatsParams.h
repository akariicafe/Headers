@class NSUUID;

@interface DIStatsParams : DIBaseParams

@property (readonly, copy, nonatomic) NSUUID *statInstanceID;
@property (readonly, copy, nonatomic) NSUUID *instanceID;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)statsWithError:(id *)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 instanceId:(id)a1 error:(id *)a2;

@end
