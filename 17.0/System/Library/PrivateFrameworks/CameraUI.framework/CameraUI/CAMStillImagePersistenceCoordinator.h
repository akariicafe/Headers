@class NSString, NSMutableDictionary;
@protocol CAMStillImagePersistenceCoordinatorDelegate;

@interface CAMStillImagePersistenceCoordinator : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_receivedCoordinationInfos;
@property (readonly, nonatomic) NSMutableDictionary *_pendingLocalPersistenceResults;
@property (readonly, nonatomic) NSString *_loggingPrefix;
@property (readonly, weak, nonatomic) id<CAMStillImagePersistenceCoordinatorDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *loggingIdentifier;
@property (readonly, nonatomic) BOOL hasReceivedAllExpectedResponses;

- (id)_debugStringForUnreceivedResultSpecifiersFromExpectedResultSpecifiers:(id)a0 receivedCoordinationInfos:(id)a1;
- (unsigned int)_powerAssertionReasonForResultSpecifiers:(unsigned long long)a0;
- (void)_dispatchRemotePersistenceIfPossibleForResultSpecifiers:(unsigned long long)a0 request:(id)a1;
- (void)_dispatchRemotePersistenceIfPossibleForPairWithOriginalResultSpecifiers:(unsigned long long)a0 processedResultSpecifiers:(unsigned long long)a1 request:(id)a2 shouldPersistAsSingleAsset:(BOOL)a3;
- (void)updateForTimeoutTimerFiredForCoordinationInfo:(id)a0 request:(id)a1;
- (id)initWithDelegate:(id)a0 loggingIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)updateForCoordinationInfo:(id)a0 localPersistenceResult:(id)a1 request:(id)a2;

@end
