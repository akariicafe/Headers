@class NSString;

@interface QSSMutableClientSetupInfo : QSSClientSetupInfo

@property (nonatomic) float endpoint_threshold;
@property (nonatomic) BOOL endpoint_extra_delay;
@property (copy, nonatomic) NSString *speech_id;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
