@interface SRSensorWriterWrapper : NSObject <TISensorWriterWrapper>

+ (id)writerInstance;

- (void)write:(id)a0;
- (BOOL)isReady;
- (void)publishSessionStats:(id)a0 withSessionStartTime:(BOOL)a1;
- (void)write:(id)a0 withTimeStamp:(id)a1;

@end
