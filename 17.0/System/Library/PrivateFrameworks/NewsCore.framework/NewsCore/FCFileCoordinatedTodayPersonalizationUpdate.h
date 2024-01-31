@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayPersonalizationUpdate : NSObject

@property (retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary;

- (void)readWithAccessor:(id /* block */)a0;
- (id)init;
- (id)initWithFileURL:(id)a0;
- (void)submitUpdate:(id)a0 withCompletion:(id /* block */)a1;
- (void)clearUpdates;
- (id)consumeUpdates;
- (void).cxx_destruct;

@end
