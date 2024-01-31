@protocol SAAceCommand, NSCopying;

@interface _AddDialogsContextPair : NSObject

@property (readonly, retain) id<SAAceCommand> command;
@property (readonly, retain) id<NSCopying> context;

- (void).cxx_destruct;
- (id)initWithCommand:(id)a0 context:(id)a1;

@end
