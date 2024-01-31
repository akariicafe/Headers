@class NSString, SBSRemoteAlertDefinition;
@protocol SBWakeDestinationHandling;

@interface SBWakeDestination : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) SBSRemoteAlertDefinition *remoteAlertDefinition;
@property (retain, nonatomic) id<SBWakeDestinationHandling> wakeHandler;

- (void).cxx_destruct;

@end
