@class NSString, TLAlert;

@interface STKToneAlertSound : STKBaseSound <STKSound> {
    TLAlert *_alert;
    long long _alertType;
    BOOL _finishedSoundNormally;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
