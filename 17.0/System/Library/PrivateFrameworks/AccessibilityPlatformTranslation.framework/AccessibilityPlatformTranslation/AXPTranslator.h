@class NSMutableDictionary;
@protocol AXPTranslationTokenDelegateHelper, AXPTranslationDelegateHelper, AXPTranslationRuntimeHelper, AXPTranslationSystemAppDelegate;

@interface AXPTranslator : NSObject

@property (retain, nonatomic) NSMutableDictionary *fakeElementCache;
@property (nonatomic) BOOL supportsDelegateTokens;
@property (weak, nonatomic) id<AXPTranslationDelegateHelper> bridgeDelegate;
@property (weak, nonatomic) id<AXPTranslationTokenDelegateHelper> bridgeTokenDelegate;
@property (weak, nonatomic) id<AXPTranslationRuntimeHelper> runtimeDelegate;
@property (nonatomic) BOOL accessibilityEnabled;
@property (weak, nonatomic) id<AXPTranslationSystemAppDelegate> systemAppDelegate;

+ (id)sharedInstance;
+ (id)sharediOSInstance;

- (id)init;
- (void).cxx_destruct;
- (id)processHitTest:(id)a0;
- (id /* block */)attributedStringConversionBlock;
- (id)platformElementFromTranslation:(id)a0;
- (void)_resetBridgeTokensForResponse:(id)a0 bridgeDelegateToken:(id)a1;
- (id)_translationApplicationObjectForPidNumber:(id)a0;
- (void)enableAccessibility;
- (id)frontmostApplicationWithDisplayId:(unsigned int)a0 bridgeDelegateToken:(id)a1;
- (void)handleNotification:(unsigned long long)a0 data:(id)a1 associatedObject:(id)a2;
- (void)initializeAXRuntimeForSystemAppServer;
- (id)iosPlatformElementFromTranslation:(id)a0;
- (id)objectAtPoint:(struct CGPoint { double x0; double x1; })a0 displayId:(unsigned int)a1 bridgeDelegateToken:(id)a2;
- (id)platformTranslator;
- (id)processActionRequest:(id)a0;
- (id)processAttributeRequest:(id)a0;
- (id)processCanSetAttribute:(id)a0;
- (id)processFrontMostApp:(id)a0;
- (id)processMultipleAttributeRequest:(id)a0;
- (void)processPlatformNotification:(unsigned long long)a0 data:(id)a1;
- (id)processSetAttribute:(id)a0;
- (id)processSupportedActions:(id)a0;
- (id)processSupportsAttributes:(id)a0;
- (id)processTranslatorRequest:(id)a0;
- (id)remoteTranslationDataWithTranslation:(id)a0 pid:(int)a1;
- (id)sendTranslatorRequest:(id)a0;
- (id)translationApplicationObject;
- (id)translationApplicationObjectForPid:(int)a0;
- (id)translationObjectFromData:(id)a0;

@end
