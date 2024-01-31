@class NSMutableDictionary;

@interface _UIHIDPathCollection : NSObject {
    NSMutableDictionary *_pathsById;
    struct CGPoint { double x; double y; } _position;
    unsigned int _buttonMask;
    unsigned long long _machTimestamp;
    unsigned char _locus;
    struct __IOHIDEvent { } *_hidEvent;
}

@property (nonatomic) unsigned long long digitizerSenderID;
@property (readonly, nonatomic) unsigned long long pathCount;
@property (nonatomic) unsigned int fallbackContextId;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)addPath:(id)a0;
- (struct __IOHIDEvent { } *)_createCollectionEventForEvent:(struct __IOHIDEvent { } *)a0;
- (unsigned int)_collectionMask;
- (BOOL)hasPathWithId:(id)a0;
- (id)hidEventFromCurrentState;
- (id)pathWithId:(id)a0;
- (id)pathsInPhase:(long long)a0;
- (id)pathsTouching;
- (void)removePath:(id)a0;
- (void)updateEventTimestamp:(unsigned long long)a0;
- (void)updateWithHIDEvent:(struct __IOHIDEvent { } *)a0;

@end
