@class NSString, NSBundle;

@interface DMPluginFileSystemRep : NSObject {
    NSBundle *_bundle;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *bundleIdentifier;

+ (id)allReps;
+ (id)_pathsContainingPossiblePluginDirectory;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 atEnclosingPath:(id)a1;
- (BOOL)isBundleValid;

@end
