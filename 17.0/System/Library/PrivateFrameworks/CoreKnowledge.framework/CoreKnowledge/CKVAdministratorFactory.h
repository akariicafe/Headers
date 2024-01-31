@class NSObject;
@protocol CKVAdminServiceProvider, OS_dispatch_queue;

@interface CKVAdministratorFactory : NSObject <CKVAdministratorProvider> {
    NSObject<CKVAdminServiceProvider> *_serviceProvider;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedAdministratorFactory;

- (id)init;
- (id)initWithServiceProvider:(id)a0;
- (void).cxx_destruct;
- (id)administrator;

@end
