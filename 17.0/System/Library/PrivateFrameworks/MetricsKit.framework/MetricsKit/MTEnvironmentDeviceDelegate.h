@class NSString;

@interface MTEnvironmentDeviceDelegate : NSObject <MTEnvironmentDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)app;
- (id)osVersion;
- (id)hardwareModel;
- (id)userAgent;
- (id)os;
- (id)userType;
- (id)connectionType;
- (id)screenWidth;
- (id)appVersion;
- (id)cookies;
- (id)pageUrl;
- (id)screenHeight;
- (BOOL)isAnonymous;
- (id)pixelRatio;
- (id)hostApp;
- (id)_diskUsage;
- (id)dsId;
- (id)capacityData;
- (id)capacityDataAvailable;
- (id)capacityDisk;
- (id)capacitySystem;
- (id)capacitySystemAvailable;
- (id)hardwareFamily;
- (id)osBuildNumber;
- (id)osLanguages;
- (id)resourceRevNum;
- (id)storeFrontHeader;
- (id)windowInnerHeight;
- (id)windowInnerWidth;
- (id)windowOuterHeight;
- (id)windowOuterWidth;

@end
