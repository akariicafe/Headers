@class NSArray;

@interface WFAccountAccessResource : WFAccessResource {
    id _observer;
    id /* block */ _completionHandler;
}

@property (readonly, nonatomic) Class accountClass;
@property (readonly, copy, nonatomic) NSArray *accounts;

+ (id)userInterfaceClasses;
+ (id)userInterfaceProtocol;

- (void)dealloc;
- (unsigned long long)status;
- (id)username;
- (BOOL)supportsMultipleAccounts;
- (void).cxx_destruct;
- (id)name;
- (id)resourceName;
- (id)initWithDefinition:(id)a0;
- (BOOL)canLogOut;
- (id)errorReasonForStatus:(unsigned long long)a0;
- (id)importErrorReasonForStatus:(unsigned long long)a0;
- (void)logOut;
- (void)makeAvailableWithRemoteInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)protectedResourceDescription;
- (id)settingsUIDefinition;

@end
