@class NSMapTable;

@interface VUIPlayerValidationManager : NSObject

@property (retain, nonatomic) NSMapTable *playerCounts;

+ (id)sharedInstance;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (void)addReferenceForPlayer:(id)a0;
- (void)removeReferenceForPlayer:(id)a0;

@end
