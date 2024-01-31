@class NSArray;

@interface PKDiscoveryMessagesManifest : NSObject

@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) NSArray *engagementMessages;
@property (readonly, nonatomic) NSArray *notifications;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
