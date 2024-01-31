@class NSString;

@interface FMFindingUI.FMR1InstructionsController : NSObject {
    void /* unknown type, empty encoding */ constants;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ previousInState;
    void /* unknown type, empty encoding */ outState;
    void /* unknown type, empty encoding */ searchingDelayWorkItem;
    void /* unknown type, empty encoding */ searchingNoBTConnectionWorkItem;
    void /* unknown type, empty encoding */ tryMovingNoBTConnectionWorkItem;
    void /* unknown type, empty encoding */ searchingWithBTConnectionWorkItem;
    void /* unknown type, empty encoding */ stillSearchingWithBTConnectionWorkItem;
    void /* unknown type, empty encoding */ autoDismissWorkItem;
    void /* unknown type, empty encoding */ searchingNoBTConnectionCount;
    void /* unknown type, empty encoding */ experienceType;
    void /* unknown type, empty encoding */ findable;
    void /* unknown type, empty encoding */ isBTConnected;
    void /* unknown type, empty encoding */ isRanging;
    void /* unknown type, empty encoding */ inState;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
