@class TPLayoutState, TPUIState, TPArchivedUIState, TPArchivedLayoutState;

@interface TPViewStateRoot : TSKViewStateRoot {
    TPArchivedLayoutState *_archivedLayoutState;
    TPArchivedUIState *_archivedUIState;
}

@property (copy, nonatomic) TPLayoutState *layoutState;
@property (copy, nonatomic) TPUIState *uiState;

- (unsigned long long)hash;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)initWithContext:(id)a0 layoutState:(id)a1 uiState:(id)a2;
- (BOOL)isEqualToViewStateRoot:(id)a0;

@end
