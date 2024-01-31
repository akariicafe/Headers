@interface ML3DatabaseFunctionPointer : ML3DatabaseFunction

@property (nonatomic) void /* function */ *functionPointer;
@property (nonatomic) void *userData;

- (BOOL)registerWithConnection:(id)a0;

@end
