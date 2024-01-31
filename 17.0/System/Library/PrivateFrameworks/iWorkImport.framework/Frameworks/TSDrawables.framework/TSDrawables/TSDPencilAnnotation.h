@class TSDDrawableInfo, NSString, TSDPencilAnnotationStorage, TSKPKDrawing;

@interface TSDPencilAnnotation : TSPObject <TSPCopying, TSKDocumentObject, TSKPencilAnnotation>

@property (retain, nonatomic) TSDPencilAnnotationStorage *pencilAnnotationStorage;
@property (readonly, nonatomic) TSKPKDrawing *drawing;
@property (weak, nonatomic) TSDDrawableInfo *parent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *uuid;

+ (BOOL)needsObjectUUID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithContext:(id)a0;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (id)initWithContext:(id)a0 pencilAnnotationStorage:(id)a1;

@end
