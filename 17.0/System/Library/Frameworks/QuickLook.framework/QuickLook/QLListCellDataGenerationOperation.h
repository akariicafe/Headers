@class QLListCell, QLItem;
@protocol QLListCellDataGenerationOperationDelegate;

@interface QLListCellDataGenerationOperation : QLAsynchronousOperation {
    BOOL _didGenerateThumbnail;
    BOOL _didGenerateSubtitleInformation;
}

@property (nonatomic) unsigned long long index;
@property (weak, nonatomic) QLListCell *cell;
@property (weak, nonatomic) QLItem *item;
@property (weak, nonatomic) id<QLListCellDataGenerationOperationDelegate> delegate;

- (void)main;
- (void).cxx_destruct;
- (void)_finishIfNeeded;
- (void)_didDetermineFileSize:(id)a0 fileTypeString:(id)a1;
- (void)_didGenerateThumbnail:(id)a0;
- (id)initWithListCell:(id)a0 index:(unsigned long long)a1 item:(id)a2 delegate:(id)a3;

@end
