@class NSString;

@interface SMUBulletinService : NSObject <SMUBulletinService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initNoop;
- (void)presentBulletinWithInfo:(id)a0 withCompletion:(id /* block */)a1;

@end
