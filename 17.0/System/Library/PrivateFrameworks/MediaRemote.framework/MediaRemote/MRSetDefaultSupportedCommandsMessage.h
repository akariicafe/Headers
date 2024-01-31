@class NSArray, NSString, MRNowPlayingState;

@interface MRSetDefaultSupportedCommandsMessage : MRProtocolMessage {
    MRNowPlayingState *_state;
}

@property (readonly, nonatomic) NSArray *supportedCommands;
@property (readonly, nonatomic) NSString *bundleID;

- (id)initWithUnderlyingCodableMessage:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithDefaultSupportedCommands:(id)a0 forPlayerPath:(id)a1 encoding:(long long)a2;

@end
