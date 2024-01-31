@class NSMutableDictionary, NSDictionary, NSArray, NSString, NSData;

@interface MISProfile : NSObject {
    NSData *signature;
    struct CEQueryContext { } *ceCtx;
    NSData *derEntitlementsStorage;
    BOOL _fixedup;
}

@property int flavor;
@property (retain) NSMutableDictionary *payload;
@property (copy) NSDictionary *entitlements;
@property (copy) NSArray *certs;
@property (readonly) struct CEQueryContext { } *derEntitlements;
@property (readonly, nonatomic) NSString *uuid;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (int)fixUp;

@end
