@class NSString, WFWallpaperConfiguration, NSDictionary, NSObject;
@protocol OS_xpc_object;

@interface PRSPosterUpdateSessionInfo : NSObject <BSXPCSecureCoding, NSSecureCoding> {
    NSObject<OS_xpc_object> *_shortcutsWallpaperConfigurationSandboxToken;
    long long _shortcutsWallpaperConfigurationSandboxHandle;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) WFWallpaperConfiguration *shortcutsWallpaperConfiguration;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
