@class UIWindowScene, NSString, NSMapTable, NSMutableOrderedSet;

@interface _UIKeyWindowSceneStack : NSObject <BSDebugDescriptionProviding> {
    NSMapTable *_recordsByWindowScene;
    NSMutableOrderedSet *_orderedRecords;
    UIWindowScene *_keyWindowSceneInStack;
    struct { unsigned char affectsApplicationKeyWindow : 1; unsigned char hasViewServiceEntitlement : 1; } _sceneStackFlags;
    NSString *_name;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;

@end
