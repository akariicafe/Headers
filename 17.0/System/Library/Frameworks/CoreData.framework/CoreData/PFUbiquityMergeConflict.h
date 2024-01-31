@class NSDictionary;

@interface PFUbiquityMergeConflict : NSMergeConflict

@property (retain) NSDictionary *ancestorSnapshot;

- (void)dealloc;
- (id)initWithSource:(id)a0 newVersion:(unsigned long long)a1 oldVersion:(unsigned long long)a2 cachedSnapshot:(id)a3 persistedSnapshot:(id)a4;

@end
