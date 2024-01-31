@class NSMutableArray;

@interface TRICKOpCancelingGuardedData : NSObject {
    NSMutableArray *opsInFlight;
    BOOL cancelReceived;
}

- (void).cxx_destruct;

@end
