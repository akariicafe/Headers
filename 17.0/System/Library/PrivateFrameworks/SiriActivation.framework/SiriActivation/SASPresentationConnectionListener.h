@class NSString, BSServiceConnectionListener;

@interface SASPresentationConnectionListener : NSObject <BSServiceConnectionListenerDelegate>

@property (retain, nonatomic) BSServiceConnectionListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)listener;

@end
