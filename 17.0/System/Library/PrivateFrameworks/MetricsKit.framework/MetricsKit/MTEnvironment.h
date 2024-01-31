@protocol MTEnvironmentDelegate;

@interface MTEnvironment : MTObject

@property (weak, nonatomic) id<MTEnvironmentDelegate> delegate;

- (id)app;
- (id)osVersion;
- (id)hardwareModel;
- (id)userAgent;
- (id)os;
- (id)connectionType;
- (id)screenWidth;
- (id)appVersion;
- (id)cookies;
- (id)environmentDataCenter;
- (id)pageUrl;
- (id)screenHeight;
- (void).cxx_destruct;
- (BOOL)isAnonymous;
- (id)pixelRatio;
- (id)hostApp;
- (id)dsId;
- (id)capacityData;
- (id)capacityDataAvailable;
- (id)capacityDisk;
- (id)capacitySystem;
- (id)capacitySystemAvailable;
- (id)environmentBuild;
- (id)environmentInstance;
- (id)hardwareFamily;
- (id)hostAppVersion;
- (id)osBuildNumber;
- (id)osLanguages;
- (id)parentPageUrl;
- (id)resourceRevNum;
- (id)storeFrontHeader;
- (id)windowInnerHeight;
- (id)windowInnerWidth;
- (id)windowOuterHeight;
- (id)windowOuterWidth;

@end
