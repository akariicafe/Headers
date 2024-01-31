@class TSWPShapeInfo, NSString, TSWPShapeLayout;

@interface TSWPTextHostLayout : TSDDrawableLayout <TSWPTextEditingHostLayout>

@property (readonly, nonatomic) TSWPShapeLayout *editingShapeLayout;
@property (retain, nonatomic) TSWPShapeInfo *editingShape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)updateChildrenFromInfo;

@end
