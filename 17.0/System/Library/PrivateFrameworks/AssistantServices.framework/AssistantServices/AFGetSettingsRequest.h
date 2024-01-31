@class NSArray;

@interface AFGetSettingsRequest : AFSiriRequest

@property (copy, nonatomic) NSArray *settings;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)createResponse;

@end
