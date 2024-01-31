@interface MediaPlaybackCore.PlayingState : MediaPlaybackCore.TransportableState {
    void /* unknown type, empty encoding */ resumeOnEnter;
    void /* unknown type, empty encoding */ isStalled;
    void /* unknown type, empty encoding */ lastPlayingItemID;
    void /* unknown type, empty encoding */ playbackStopReason;
    void /* unknown type, empty encoding */ playbackStopRecoveryTimer;
    void /* unknown type, empty encoding */ playbackStopRecoveryDelay;
}

@end
