@class NSData;

@interface STSEngagementConfiguration : NSObject

@property (readonly, nonatomic) unsigned long long deviceEngagementType;
@property (readonly, nonatomic) unsigned long long dataRetrievalType;
@property (readonly, nonatomic) NSData *engagementData;

+ (id)configurationWithDeviceEngagementType:(unsigned long long)a0 dataRetrievalType:(unsigned long long)a1 engagementData:(id)a2;

- (void).cxx_destruct;
- (id)initWithDeviceEngagementType:(unsigned long long)a0 dataRetrievalType:(unsigned long long)a1 engagementData:(id)a2;

@end
