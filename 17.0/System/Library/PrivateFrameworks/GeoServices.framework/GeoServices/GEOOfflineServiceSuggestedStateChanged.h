@class NSString;

@interface GEOOfflineServiceSuggestedStateChanged : GEOXPCRequest <GEOXPCRequest>

@property (nonatomic) unsigned long long currentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)replyClass;

@end
