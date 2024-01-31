@class NSNumber, NSString, NSDate;

@interface AMSAccountCachedServerIntCore : NSObject {
    void /* unknown type, empty encoding */ cachedValue;
}

@property (nonatomic, readonly) NSDate *expiration;
@property (nonatomic, readonly) BOOL isStale;
@property (nonatomic, readonly) NSNumber *value;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
