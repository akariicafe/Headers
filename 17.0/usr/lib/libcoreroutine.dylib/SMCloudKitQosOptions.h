@class NSString, NSObject;
@protocol OS_xpc_object;

@interface SMCloudKitQosOptions : NSObject

@property (readonly, nonatomic) BOOL defaultQos;
@property (readonly, nonatomic) NSString *masqeradeBundleID;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcActivity;

- (void).cxx_destruct;
- (id)initWithDefaultQos:(BOOL)a0 masqeradeBundleID:(id)a1 xpcActivity:(id)a2;

@end
