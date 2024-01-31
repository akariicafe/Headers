@class NSUUID, NSMutableSet, TLAccessQueue;

@interface TKVibratorController : NSObject {
    TLAccessQueue *_accessQueue;
    NSUUID *_activePlayRequestIdentifier;
    NSMutableSet *_pendingStopRequestIdentifiers;
}

@property (readonly, nonatomic) unsigned long long vibratorState;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)turnOff;
- (unsigned int)_previewVibrationSystemSoundID;
- (void)_turnOffIfAppropriate;
- (void)_vibrationDidCompleteWithPlayRequestIdentifier:(id)a0;
- (void)turnOnWithVibrationPattern:(id)a0;

@end
