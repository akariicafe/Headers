@interface CATTaskMessageIncrementalProgress : CATTaskMessage

@property (nonatomic) long long completedUnitCount;
@property (nonatomic) long long totalUnitCount;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithTaskUUID:(id)a0 completedUnitCount:(long long)a1 totalUnitCount:(long long)a2;
- (id)initWithCoder:(id)a0;

@end
