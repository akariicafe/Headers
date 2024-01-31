@class TSDDrawableInfo, NSString, TSDCommentStorage, NSDate, TSKAnnotationAuthor;

@interface TSDDrawableComment : TSKSosBase <TSDComment> {
    TSDCommentStorage *mStorage;
}

@property (weak, nonatomic) TSDDrawableInfo *parent;
@property (copy, nonatomic) TSDCommentStorage *storage;
@property (readonly, nonatomic) BOOL isHighlight;
@property (readonly, nonatomic) NSString *annotationUUID;
@property (readonly, nonatomic) NSString *parentUUID;
@property (readonly, nonatomic) int annotationType;
@property (retain, nonatomic) TSKAnnotationAuthor *author;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) int annotationDisplayStringType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithParent:(id)a0 storage:(id)a1;
- (void)commentWillBeAddedToDocumentRoot;
- (BOOL)isFloatingComment;
- (BOOL)isInDocument;

@end
