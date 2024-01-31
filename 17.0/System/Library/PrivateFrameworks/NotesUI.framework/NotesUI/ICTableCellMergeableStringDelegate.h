@class NSUUID, NSMutableArray, NSString;
@protocol ICTableCellMergeableStringObserving;

@interface ICTableCellMergeableStringDelegate : NSObject <ICTTMergeableStringDelegate>

@property (readonly, weak, nonatomic) id<ICTableCellMergeableStringObserving> changeObserver;
@property (readonly, nonatomic) NSUUID *columnID;
@property (readonly, nonatomic) NSUUID *rowID;
@property (nonatomic) unsigned long long editingCount;
@property (retain, nonatomic) NSMutableArray *undoCommands;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)endEditing;
- (void)beginEditing;
- (void).cxx_destruct;
- (void)edited:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 changeInLength:(long long)a2;
- (void)addUndoCommand:(id)a0;
- (id)initWithTableCellChangeObserver:(id)a0 columnID:(id)a1 rowID:(id)a2;
- (BOOL)wantsUndoCommands;

@end
