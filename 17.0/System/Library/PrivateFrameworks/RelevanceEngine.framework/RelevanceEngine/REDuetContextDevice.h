@class NSUUID;

@interface REDuetContextDevice : NSObject

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) unsigned long long deviceType;

+ (id)localDevice;
+ (id)companionDevice;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithUUID:(id)a0 type:(unsigned long long)a1;

@end
