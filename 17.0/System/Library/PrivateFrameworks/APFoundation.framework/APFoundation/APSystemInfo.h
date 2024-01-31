@class NSString;

@interface APSystemInfo : NSObject

@property (class, readonly, nonatomic) NSString *osIdentifier;
@property (class, readonly, nonatomic) NSString *osName;
@property (class, readonly, nonatomic) NSString *osVersion;
@property (class, readonly, nonatomic) NSString *longBuildVersion;
@property (class, readonly, nonatomic) NSString *shortBuildVersion;
@property (class, readonly, nonatomic) NSString *systemDescription;
@property (class, readonly, nonatomic) NSString *bundleIdentifier;
@property (class, readonly, nonatomic) NSString *locale;
@property (class, readonly, nonatomic) NSString *deviceModel;
@property (class, readonly, nonatomic) NSString *modelType;

@end
