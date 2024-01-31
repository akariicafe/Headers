@class NSData, NSError;

@interface FinanceKitUI.SaveOrderProvider : NSObject

+ (void)saveOrderWithData:(NSData *)a0 completionHandler:(void (^)(unsigned long long, NSError *))a1;

- (id)init;

@end
