@class NSString, NSMutableDictionary;

@interface OKPresentationMaterial : OKPresentationCanvas {
    NSString *_templateName;
    NSString *_internalName;
    NSString *_internalClassName;
    NSMutableDictionary *_internalSettings;
    NSMutableDictionary *_internalUserData;
}

@property (copy, nonatomic) NSString *className;

+ (id)materialWithName:(id)a0 templateName:(id)a1 className:(id)a2 settings:(id)a3 userData:(id)a4;

- (id)init;
- (void)dealloc;
- (id)dictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)resolveIfNeeded;
- (id)initWithDictionary:(id)a0 forPresentation:(id)a1 andParent:(id)a2;
- (id)materialTemplate;
- (id)parentWidget;

@end
