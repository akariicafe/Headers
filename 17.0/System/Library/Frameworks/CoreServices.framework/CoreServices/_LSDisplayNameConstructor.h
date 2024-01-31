@class NSString;

@interface _LSDisplayNameConstructor : NSObject {
    NSString *_originalName;
    NSString *_baseName;
    NSString *_extension;
    NSString *_secondaryExtension;
    unsigned char _wantsHiddenExtension : 1;
    unsigned char _isFolder : 1;
    unsigned char _isApplication : 1;
    unsigned char _hadNonASCIICharacter : 1;
    unsigned char _hadColonInFSName : 1;
    unsigned char _hadBiDiControlCharacter : 1;
    unsigned char _hadForbiddenCharacter : 1;
}

@property (class, nonatomic) BOOL showAllExtensions;
@property (class, copy, nonatomic) NSString *suffixForRemoteXCTests;

+ (id)displayNameConstructorsWithContextIfNeeded:(struct Context { struct LSContext *x0; struct LSContext { id x0; } x1; BOOL x2; id x3; } *)a0 node:(id)a1 error:(id *)a2;
+ (unsigned char)prepareMimicWithPopulator:(id)a0 error:(id *)a1;
+ (id)displayNameConstructorWithContext:(struct LSContext { id x0; } *)a0 node:(id)a1 error:(id *)a2;
+ (id)displayNameConstructorsWithContext:(struct LSContext { id x0; } *)a0 bundle:(unsigned int)a1 bundleClass:(const unsigned int *)a2 node:(id)a3 error:(id *)a4;
+ (id)displayNameConstructorWithContext:(struct LSContext { id x0; } *)a0 bundle:(unsigned int)a1 bundleClass:(const unsigned int *)a2 node:(id)a3 preferredLocalizations:(id)a4 error:(id *)a5;
+ (void)getExtensionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 secondaryExtensionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 fromFileName:(id)a2 considerConfusables:(BOOL)a3;
+ (id)concatenateBaseName:(id)a0 andExtension:(id)a1;
+ (id)displayNameConstructorWithContextIfNeeded:(struct Context { struct LSContext *x0; struct LSContext { id x0; } x1; BOOL x2; id x3; } *)a0 bundle:(unsigned int)a1 bundleClass:(const unsigned int *)a2 node:(id)a3 preferredLocalizations:(id)a4 error:(id *)a5;
+ (void)setSuffixForRemoteXCTests:(id)a0;
+ (id)displayNameConstructorWithContextIfNeeded:(struct Context { struct LSContext *x0; struct LSContext { id x0; } x1; BOOL x2; id x3; } *)a0 node:(id)a1 error:(id *)a2;
+ (id)displayNameConstructorsWithContextIfNeeded:(struct Context { struct LSContext *x0; struct LSContext { id x0; } x1; BOOL x2; id x3; } *)a0 bundle:(unsigned int)a1 bundleClass:(const unsigned int *)a2 node:(id)a3 error:(id *)a4;
+ (id)displayNameConstructorsWithContext:(struct LSContext { id x0; } *)a0 node:(id)a1 error:(id *)a2;
+ (id)suffixForRemoteXCTests;

- (id)initWithContextIfNeeded:(struct Context { struct LSContext *x0; struct LSContext { id x0; } x1; BOOL x2; id x3; } *)a0 node:(id)a1 isDirectory:(BOOL)a2 bundleClass:(const unsigned int *)a3 desiredDisplayName:(id)a4 treatAsFSName:(BOOL)a5;
- (id)insertCompleteNameBiDiControlCharacters:(id)a0;
- (id)unlocalizedNameWithContext:(struct LSContext { id x0; } *)a0;
- (id)init;
- (id)insertNameComponentBiDiControlCharacters:(id)a0;
- (id)unlocalizedNameWithContextIfNeeded:(struct Context { struct LSContext *x0; struct LSContext { id x0; } x1; BOOL x2; id x3; } *)a0;
- (id)combineBaseName:(id)a0 extension:(id)a1;
- (BOOL)wantsHiddenExtension;
- (BOOL)showExtensionWithContextIfNeeded:(struct Context { struct LSContext *x0; struct LSContext { id x0; } x1; BOOL x2; id x3; } *)a0 asIfShowingAllExtensions:(id)a1;
- (BOOL)mayHideExtensionWithContextIfNeeded:(struct Context { struct LSContext *x0; struct LSContext { id x0; } x1; BOOL x2; id x3; } *)a0;
- (void)getTransformedBaseName:(id *)a0 extension:(id *)a1 needsBiDiControlCharacters:(BOOL[2])a2;
- (id)unlocalizedNameWithContext:(struct LSContext { id x0; } *)a0 asIfShowingAllExtensions:(id)a1;
- (void)getUnlocalizedBaseName:(id *)a0 extension:(id *)a1 requiresAdditionalBiDiControlCharacters:(BOOL *)a2;
- (id)transformBeforeCombining:(id)a0 needsBiDiControlCharacters:(BOOL *)a1;
- (id)cleanSecondaryExtension:(id)a0;
- (void)initNamePartsWithDisplayName:(id)a0;
- (void).cxx_destruct;
- (BOOL)isStringNaturallyRTL:(id)a0;
- (BOOL)canSetExtensionHiddenWithContext:(struct LSContext { id x0; } *)a0;
- (id)unlocalizedNameWithContextIfNeeded:(struct Context { struct LSContext *x0; struct LSContext { id x0; } x1; BOOL x2; id x3; } *)a0 asIfShowingAllExtensions:(id)a1;
- (void)initContentBitsWithDisplayName:(id)a0 treatAsFSName:(BOOL)a1;
- (void)initNodeBitsWithContextIfNeeded:(struct Context { struct LSContext *x0; struct LSContext { id x0; } x1; BOOL x2; id x3; } *)a0 node:(id)a1 isDirectory:(BOOL)a2 bundleClass:(const unsigned int *)a3;

@end
