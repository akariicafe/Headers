@interface FBSApplicationLibraryConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) Class applicationInfoClass;
@property (retain, nonatomic) Class applicationPlaceholderClass;
@property (nonatomic) BOOL allowConcurrentLoading;
@property (nonatomic, getter=isPersonaAware) BOOL personaAware;
@property (copy, nonatomic) id /* block */ installedApplicationFilter;
@property (copy, nonatomic) id /* block */ placeholderFilter;
@property (copy, nonatomic) id /* block */ applicationIdentityFilter;
@property (copy, nonatomic) id /* block */ placeholderIdentityFilter;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
