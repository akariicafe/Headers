@interface SSPerformEntityQueryCommand : SFPerformEntityQueryCommand

@property (nonatomic) BOOL fromSuggestion;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
