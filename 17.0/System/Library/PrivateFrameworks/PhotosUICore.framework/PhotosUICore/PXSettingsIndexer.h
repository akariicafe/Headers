@class NSProgress, PXSettingsIndex, PXSettings, NSMutableArray;

@interface PXSettingsIndexer : NSObject

@property (readonly, nonatomic) NSMutableArray *completionHandlers;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSProgress *indexingProgress;
@property (retain, nonatomic) PXSettingsIndex *index;
@property (readonly, nonatomic) PXSettings *rootSettings;

- (id)init;
- (void).cxx_destruct;
- (void)_callCompletionHandlersIfNecessary;
- (void)_handleResultIndex:(id)a0;
- (void)_startIndexingIfNecessary;
- (id)initWithRootSettings:(id)a0;
- (id)startIndexingWithCompletionHandler:(id /* block */)a0;

@end
