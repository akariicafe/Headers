@interface HKMCAnalysisQueryConfiguration : HKQueryServerConfiguration

@property (nonatomic) BOOL forceAnalysis;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
