@class NSDictionary;

@interface COMTPerformActionResponse : COMessageChannelResponse

@property (readonly, copy, nonatomic) NSDictionary *results;

+ (BOOL)supportsSecureCoding;

- (id)initWithResults:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
