@class CMIOExtensionPropertyState, CMIOExtensionSessionStream;

@interface CMIOExtensionSessionDualStream : CMIOExtensionSessionStream {
    CMIOExtensionSessionStream *_primaryStream;
    CMIOExtensionSessionStream *_secondaryStream;
    CMIOExtensionSessionStream *_activeStream;
    CMIOExtensionPropertyState *_cinematicFramingEnabled;
}

@property (readonly, nonatomic) CMIOExtensionSessionStream *primaryStream;
@property (readonly, nonatomic) CMIOExtensionSessionStream *secondaryStream;
@property (readonly, nonatomic) CMIOExtensionSessionStream *activeStream;

+ (id)sessionDualStreamWithPrimaryStream:(id)a0 secondaryStream:(id)a1;

- (void)dealloc;
- (id)formats;
- (id)delegate;
- (void)setActiveFormatIndex:(unsigned long long)a0;
- (void)completeTransaction;
- (void)setDelegate:(id)a0;
- (unsigned long long)activeFormatIndex;
- (id)cachedPropertyStateForProperty:(id)a0;
- (void)propertyStatesForProperties:(id)a0 reply:(id /* block */)a1;
- (void)setActiveFormatIndex:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)setPropertyValues:(id)a0 reply:(id /* block */)a1;
- (void)startStream:(id /* block */)a0;
- (void)stopStream:(id /* block */)a0;
- (id)cachedPropertyStatesForProperties:(id)a0;
- (id)copySample:(BOOL *)a0 streamID:(id)a1 error:(id *)a2;
- (id)initWithPrimaryStream:(id)a0 secondaryStream:(id)a1;
- (void)receivedSample:(id)a0 streamID:(id)a1;
- (void)receivedScheduledOutput:(id)a0 streamID:(id)a1;
- (void)selectStream:(unsigned long long)a0;
- (void)updatePropertyStates:(id)a0 streamID:(id)a1;

@end
