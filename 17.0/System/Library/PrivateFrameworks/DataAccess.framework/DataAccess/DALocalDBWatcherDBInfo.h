@class NSString, NSMutableDictionary;

@interface DALocalDBWatcherDBInfo : NSObject

@property (readonly, nonatomic) NSString *path;
@property (nonatomic) int lastSavedSequenceNumber;
@property (retain, nonatomic) NSMutableDictionary *blocksByConcernedParty;

- (id)initWithPath:(id)a0;
- (void)removeBlockForConcernedParty:(id)a0 account:(id)a1;
- (void)addBlock:(id /* block */)a0 forConcernedParty:(id)a1 account:(id)a2;
- (id)allBlocks;
- (void).cxx_destruct;
- (id)allConcernedParties;

@end
