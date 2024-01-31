@interface HMDSoftwareUpdateFetchedEvent : HMMLogEvent

@property (nonatomic, getter=wasUserInitiated) BOOL userInitiated;
@property (nonatomic, getter=wasNewUpdateFetched) BOOL newUpdateFetched;

+ (id)eventWasUserInitiated:(BOOL)a0 wasNewUpdateFetched:(BOOL)a1;

@end
