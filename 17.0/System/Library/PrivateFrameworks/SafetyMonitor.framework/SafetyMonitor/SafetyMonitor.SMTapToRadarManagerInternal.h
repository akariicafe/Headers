@class NSError, NSString;

@interface SafetyMonitor.SMTapToRadarManagerInternal : NSObject {
    void /* unknown type, empty encoding */ urlComponents;
}

+ (void)fileRadarWithError:(NSError *)a0 recipientHandle:(NSString *)a1 completionHandler:(void (^)(void))a2;
+ (void)fileRadarWithTitle:(NSString *)a0 description:(NSString *)a1 recipient:(NSString *)a2 completionHandler:(void (^)(void))a3;

- (id)init;
- (void).cxx_destruct;

@end
