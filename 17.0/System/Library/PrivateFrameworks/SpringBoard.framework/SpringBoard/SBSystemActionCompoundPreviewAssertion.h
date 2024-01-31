@class SBSystemActionPreviewAssertion, NSCountedSet, NSString;

@interface SBSystemActionCompoundPreviewAssertion : NSObject {
    id /* block */ _stateDidChangeBlock;
    id /* block */ _eventHandlingBlock;
    SBSystemActionPreviewAssertion *_lastAcquiredAssertion;
    NSCountedSet *_previewingReasons;
    NSCountedSet *_expansionReasons;
    NSCountedSet *_urgencyReasons;
    struct SBSystemActionCompoundPreviewState { BOOL isPreviewing; BOOL isExpanding; BOOL isProminent; BOOL isUrgent; } _state;
    NSString *_identifier;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;

@end
