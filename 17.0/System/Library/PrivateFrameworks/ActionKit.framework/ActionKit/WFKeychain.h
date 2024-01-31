@class NSString;

@interface WFKeychain : NSObject

@property (readonly, nonatomic) NSString *service;
@property (readonly, nonatomic) NSString *accessGroup;

- (id)items;
- (BOOL)setData:(id)a0 forKey:(id)a1;
- (id)initWithService:(id)a0;
- (unsigned long long)numberOfItems;
- (void).cxx_destruct;
- (id)dataForKey:(id)a0;
- (id)initWithService:(id)a0 accessGroup:(id)a1;

@end
