@class NSString, TSPUnknownContent, TSPObjectContext;
@protocol TSPObjectDelegate;

@interface TSPObject : NSObject

@property (nonatomic) long long tsp_identifier;
@property (readonly, nonatomic) long long tsp_unarchiverIdentifier;
@property (readonly, nonatomic) TSPUnknownContent *tsp_unknownContent;
@property (nonatomic) long long tsp_modifyObjectToken;
@property (weak, nonatomic) id<TSPObjectDelegate> tsp_delegate;
@property (readonly, nonatomic) BOOL needsArchiving;
@property (readonly, nonatomic) BOOL isCommandObject;
@property (readonly, nonatomic) TSPObject *componentRootObject;
@property (readonly, nonatomic) BOOL allowsImplicitComponentOwnership;
@property (readonly, nonatomic) BOOL shouldDelayArchiving;
@property (readonly, nonatomic) unsigned int delayedArchivingPriority;
@property (readonly, nonatomic) NSString *packageLocator;
@property (readonly, nonatomic) BOOL isComponentRoot;
@property (readonly, nonatomic) BOOL storeOutsideObjectArchive;
@property (readonly, nonatomic) TSPObjectContext *context;

+ (BOOL)tsp_isTransientObjectIdentifier:(long long)a0;

- (id)init;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)documentRoot;
- (BOOL)allowsDuplicatesOutsideOfDocumentPackage;
- (void)didFinishUnarchiving;
- (void)didLoadChildObjectFromDocumentSupport:(id)a0;
- (BOOL)dirtiesDocumentPackage;
- (id)initDocumentObjectWithContext:(id)a0;
- (void)willModify;
- (void)willModifyForUpgrade;

@end
