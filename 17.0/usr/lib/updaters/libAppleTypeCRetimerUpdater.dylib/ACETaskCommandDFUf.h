@interface ACETaskCommandDFUf : ACETaskCommand

@property (readonly) BOOL forceDFUMode;
@property (readonly) BOOL allowOnlyIfConnected;

- (id)description;
- (id)inputData;
- (id)initWithForceDFUMode:(BOOL)a0 allowOnlyIfConnected:(BOOL)a1;

@end
