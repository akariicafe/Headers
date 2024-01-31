@class NSArray, NSString, NSDictionary, VUIAction;

@interface VUIOpenURLRouterDataSource : NSObject

@property (copy, nonatomic) NSArray *documentDataSources;
@property (retain, nonatomic) VUIAction *action;
@property (retain, nonatomic) VUIAction *postAction;
@property (retain, nonatomic) NSString *tabIdentifier;
@property (copy, nonatomic) NSDictionary *localLibraryLink;
@property (retain, nonatomic) NSString *nativePageName;
@property (nonatomic) BOOL actionFirst;

+ (id)routerDataSourceWithDict:(id)a0 appContext:(id)a1;

- (void).cxx_destruct;

@end
