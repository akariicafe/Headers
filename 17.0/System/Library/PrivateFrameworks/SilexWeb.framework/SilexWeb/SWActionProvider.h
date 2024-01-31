@class NSString, NSMutableArray;
@protocol SWActionFactory, SWLogger, SWEmbedAction;

@interface SWActionProvider : NSObject <SWMessageHandler, SWActionProvider>

@property (readonly, nonatomic) id<SWActionFactory> actionFactory;
@property (readonly, nonatomic) id<SWLogger> logger;
@property (readonly, nonatomic) NSMutableArray *actionBlocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<SWEmbedAction> action;

@end
