@interface BKSHIDEventProximityAttributes : BKSHIDEventBaseAttributes

@property (nonatomic) int proximityDetectionMode;

+ (id)protobufSchema;

- (void)appendDescriptionToFormatter:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
