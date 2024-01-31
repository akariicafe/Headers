@class NSArray, VSRecognitionAction;
@protocol VSRecognitionResultHandler;

@interface VSRecognitionResultHandlingRequest : NSObject {
    id<VSRecognitionResultHandler> _handler;
    NSArray *_results;
    VSRecognitionAction *_action;
}

- (void)dealloc;
- (id)results;
- (id)handler;
- (id)nextAction;
- (id)initWithHandler:(id)a0 results:(id)a1;
- (void)setNextAction:(id)a0;

@end
