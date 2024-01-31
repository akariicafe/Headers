@class NSString, NSArray, TSKAuthorColors;

@interface TSKAnnotationAuthor : TSPObject <TSKAuthor, TSPCopying> {
    TSKAuthorColors *_colors;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *publicIDs;
@property (copy, nonatomic) NSString *flattenedPublicID;
@property (nonatomic) BOOL isPublicAuthor;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL showAuthorComments;
@property (retain, nonatomic) TSKAuthorColors *colors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultAuthorName;
+ (id)normalizedAuthorNameForAuthorName:(id)a0;
+ (id)authorNameExplanatoryStringWithUseExplanation:(BOOL)a0 withSettingsExplanation:(BOOL)a1;
+ (void)enumerateAnnotationsInDocument:(id)a0 withAuthor:(id)a1 usingHitBlock:(id /* block */)a2;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithContext:(id)a0;
- (BOOL)allowsImplicitComponentOwnership;
- (id)componentRootObject;
- (id)initWithContext:(id)a0 name:(id)a1 color:(id)a2;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)initWithContext:(id)a0 name:(id)a1 color:(id)a2 privateID:(id)a3;
- (id)initWithContext:(id)a0 name:(id)a1 color:(id)a2 privateIDs:(id)a3;
- (id)initWithContext:(id)a0 name:(id)a1 color:(id)a2 publicIDs:(id)a3 isPublicAuthor:(BOOL)a4;
- (BOOL)isPreferredOver:(id)a0;

@end
