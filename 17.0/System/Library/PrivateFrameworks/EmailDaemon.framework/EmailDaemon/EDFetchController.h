@class NSString, NSObject;
@protocol OS_os_log, EDAccountsProvider;

@interface EDFetchController : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) id<EDAccountsProvider> accountsProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccountsProvider:(id)a0;
- (void).cxx_destruct;

@end
