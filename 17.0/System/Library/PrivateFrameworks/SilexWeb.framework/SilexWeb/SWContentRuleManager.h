@class NSObject, NSString, WKUserContentController;
@protocol OS_dispatch_group;

@interface SWContentRuleManager : NSObject <SWContentRuleManager>

@property (readonly, nonatomic) WKUserContentController *userContentController;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)removeContentListForIdentifier:(id)a0;
- (void)addContentRuleList:(id)a0 identifier:(id)a1;
- (id)configureContentRules;
- (id)initWithUserContentController:(id)a0;

@end
