@interface FBKMergePolicy : NSMergePolicy

@property (nonatomic) unsigned long long type;

- (id)initWithType:(unsigned long long)a0;
- (BOOL)resolveConflicts:(id)a0 error:(id *)a1;

@end
