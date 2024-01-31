@class _TtC13HomeDataModel21CoordinationDataModel;

@interface HomeDataModel.CoordinationDataModel : NSObject {
    void /* unknown type, empty encoding */ _currentStateSnapshot;
    void /* unknown type, empty encoding */ managers;
    void /* unknown type, empty encoding */ mtAlarms;
    void /* unknown type, empty encoding */ mtTimers;
    void /* unknown type, empty encoding */ currentHome;
    void /* unknown type, empty encoding */ stateSnapshotUpdatesStream;
    void /* unknown type, empty encoding */ updateStateSnapshot;
    void /* unknown type, empty encoding */ incomingCoordinationMessagesQueue;
}

@property (class, nonatomic, readonly) _TtC13HomeDataModel21CoordinationDataModel *shared;

- (id)init;
- (void).cxx_destruct;

@end
