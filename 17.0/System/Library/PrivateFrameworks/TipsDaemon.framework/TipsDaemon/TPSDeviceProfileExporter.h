@class NSError;
@protocol TPSDeviceProfileDataSource;

@interface TPSDeviceProfileExporter : NSObject

+ (void)updateDeviceProfileWithDataSource:(id<TPSDeviceProfileDataSource>)a0 completionHandler:(void (^)(BOOL, NSError *))a1;

- (id)init;

@end
