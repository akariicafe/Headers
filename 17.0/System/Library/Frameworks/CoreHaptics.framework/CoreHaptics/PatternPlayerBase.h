@class NSString, NSArray, CHHapticEngine;

@interface PatternPlayerBase : NSObject <PatternPlayerDetails> {
    NSArray *_events;
    int _muteState;
    unsigned char _previousAction;
}

@property (weak) CHHapticEngine *engine;
@property (readonly) NSString *patternID;
@property (readonly) double patternDuration;

- (void).cxx_destruct;
- (BOOL)needsResetForAction:(unsigned char)a0;

@end
