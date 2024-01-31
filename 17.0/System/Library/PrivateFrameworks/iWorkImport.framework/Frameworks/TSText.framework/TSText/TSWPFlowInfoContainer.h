@class NSString, NSMutableArray;

@interface TSWPFlowInfoContainer : TSPObject <TSWPFlowInfoContainer>

@property (retain, nonatomic) NSMutableArray *flowInfos;
@property (nonatomic) unsigned long long nextUserInterfaceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)childEnumerator;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)removeFlowInfo:(id)a0;
- (void)addFlowInfo:(id)a0;
- (void)addFlowInfo:(id)a0 dolcContext:(id)a1;
- (BOOL)containsFlowInfo:(id)a0;

@end
