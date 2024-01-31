@class NSArray, NSString, SUScriptURLRequest;

@interface SUScriptProtocol : SUScriptObject

@property (retain) NSArray *allowedOrientations;
@property (readonly) NSString *clientIdentifier;
@property (retain) NSString *copyright;
@property BOOL excludeFromNavigationHistory;
@property (retain) SUScriptURLRequest *overlayBackgroundURLRequest;
@property (readonly) NSString *protocolVersion;
@property BOOL shouldShowInOverlay;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)_copyProtocol;
- (void)_setProtocol:(id)a0;
- (void)_setValue:(id)a0 forProtocolKey:(id)a1;
- (id)_webThreadValueForProtocolKey:(id)a0;
- (void)setValuesFromDictionary:(id)a0;

@end
