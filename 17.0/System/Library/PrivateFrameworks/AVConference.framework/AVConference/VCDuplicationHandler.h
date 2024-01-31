@interface VCDuplicationHandler : NSObject {
    unsigned char _duplicationState;
    unsigned char _duplicationReason;
    BOOL _moreThanOneConnectionAvailable;
    struct { BOOL isAlertEnabled; unsigned char connectionWiFiCount; unsigned char connectionCellCount; BOOL isDuplicationDisabledDueToAlert; } _localAlertInfo;
    struct { BOOL isAlertEnabled; unsigned char connectionWiFiCount; unsigned char connectionCellCount; BOOL isDuplicationDisabledDueToAlert; } _remoteAlertInfo;
    BOOL _forceDisableDuplication;
}

@property (readonly) BOOL isDuplicationPending;
@property BOOL isRemotePreAzul;
@property BOOL iRATDuplicationEnabled;
@property BOOL allowDuplication;
@property BOOL isUserMoving;

- (id)init;

@end
