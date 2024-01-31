@class NSString, NSDictionary, NSArray, NSError;

@interface RegulatoryDomain.RDStatusListener : NSObject {
    void /* unknown type, empty encoding */ statusClient;
    void /* unknown type, empty encoding */ statusKey;
    void /* unknown type, empty encoding */ statusesKey;
}

- (id)init;
- (void).cxx_destruct;
- (void)listenForStatusWithHandler:(void (^)(NSString *, NSDictionary *))a0 completionHandler:(void (^)(NSError *))a1;
- (void)listenForStatusesWithHandler:(void (^)(NSString *, NSArray *))a0 completionHandler:(void (^)(NSError *))a1;

@end
