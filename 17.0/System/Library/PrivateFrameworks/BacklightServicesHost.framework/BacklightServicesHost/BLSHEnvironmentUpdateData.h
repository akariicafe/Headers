@class NSString;

@interface BLSHEnvironmentUpdateData : NSObject

@property (readonly, copy, nonatomic) NSString *environmentIdentifier;
@property (readonly, nonatomic) long long newBacklightState;
@property (readonly, nonatomic) unsigned long long pendingTransitionStateCount;
@property (readonly, nonatomic) unsigned long long timeStamp;

- (id)description;
- (id)initWithEnvironmentIdentifier:(id)a0 newBacklightState:(long long)a1 pendingTransitionStateCount:(unsigned long long)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
