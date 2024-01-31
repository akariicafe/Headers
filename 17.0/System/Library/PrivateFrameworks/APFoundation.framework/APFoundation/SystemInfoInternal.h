@class NSString;

@interface SystemInfoInternal : NSObject

@property (class, nonatomic, readonly) NSString *osIdentifier;
@property (class, nonatomic, readonly) NSString *osName;
@property (class, nonatomic, readonly) NSString *osVersion;
@property (class, nonatomic, readonly) NSString *longBuildVersion;
@property (class, nonatomic, readonly) NSString *shortBuildVersion;
@property (class, nonatomic, readonly) NSString *systemDescription;
@property (class, nonatomic, readonly) NSString *bundleIdentifier;
@property (class, nonatomic, readonly) NSString *locale;
@property (class, nonatomic, readonly) NSString *deviceModel;
@property (class, nonatomic, readonly) NSString *modelType;

- (id)init;
- (void).cxx_destruct;

@end
