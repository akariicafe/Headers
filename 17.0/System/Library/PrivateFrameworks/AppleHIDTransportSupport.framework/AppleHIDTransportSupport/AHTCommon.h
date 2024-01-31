@class NSString;

@interface AHTCommon : NSObject

@property (readonly, nonatomic) unsigned int service;
@property (readonly, nonatomic) unsigned int connect;
@property (copy, nonatomic) NSString *name;

- (unsigned long long)registryID;
- (void)close;
- (BOOL)reset;
- (void)dealloc;
- (BOOL)open;
- (id)initWithService:(unsigned int)a0;
- (BOOL)setPower:(long long)a0;
- (void).cxx_destruct;
- (id)getBootLoader;
- (BOOL)getPower:(long long *)a0;

@end
