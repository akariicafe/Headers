@class NSNumber, NSString, FPItem;

@interface DOCSmartFolderHit : DOCFrecencyBasedEvent

@property (retain, nonatomic) NSNumber *rowId;
@property (copy, nonatomic) FPItem *folderItem;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *value;

- (void).cxx_destruct;
- (id)initWithFolder:(id)a0 type:(unsigned long long)a1 value:(id)a2 lastUsedDate:(id)a3 frecency:(double)a4;
- (id)initWithRowId:(id)a0 folder:(id)a1 type:(unsigned long long)a2 value:(id)a3 lastUsedDate:(id)a4 frecency:(double)a5;

@end
