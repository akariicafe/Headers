@class NSString;

@interface WFWaitForReadingListCompletionActionOperation : NSObject <WFActionExtendedOperation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)addCompletionHandlerIfRunning:(id /* block */)a0;

@end
