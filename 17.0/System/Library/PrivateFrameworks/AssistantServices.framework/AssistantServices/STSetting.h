@interface STSetting : STSiriModelObject

@property (nonatomic) long long type;
@property (retain, nonatomic) id value;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
