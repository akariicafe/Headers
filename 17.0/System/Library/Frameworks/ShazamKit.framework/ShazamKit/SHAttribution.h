@class NSString;

@interface SHAttribution : NSObject

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *teamIdentifier;
@property (readonly, copy, nonatomic) NSString *productName;
@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;
@property (readonly, copy, nonatomic) NSString *containingAppBundleIdentifier;

+ (id)productNameForBundleIdentifier:(id)a0;
+ (id)mediaLibraryAttributionExceptionPlist;
+ (id)musicRecognitionSensorActivityAttributionExceptionPlist;
+ (BOOL)requiresMediaLibraryAttributionForBundleIdentifier:(id)a0;
+ (BOOL)requiresMusicRecognitionSensorActivityAttributionForBundleIdentifier:(id)a0;

- (id)init;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)configureAttributionForConnection:(id)a0;
- (void)configureAttributionForTask:(struct __SecTask { } *)a0;

@end
