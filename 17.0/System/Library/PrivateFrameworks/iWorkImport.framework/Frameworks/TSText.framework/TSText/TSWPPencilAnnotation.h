@class NSString, TSWPStorage, TSKPKDrawing;
@protocol TSKPencilAnnotationStorage;

@interface TSWPPencilAnnotation : TSPObject <TSPCopying, TSKDocumentObject, TSWPTextSpanningObject, TSWPOverlappingField, TSKPencilAnnotation>

@property (retain, nonatomic) id<TSKPencilAnnotationStorage> pencilAnnotationStorage;
@property (weak, nonatomic) TSWPStorage *parentStorage;
@property (readonly, nonatomic) NSString *textAttributeUUIDString;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) TSKPKDrawing *drawing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithContext:(id)a0;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)i_setTextAttributeUUIDString:(id)a0;
- (id)initWithContext:(id)a0 pencilAnnotationStorage:(id)a1;
- (BOOL)isEquivalentToObject:(id)a0;
- (BOOL)isInDocument;
- (void)resetTextAttributeUUIDString;

@end
