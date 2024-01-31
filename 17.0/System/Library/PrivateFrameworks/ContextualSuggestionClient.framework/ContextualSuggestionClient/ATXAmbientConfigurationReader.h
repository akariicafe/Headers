@class NSArray, NSError;

@interface ATXAmbientConfigurationReader : NSObject

- (id)init;
- (void)readStacksWithCompletion:(void (^)(NSArray *, NSError *))a0;

@end
