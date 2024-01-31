@class NSString, TSDCommentStorage, NSDate, TSTTableInfo, TSKAnnotationAuthor;

@interface TSTCommentHosting : NSObject <TSDComment> {
    TSDCommentStorage *mStorage;
}

@property (readonly, nonatomic) struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _column; struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _row; } cellUID;
@property (readonly, weak, nonatomic) TSTTableInfo *tableInfo;
@property (readonly, nonatomic) struct TSUViewCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; } viewCellCoord;
@property (readonly, nonatomic) struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; } baseCellCoord;
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
- (Class)editorClass;
- (void)commentWillBeAddedToDocumentRoot;
- (BOOL)isFloatingComment;
- (BOOL)isInDocument;
- (id)initWithStorage:(id)a0 forTableInfo:(id)a1 baseCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a2;
- (id)initWithStorage:(id)a0 forTableInfo:(id)a1 cellUID:(struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })a2;

@end
