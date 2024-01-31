@class COMeshCommand, NSString, COMeshNode;

@interface COMeshControllerQueuedCommand : NSObject <COMeshControllerQueuedElementProtocol>

@property (readonly, nonatomic) COMeshCommand *command;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) COMeshNode *destination;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
