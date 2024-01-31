@class NSString, NSMutableArray;
@protocol TIKeyboardInteractionProtocol;

@interface TITypingSessionLogger : NSObject <NSSecureCoding, TIKeyboardInteractionObserver> {
    id<TIKeyboardInteractionProtocol> _savedSession;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSMutableArray *typingEvents;
@property (readonly) unsigned long long eventCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)acceptingCandidateWithTrigger:(id)a0;
- (void)changingContextWithTrigger:(id)a0;
- (id)init;
- (void)candidatesOffered:(id)a0 keyboardState:(id)a1;
- (void)contextDidChange:(id)a0 wordDelete:(BOOL)a1 cursorMoved:(BOOL)a2 extendsPriorWord:(BOOL)a3 inWord:(id)a4 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 selectionLocation:(unsigned long long)a6 keyboardState:(id)a7;
- (void)encodeWithCoder:(id)a0;
- (void)addDrawInputWithSyllableCount:(unsigned long long)a0 keyboardState:(id)a1;
- (void)endSessionWithTimestamp:(id)a0;
- (void)addKeyInput:(id)a0 keyboardState:(id)a1;
- (void).cxx_destruct;
- (void)candidateAccepted:(id)a0 withInput:(id)a1 documentState:(id)a2 inputContext:(id)a3 inputStem:(id)a4 predictionBarHit:(BOOL)a5 useCandidateSelection:(BOOL)a6 candidateIndex:(long long)a7 keyboardState:(id)a8;
- (void)layoutDidChange:(id)a0 keyboardState:(id)a1;
- (void)startSessionWithTimestamp:(id)a0;
- (void)addTouchEvent:(id)a0;
- (void)setClientID:(id)a0 keyboardState:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)sendTo:(id)a0;
- (void)analyzeSessionWithSessionParams:(id)a0;
- (id)logDetailsForKeyboardState:(id)a0;
- (void)saveRecording;
- (id)savedSession;
- (BOOL)shouldPrintEvent:(id)a0;
- (id)temporaryKeyboardsDirectory;

@end
