@class NSString, NSArray, NSOrderedSet, GEOPDActionData;

@interface GEOPlaceExternalAction : NSObject {
    GEOPDActionData *_actionData;
    NSOrderedSet *_appAdamIds;
}

@property (readonly, nonatomic) NSString *actionName;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) NSArray *actionProviders;
@property (readonly, nonatomic) NSOrderedSet *appAdamIds;
@property (readonly, nonatomic) NSString *winningAdamId;
@property (readonly, nonatomic) NSString *categoryId;

- (id)description;
- (void).cxx_destruct;
- (void)_setupActionProvidersWithAttributionMap:(id)a0;
- (id)initWithActionData:(id)a0 attributionMap:(id)a1;
- (id)partnerActionForAdamId:(id)a0;

@end
