@class NSString;

@interface AFMachServiceSiriTaskDeliverer : NSObject <AFSiriTaskDelivering> {
    NSString *_machServiceName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)machServiceSiriTaskDelivererForAppWithBundleIdentifier:(id)a0;

@end
