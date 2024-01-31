@interface MediaPlaybackCore.PausedState : MediaPlaybackCore.TransportableState {
    void /* unknown type, empty encoding */ reason;
    void /* unknown type, empty encoding */ metadata;
    void /* unknown type, empty encoding */ playbackDidStopWasProcessed;
    void /* unknown type, empty encoding */ signalOnEnter;
    void /* unknown type, empty encoding */ playbackDidStartEvent;
    void /* unknown type, empty encoding */ prepareForPlaybackEvent;
    void /* unknown type, empty encoding */ fadeOut;
    void /* unknown type, empty encoding */ suppressed;
}

@end
