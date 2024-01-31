@class TPUIState;

@interface TPArchivedUIState : TSPObject

@property (copy, nonatomic) TPUIState *uiState;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)initWithContext:(id)a0 uiState:(id)a1;
- (BOOL)isEqualToArchivedUIState:(id)a0;

@end
