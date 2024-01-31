@interface BMTombstoneEventEnumerator : BMStoreEnumeratorBase

- (id)_eventWithFrameStore:(id)a0 frame:(id)a1 error:(unsigned char)a2;
- (id)_originalEventWithFrameStore:(id)a0 frame:(id)a1 error:(unsigned char)a2;
- (id)nextEvent;
- (id)peekTombstoneEvent;
- (id)nextTombstoneEvent;
- (id)peekEvent;

@end
