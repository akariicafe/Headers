@class NSString, CARSessionStatus, NSDate;

@interface MapsSuggestionsCarplayDisconnectedCondition : MapsSuggestionsBaseCondition <CARSessionObserving> {
    CARSessionStatus *_carSessionStatus;
    double _disconnectDelay;
}

@property (retain) NSDate *disconnectTime;
@property BOOL isInitialized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
