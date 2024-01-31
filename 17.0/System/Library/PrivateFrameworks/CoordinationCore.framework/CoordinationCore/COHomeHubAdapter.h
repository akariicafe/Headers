@class NSObject;

@interface COHomeHubAdapter : NSObject

@property (readonly, nonatomic) NSObject *client;
@property (readonly, nonatomic) NSObject *list;

+ (id)sharedInstance;

- (id)init;
- (id)accessoryIdentifierForPeerInstance:(id)a0 usingHomeKitAdapter:(id)a1;
- (void).cxx_destruct;
- (id)accessoryForPeerInstance:(id)a0 usingHomeKitAdapter:(id)a1;

@end
