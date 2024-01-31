@class NSDictionary;

@interface MediaPlaybackCore.PlayerFSM : _TtCs12_SwiftObject <MFStateDumpable, MFResettable> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ states;
    void /* unknown type, empty encoding */ controller;
}

@property (nonatomic, readonly) NSDictionary *stateDictionary;

- (void)resetWithReason:(id)a0;

@end
