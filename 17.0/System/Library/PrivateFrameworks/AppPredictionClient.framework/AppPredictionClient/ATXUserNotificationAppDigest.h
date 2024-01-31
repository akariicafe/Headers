@class NSString, NSArray;

@interface ATXUserNotificationAppDigest : NSObject <ATXProtoBufWrapper, ATXJSONSerializableProtocol>

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSArray *appMarqueeGroups;
@property (readonly, nonatomic) NSArray *nonAppMarqueeGroups;
@property (readonly, nonatomic) NSArray *groups;

- (id)initWithProto:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initFromJSON:(id)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)initWithBundleId:(id)a0 appMarqueeGroups:(id)a1 nonAppMarqueeGroups:(id)a2;

@end
