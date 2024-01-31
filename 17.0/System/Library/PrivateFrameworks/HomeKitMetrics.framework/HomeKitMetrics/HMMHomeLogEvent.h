@class NSUUID, NSString;

@interface HMMHomeLogEvent : HMMLogEvent

@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, nonatomic) NSString *homeUUIDString;

+ (id)alloc;

- (void).cxx_destruct;
- (id)initWithHomeUUID:(id)a0;

@end
