@class NSString;

@interface SUUIAppDeviceConfig : NSObject <IKAppDeviceConfig>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })screenSize;
- (id)timeZone;
- (unsigned long long)preferredVideoFormat;
- (id)systemLanguage;
- (id)currentSizeClasses;
- (BOOL)isTimeZoneSet;
- (unsigned long long)preferredVideoPreviewFormat;
- (id)storeFrontCountryCode;

@end
