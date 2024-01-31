@class NSString, IKViewElement, NSMutableDictionary, IKAppContext, IKDOMNode;
@protocol IKAppMenuBarDocumentDelegate, NSCopying;

@interface IKAppMenuBarDocument : NSObject <IKJSMenuBarDocumentAppBridge, IKDOMFeature> {
    IKDOMNode *_parentDOMNode;
    NSMutableDictionary *_jsDocumentsByEntityUniqueIdentifier;
    NSMutableDictionary *_documentsByEntityUniqueIdentifier;
    NSMutableDictionary *_documentOptionsByEntityUniqueIdentifier;
    id<NSCopying> _selectedEntityUniqueIdentifier;
}

@property (weak, nonatomic) IKViewElement *menuBarElement;
@property (weak, nonatomic) id<IKAppMenuBarDocumentDelegate> delegate;
@property (retain, nonatomic) IKViewElement *selectedMenuItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *featureName;
@property (readonly, weak, nonatomic) IKAppContext *appContext;

+ (id)makeFeatureJSObjectForFeature:(id)a0;

- (void).cxx_destruct;
- (id)documentForEntityUniqueIdentifier:(id)a0;
- (id)documentForMenuItem:(id)a0;
- (id)documentOptionsForEntityUniqueIdentifier:(id)a0;
- (id)documentOptionsForMenuItem:(id)a0;
- (id)initWithDOMNode:(id)a0 featureName:(id)a1;
- (void)migrateToViewElement:(id)a0;
- (void)_evaluateDelegateBlockSync:(id /* block */)a0;
- (id)_menuItemElementForEntityUniqueIdentifier:(id)a0;
- (id)jsMenuBarDocument:(id)a0 documentForEntityUniqueIdentifier:(id)a1;
- (void)jsMenuBarDocument:(id)a0 setDocument:(id)a1 forEntityUniqueIdentifier:(id)a2 withOptions:(id)a3;
- (void)jsMenuBarDocument:(id)a0 setSelectedEntityUniqueIdentifier:(id)a1 withOptions:(id)a2;
- (id)selectedItemForJsMenuBarDocument:(id)a0;

@end
