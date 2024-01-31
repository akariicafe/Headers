@class NSString;

@interface SWSystemActivityAcquisitionDetails : NSObject <SWSystemActivityAcquisitionDetails>

@property (readonly, nonatomic) BOOL afterPendingSleepWasAlreadyInitiated;
@property (readonly, nonatomic) BOOL afterFailingToRevertPendingSleep;
@property (readonly, nonatomic) BOOL afterSleepOfNonZeroDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAfterPendingSleepWasAlreadyInitiated:(BOOL)a0 afterFailingToRevertPendingSleep:(BOOL)a1 afterSleepOfNonZeroDuration:(BOOL)a2;

@end
