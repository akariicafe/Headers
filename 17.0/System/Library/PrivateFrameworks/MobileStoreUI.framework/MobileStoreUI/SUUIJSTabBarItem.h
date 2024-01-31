@class NSString, IKJSNavigationDocument, JSManagedValue, IKJSObject, SUUITabBarItem;

@interface SUUIJSTabBarItem : IKJSObject <SUUIJSTabBarItem> {
    JSManagedValue *_managedNavigationDocument;
    IKJSNavigationDocument *_navigationDocument;
    IKJSObject *_owner;
}

@property (readonly, nonatomic) SUUITabBarItem *tabBarItem;
@property (retain, nonatomic) NSString *badgeValue;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) IKJSNavigationDocument *navigationDocument;
@property (readonly, nonatomic) NSString *rootURL;
@property (readonly, nonatomic) NSString *title;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAppContext:(id)a0 navigationController:(id)a1 tabBarItem:(id)a2 owner:(id)a3;

@end
