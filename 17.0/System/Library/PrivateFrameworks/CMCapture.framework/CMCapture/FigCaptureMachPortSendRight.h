@interface FigCaptureMachPortSendRight : NSObject {
    BOOL _invalid;
}

@property (readonly, nonatomic) unsigned int port;

- (void)dealloc;
- (id)initWithPort:(unsigned int)a0;
- (void)invalidate;
- (id)description;

@end
