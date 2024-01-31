@class MRCommandResult;

@interface MRSendCommandResultMessage : MRProtocolMessage {
    MRCommandResult *_commandResult;
}

@property (readonly, nonatomic) MRCommandResult *commandResult;

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithCommandID:(id)a0 commandResult:(id)a1;
- (unsigned int)sendError;

@end
