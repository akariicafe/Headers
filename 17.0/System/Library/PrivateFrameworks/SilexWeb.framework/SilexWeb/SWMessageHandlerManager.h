@class NSString, NSMutableDictionary;
@protocol SWLogger;

@interface SWMessageHandlerManager : NSObject <WKScriptMessageHandler, SWMessageHandlerManager>

@property (readonly, nonatomic) id<SWLogger> logger;
@property (readonly, nonatomic) NSMutableDictionary *messageHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
