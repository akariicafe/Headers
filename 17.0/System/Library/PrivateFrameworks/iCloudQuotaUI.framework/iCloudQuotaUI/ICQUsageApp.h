@class NSString;

@interface ICQUsageApp : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *bundleVersion;
@property (nonatomic) float staticSize;
@property (nonatomic) float dynamicSize;
@property (nonatomic) float specialSize;
@property (nonatomic, getter=isSystemApp) BOOL systemApp;
@property (readonly, nonatomic) float dataSize;
@property (readonly, nonatomic) float totalSize;

- (void).cxx_destruct;

@end
