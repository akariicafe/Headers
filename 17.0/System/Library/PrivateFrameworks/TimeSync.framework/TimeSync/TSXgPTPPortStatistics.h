@class NSString;

@interface TSXgPTPPortStatistics : NSObject

@property (readonly, copy, nonatomic) NSString *portIdentifier;
@property (readonly, nonatomic) int portType;
@property (readonly, nonatomic) int portRole;
@property (readonly, nonatomic) unsigned int receivedSyncCounter;
@property (readonly, nonatomic) unsigned int receivedFollowUpCounter;
@property (readonly, nonatomic) unsigned int receivedAnnounceCounter;
@property (readonly, nonatomic) unsigned int receivedSignalCounter;
@property (readonly, nonatomic) unsigned int receivedPacketDiscardCounter;
@property (readonly, nonatomic) unsigned int syncReceiptTimeoutCounter;
@property (readonly, nonatomic) unsigned int announceReceiptTimeoutCounter;
@property (readonly, nonatomic) unsigned int allowedLostResponsesExceededCounter;
@property (readonly, nonatomic) unsigned int transmittedSyncCounter;
@property (readonly, nonatomic) unsigned int transmittedFollowUpCounter;
@property (readonly, nonatomic) unsigned int transmittedAnnounceCounter;
@property (readonly, nonatomic) unsigned int transmittedSignalCounter;
@property (readonly, nonatomic) unsigned int transmittedPacketDiscardCounter;
@property (readonly, nonatomic) unsigned int attemptedSyncCounter;
@property (readonly, nonatomic) unsigned int attemptedFollowUpCounter;
@property (readonly, nonatomic) unsigned int attemptedAnnounceCounter;
@property (readonly, nonatomic) unsigned int attemptedSignalCounter;
@property (readonly, nonatomic) unsigned int rawDelayExceededCounter;
@property (readonly, nonatomic) unsigned int rawDelayMeasurementCounter;
@property (readonly, nonatomic) unsigned int receivedPDelayRequestCounter;
@property (readonly, nonatomic) unsigned int transmittedPDelayResponseCounter;
@property (readonly, nonatomic) unsigned int transmittedPDelayResponseFollowUpCounter;
@property (readonly, nonatomic) unsigned int attemptedPDelayResponseCounter;
@property (readonly, nonatomic) unsigned int attemptedPDelayResponseFollowUpCounter;
@property (readonly, nonatomic) unsigned int transmittedPDelayRequestCounter;
@property (readonly, nonatomic) unsigned int attemptedPDelayRequestCounter;
@property (readonly, nonatomic) unsigned int receivedPDelayResponseCounter;
@property (readonly, nonatomic) unsigned int receivedPDelayResponseFollowUpCounter;
@property (readonly, nonatomic) unsigned int receivedDelayRequestCounter;
@property (readonly, nonatomic) unsigned int transmittedDelayResponseCounter;
@property (readonly, nonatomic) unsigned int attemptedDelayResponseCounter;
@property (readonly, nonatomic) unsigned int transmittedDelayRequestCounter;
@property (readonly, nonatomic) unsigned int attemptedDelayRequestCounter;
@property (readonly, nonatomic) unsigned int receivedDelayResponseCounter;
@property (readonly, nonatomic) unsigned int supersededSyncCounter;
@property (readonly, nonatomic) unsigned int supersededDelayCounter;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPort:(id)a0 andProperties:(id)a1;

@end
