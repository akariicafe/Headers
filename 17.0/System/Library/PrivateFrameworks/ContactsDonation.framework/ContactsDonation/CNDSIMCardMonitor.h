@class CNReplaySubject, NSString, NSObject, CoreTelephonyClient;
@protocol CNCancelable, OS_dispatch_queue, CNDCoreTelephonyServices;

@interface CNDSIMCardMonitor : NSObject <CNDSIMCardMonitor>

@property (readonly, nonatomic) CoreTelephonyClient *coreTelephonyClient;
@property (readonly, nonatomic) id<CNDCoreTelephonyServices> coreTelephonyServices;
@property (readonly, nonatomic) CNReplaySubject *subject;
@property (retain, nonatomic) id<CNCancelable> subjectToken;
@property (nonatomic) struct __CTServerConnection { } *serverConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serverConnectionQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)continuousPhoneNumberObservableWithCoreTelephonyClient:(id)a0 services:(id)a1 serverConnection:(struct __CTServerConnection { } *)a2;
+ (id)phoneNumberChangedObservableWithCoreTelephonyServices:(id)a0 serverConnection:(struct __CTServerConnection { } *)a1;
+ (id)phoneNumberObservableWithCoreTelephonyClient:(id)a0;
+ (id)os_log;
+ (id)infoWithCompletion:(id /* block */)a0;
+ (void)infoWithClient:(id)a0 completion:(id /* block */)a1;

- (id)init;
- (void)dealloc;
- (id)addInfoChangeHandler:(id /* block */)a0;
- (void)nts_configureConnectionIfNecessary;
- (void)nts_configureSubjectIfNecessary;
- (void).cxx_destruct;
- (void)configureStateIfNecessary;
- (id)initWithCoreTelephonyClient:(id)a0 services:(id)a1;

@end
