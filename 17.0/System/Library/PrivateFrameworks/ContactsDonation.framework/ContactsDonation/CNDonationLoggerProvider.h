@class NSString;
@protocol CNDonationPreferencesLogger, CNDonationLoggerProvider, CNDonationToolLogger, CNDonationAnalyticsLogger, CNDonationAgentLogger, CNDonationManagedDuplicatesLogger, CNDonationAccountLogger, CNDonationExtensionLogger;

@interface CNDonationLoggerProvider : NSObject <CNDonationLoggerProvider>

@property (class, readonly) id<CNDonationLoggerProvider> defaultProvider;

@property (readonly, nonatomic) id<CNDonationAgentLogger> agentLoggerImpl;
@property (readonly, nonatomic) id<CNDonationExtensionLogger> extensionLoggerImpl;
@property (readonly, nonatomic) id<CNDonationToolLogger> toolLoggerImpl;
@property (readonly, nonatomic) id<CNDonationAccountLogger> accountLoggerImpl;
@property (readonly, nonatomic) id<CNDonationPreferencesLogger> preferencesLoggerImpl;
@property (readonly, nonatomic) id<CNDonationAnalyticsLogger> analyticsLoggerImpl;
@property (readonly, nonatomic) id<CNDonationManagedDuplicatesLogger> duplicatesLoggerImpl;
@property (readonly) id<CNDonationAgentLogger> agentLogger;
@property (readonly) id<CNDonationExtensionLogger> extensionLogger;
@property (readonly) id<CNDonationToolLogger> toolLogger;
@property (readonly) id<CNDonationAccountLogger> accountLogger;
@property (readonly) id<CNDonationPreferencesLogger> preferencesLogger;
@property (readonly) id<CNDonationAnalyticsLogger> analyticsLogger;
@property (readonly) id<CNDonationManagedDuplicatesLogger> duplicatesLogger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
