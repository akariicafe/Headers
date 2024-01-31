@class NSString;

@interface GKDevice : NSObject {
    NSString *_udid;
}

@property (retain, nonatomic) NSString *deviceType;
@property (readonly, nonatomic) NSString *udid;
@property (readonly, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) NSString *gameKitVersion;
@property (readonly, nonatomic, getter=isGameKitAvailable) BOOL gameKitAvailable;
@property (readonly, nonatomic, getter=isInternalBuild) BOOL internalBuild;

+ (id)currentDevice;

- (id)init;
- (void)_initPlatform;
- (BOOL)isFocusDevice;
- (id)userAgentWithProcessName:(id)a0 protocolVersion:(id)a1;
- (id)_platformUDID;
- (id)processNameHeader;
- (void).cxx_destruct;
- (BOOL)isDevelopmentDevice;
- (BOOL)isProductType:(unsigned int)a0;
- (id)buildVersionHeader;
- (id)platformBuildVersion;

@end
