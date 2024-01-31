@class NSString;

@interface PLAccountingNodeEntry : PLEntry

@property (readonly, nonatomic) NSString *name;

+ (id)entryKey;
+ (void)load;

- (unsigned long long)hash;
- (id)initWithName:(id)a0;
- (id)initWithRootNodeID:(id)a0;
- (id)initEntryWithRawData:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
