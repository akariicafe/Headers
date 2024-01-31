@protocol MTBaseEventDataProviderDelegate;

@interface MTBaseEventDataProvider : MTEventDataProvider

@property (weak, nonatomic) id<MTBaseEventDataProviderDelegate> delegate;

- (id)isSignedIn:(id)a0;
- (id)capacityDataAvailable:(id)a0;
- (id)screenHeight:(id)a0;
- (id)xpSendMethod:(id)a0;
- (id)screenWidth:(id)a0;
- (id)pixelRatio:(id)a0;
- (id)capacitySystemAvailable:(id)a0;
- (id)windowOuterWidth:(id)a0;
- (id)hardwareModel:(id)a0;
- (id)xpPostFrequency:(id)a0;
- (id)connection:(id)a0;
- (id)dsId:(id)a0;
- (id)clientId:(id)a0;
- (id)windowInnerHeight:(id)a0;
- (id)capacitySystem:(id)a0;
- (id)pageUrl:(id)a0;
- (id)windowOuterHeight:(id)a0;
- (id)windowInnerWidth:(id)a0;
- (id)capacityData:(id)a0;
- (id)resourceRevNum:(id)a0;
- (id)capacityDisk:(id)a0;
- (id)knownFields;
- (id)hardwareFamily:(id)a0;
- (id)hostAppVersion:(id)a0;
- (id)os:(id)a0;
- (id)pageId:(id)a0;
- (id)timezoneOffset:(id)a0;
- (id)app:(id)a0;
- (id)appVersion:(id)a0;
- (id)baseVersion:(id)a0;
- (id)clientEventId:(id)a0;
- (id)cookies:(id)a0;
- (id)eventTime:(id)a0;
- (id)hostApp:(id)a0;
- (id)osBuildNumber:(id)a0;
- (id)osVersion:(id)a0;
- (id)page:(id)a0;
- (id)pageContext:(id)a0;
- (id)pageDetails:(id)a0;
- (id)pageType:(id)a0;
- (id)parentPageUrl:(id)a0;
- (id)storeFrontHeader:(id)a0;
- (id)userAgent:(id)a0;
- (id)xpVersionMetricsKit:(id)a0;
- (id)fetchAllCookies;

@end
