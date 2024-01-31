@interface BGRepeatingSystemTaskRequest : BGSystemTaskRequest

@property (nonatomic) double interval;
@property (nonatomic) double minDurationBetweenInstances;

- (id)initWithIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
