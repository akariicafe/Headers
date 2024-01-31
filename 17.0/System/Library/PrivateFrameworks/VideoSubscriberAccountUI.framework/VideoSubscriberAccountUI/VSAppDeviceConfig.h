@class NSOperationQueue, NSString;

@interface VSAppDeviceConfig : NSObject <IKAppDeviceConfig>

@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (struct CGSize { double x0; double x1; })screenSize;
- (id)timeZone;
- (void).cxx_destruct;
- (unsigned long long)preferredVideoFormat;
- (id)systemLanguage;
- (BOOL)isTimeZoneSet;
- (unsigned long long)preferredVideoPreviewFormat;
- (id)storeFrontCountryCode;

@end
