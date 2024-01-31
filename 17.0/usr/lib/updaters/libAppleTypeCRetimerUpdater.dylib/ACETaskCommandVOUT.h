@interface ACETaskCommandVOUT : ACETaskCommand

@property (readonly) BOOL enabled;
@property (readonly) BOOL forceDFU;

- (id)description;
- (id)inputData;
- (id)initWithEnabled:(BOOL)a0 forceDFU:(BOOL)a1;

@end
