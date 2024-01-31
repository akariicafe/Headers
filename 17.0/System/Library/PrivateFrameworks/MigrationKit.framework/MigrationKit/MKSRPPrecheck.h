@class NSString, NSMutableDictionary;

@interface MKSRPPrecheck : NSObject {
    NSMutableDictionary *_servers;
}

@property (copy, nonatomic) NSString *password;

- (void).cxx_destruct;
- (id)initWithPassword:(id)a0;
- (void)removeServerForKey:(id)a0;
- (id)serverForKey:(id)a0;
- (void)setServerForKey:(id)a0;

@end
