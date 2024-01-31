@class NSString, CRKStudentDaemonProxy;

@interface CRKConnectedStudentDaemonProxyFactory : NSObject <CRKStudentDaemonProxyObserver>

@property (readonly, nonatomic) CRKStudentDaemonProxy *studentDaemonProxy;
@property (copy, nonatomic) id /* block */ didConnectHandler;
@property (retain, nonatomic) CRKConnectedStudentDaemonProxyFactory *selfReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)makeConnectedStudentDaemonProxyWithCompletion:(id /* block */)a0;

@end
