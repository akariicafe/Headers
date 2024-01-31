@class NSString, TSWPStorage;

@interface TSWPAttachment : TSPObject <TSWPStorageActionObjectProtocol, TSKDocumentObject, TSDOwningAttachment, TSPCopying, TSKModel>

@property (weak, nonatomic) TSWPStorage *parentStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isDrawable;
@property (readonly, nonatomic) BOOL isAnchored;
@property (readonly, nonatomic) BOOL isPartitioned;
@property (readonly, nonatomic) BOOL isAttachedToBodyText;
@property (readonly, nonatomic) BOOL isSearchable;
@property (readonly, nonatomic) BOOL specifiesEnabledKnobMask;
@property (readonly, nonatomic) BOOL isHorizontallyCentered;
@property (readonly, nonatomic) BOOL isVerticallyCentered;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (unsigned long long)attributeArrayKind;
+ (id)mostSpecificAttachmentFromInfo:(id)a0;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned int)elementKind;
- (id)copyWithContext:(id)a0;
- (unsigned long long)findCharIndex;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (BOOL)changesWithPageCount;
- (void)infoChanged;
- (id)topLevelAttachment;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (unsigned long long)findCharIndexWithHintIndex:(unsigned long long *)a0;
- (void)migrateStyleWithDocumentRoot:(id)a0;
- (id)objectsForStyleMigrating;
- (void)performTemplateLocalization:(id)a0;
- (BOOL)preserveAttributesOverSelectionWhenInserting;
- (BOOL)shouldInvalidateWhenTextPropertiesChange;
- (BOOL)supportsUUID;

@end
