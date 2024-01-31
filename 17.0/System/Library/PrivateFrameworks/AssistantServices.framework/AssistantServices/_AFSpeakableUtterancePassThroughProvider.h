@class NSString;

@interface _AFSpeakableUtterancePassThroughProvider : NSObject <AFSpeakableNamespaceProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stringForExpression:(id)a0;
- (id)stringForExpression:(id)a0 containsPrivacySensitiveContents:(BOOL *)a1;

@end
