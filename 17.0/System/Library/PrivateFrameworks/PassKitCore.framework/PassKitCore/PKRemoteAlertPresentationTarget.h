@class NSString, RBSProcessHandle;

@interface PKRemoteAlertPresentationTarget : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) RBSProcessHandle *process;
@property (readonly, copy, nonatomic) NSString *sceneID;

+ (id)createForSceneID:(id)a0 inProcess:(id)a1;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
