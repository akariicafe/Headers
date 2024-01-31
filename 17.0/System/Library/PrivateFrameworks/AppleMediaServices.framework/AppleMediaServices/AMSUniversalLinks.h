@class AMSUniversalLinksConnection;

@interface AMSUniversalLinks : NSObject

@property (retain, nonatomic) AMSUniversalLinksConnection *connection;

+ (id)_connection;
+ (void)update;
+ (id)_privateQueue;

- (id)init;
- (void).cxx_destruct;
- (id)updateUniversalLinks;

@end
