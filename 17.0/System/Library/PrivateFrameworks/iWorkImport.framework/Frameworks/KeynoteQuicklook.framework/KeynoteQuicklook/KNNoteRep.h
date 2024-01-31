@class TSWPRep, NSString, NSObject;
@protocol TSDContainerInfo;

@interface KNNoteRep : TSDRep <TSWPRepParent, TSDContainerRep, TSWPStorageObserver>

@property (readonly, nonatomic) TSWPRep *containedRep;
@property (readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)childReps;
- (BOOL)canBeginEditingChildRepOnDoubleTap:(id)a0;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (void)storage:(id)a0 didChangeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 delta:(long long)a2 broadcastKind:(unsigned long long)a3;
- (void)updateChildrenFromLayout;
- (double)columnHeight;
- (id)editingRep;
- (BOOL)shouldShowCollaboratorCursorHighlight;
- (void)willBeginEditingContainedInfo:(id)a0;
- (void)willEndEditingContainedInfo:(id)a0;

@end
