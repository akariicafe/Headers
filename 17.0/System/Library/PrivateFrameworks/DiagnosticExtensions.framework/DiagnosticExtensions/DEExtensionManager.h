@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface DEExtensionManager : NSObject

@property (retain, nonatomic) NSArray *extensions;
@property (copy, nonatomic) id /* block */ afterExtendedBlock;
@property (nonatomic) BOOL extendedLoaded;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *initialLoadQueue;

+ (id)sharedInstance;

- (id)init;
- (id)extensionsWithFilter:(id)a0;
- (id)extensionForIdentifier:(id)a0;
- (void)loadExtensions;
- (void).cxx_destruct;

@end
