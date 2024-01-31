@interface PLRevGeoLocationHelper : NSObject

+ (BOOL)isCurrentRevGeoProviderAutoNavi;
+ (id)autoNaviProviderID;
+ (void)simulateAutoNaviForBlock:(id /* block */)a0;
+ (id)appleProviderID;
+ (id)autoNaviCountryCode;
+ (id)currentRevGeoProvider;
+ (BOOL)isAutoNaviRevGeoProvider:(id)a0;
+ (BOOL)isAutoNaviCountryCode:(id)a0;

@end
