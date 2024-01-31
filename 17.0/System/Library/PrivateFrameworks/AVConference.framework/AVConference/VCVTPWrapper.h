@interface VCVTPWrapper : NSObject

+ (id)targetQueue;
+ (id)connectionContext;
+ (void)stopVTP;
+ (void)startVTP;

@end
