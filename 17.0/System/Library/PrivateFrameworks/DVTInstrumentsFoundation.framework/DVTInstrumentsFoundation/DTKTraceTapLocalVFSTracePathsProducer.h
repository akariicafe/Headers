@interface DTKTraceTapLocalVFSTracePathsProducer : NSObject <DTKTraceTapLocalEventProducer>

+ (BOOL)supportsConfig:(id)a0;

- (void)pause;
- (id)init;
- (void)start;
- (void)stop;
- (void)unpause;
- (void)_emitVFSDump;

@end
