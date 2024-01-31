@class NSString, NSArray, NSMutableDictionary;

@interface OKPresentationCouchStep : OKPresentationCanvas {
    NSMutableDictionary *_internalSettings;
}

@property (readonly) NSString *anchorPage;
@property (readonly) NSString *script;
@property (readonly) double duration;
@property (nonatomic) BOOL ignoresBusiness;
@property (copy, nonatomic) NSArray *dependencies;

+ (id)couchStepWithAnchorPageName:(id)a0 script:(id)a1 duration:(double)a2 settings:(id)a3;

- (id)init;
- (void)dealloc;
- (id)dictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)resolveIfNeeded;
- (id)initWithDictionary:(id)a0 forPresentation:(id)a1 andCouch:(id)a2;
- (id)parentCouch;

@end
