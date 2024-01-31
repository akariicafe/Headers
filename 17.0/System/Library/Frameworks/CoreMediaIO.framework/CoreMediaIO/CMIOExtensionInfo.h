@class NSString, NSDictionary, NSObject;
@protocol OS_xpc_object;

@interface CMIOExtensionInfo : NSObject {
    NSString *_description;
    NSString *_redactedDescription;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> *endpoint;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSDictionary *bundleInfo;

+ (id)infoWithEndpoint:(id)a0 bundleID:(id)a1 bundleInfo:(id)a2;

- (void)dealloc;
- (id)redactedDescription;
- (id)description;
- (id)initWithEndpoint:(id)a0 bundleID:(id)a1 bundleInfo:(id)a2;

@end
