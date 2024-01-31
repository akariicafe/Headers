@class IOUSBHostControllerInterface;

@interface IOUSBHostCIPortStateMachine : NSObject

@property (nonatomic) unsigned long long portNumber;
@property (nonatomic) int portState;
@property (nonatomic) unsigned int portStatus;
@property (retain, nonatomic) IOUSBHostControllerInterface *controllerInterface;
@property (nonatomic) BOOL powered;
@property (nonatomic) BOOL connected;
@property (nonatomic) BOOL overcurrent;
@property (readonly, nonatomic) int linkState;
@property (readonly, nonatomic) int speed;

- (id)description;
- (void).cxx_destruct;
- (id)initWithInterface:(id)a0 portNumber:(unsigned long long)a1 error:(id *)a2;
- (BOOL)inspectCommand:(const struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; } *)a0 error:(id *)a1;
- (BOOL)processCommand:(const struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; } *)a0 readonly:(BOOL)a1 commandResult:(int)a2 error:(id *)a3;
- (BOOL)respondToCommand:(const struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; } *)a0 status:(int)a1 error:(id *)a2;
- (BOOL)updateLinkState:(int)a0 speed:(int)a1 inhibitLinkStateChange:(BOOL)a2 error:(id *)a3;

@end
