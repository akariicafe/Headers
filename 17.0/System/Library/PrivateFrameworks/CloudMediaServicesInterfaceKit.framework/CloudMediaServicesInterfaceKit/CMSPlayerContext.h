@class NSString;

@interface CMSPlayerContext : NSObject <CMSCoding, NSCopying>

@property (readonly, copy, nonatomic) NSString *activityIdentifier;
@property (readonly, copy, nonatomic) NSString *queueIdentifier;
@property (readonly, copy, nonatomic) NSString *contentIdentifier;
@property (readonly, nonatomic) float playbackSpeed;
@property (readonly, nonatomic) long long offsetInMillis;
@property (readonly, nonatomic) BOOL offsetIsValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceFromCMSCoded:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)playerContextWithUpdatedOffset:(long long)a0;
- (BOOL)isEqualContext:(id)a0;
- (id)cmsCoded;
- (id)initForActivity:(id)a0 queue:(id)a1 content:(id)a2 speed:(float)a3;
- (id)initForActivity:(id)a0 queue:(id)a1 content:(id)a2 speed:(float)a3 offset:(long long)a4;
- (id)playerContextWithUpdatedSpeed:(float)a0;
- (id)playerContextWithUpdatedSpeed:(float)a0 offset:(long long)a1;

@end
