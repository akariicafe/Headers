@class NSUUID;

@interface NWUUIDMapper : NSObject

@property (nonatomic) double lastAccessDate;
@property (retain, nonatomic) NSUUID *externalUUID;
@property (nonatomic) unsigned long long usageFlags;

- (id)description;
- (void).cxx_destruct;

@end
