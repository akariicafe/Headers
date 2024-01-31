@class NSString;

@interface IMAssistantMessagePlayMessageSoundHandler : IMAssistantMessageQueryHandler <INPlayMessageSoundIntentHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handlePlayMessageSound:(id)a0 completion:(id /* block */)a1;
- (id)playSendSoundForMessageGUID:(id)a0;

@end
