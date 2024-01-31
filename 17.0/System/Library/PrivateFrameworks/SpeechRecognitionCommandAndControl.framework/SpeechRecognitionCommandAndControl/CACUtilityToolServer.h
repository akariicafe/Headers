@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CACUtilityToolServer : NSObject {
    NSObject<OS_dispatch_queue> *_toolServerDispatchQueue;
    NSObject<OS_xpc_object> *_feedbackListener;
}

@property (retain, nonatomic) NSMutableSet *xpcClients;
@property (retain, nonatomic) NSString *phoneticAlternative;

+ (id)sharedInstance;

- (void)startObserving;
- (void)addClient:(id)a0;
- (id)init;
- (void)removeClient:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)dictationStatus;
- (id)listeningStatus;
- (void)_getNumbersForElements;
- (id)drillStatus;
- (id)gridNumberToHitRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 displayID:(unsigned int)a1;
- (void)notifyClients:(id)a0;
- (void)notifyCorrectionForString;
- (void)notifyDictationModeChanged;
- (void)notifyDidDictateText;
- (void)notifyDrilled;
- (void)notifyListeningStatusChanged;
- (void)notifyNumbersForOnboardingElements;
- (void)notifyOverlayStatusChanged;
- (void)notifyRecognizedCommandIdentifier;
- (id)numbersForOnboardingElements;
- (id)overlayStatus;
- (id)recognizedCommandIdentifier;

@end
