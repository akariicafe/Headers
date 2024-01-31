@class NSDictionary, NSString, CoreTelephonyClient;

@interface FigCoreTelephony : NSObject <CoreTelephonyClientRegistrationDelegate> {
    CoreTelephonyClient *ctClient;
    struct OpaqueFigReentrantMutex { } *_cellStatsLock;
    int bars;
    NSDictionary *signalStrength;
    NSString *carrierName;
}

@property (readonly) NSDictionary *signalStrength;
@property (readonly) int bars;
@property (readonly) NSString *carrierName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithError:(id *)a0;
- (void)dealloc;
- (void)signalStrengthChanged:(id)a0 info:(id)a1;
- (void)saveCarrierName;
- (void)saveSignalStrengthInfo;

@end
