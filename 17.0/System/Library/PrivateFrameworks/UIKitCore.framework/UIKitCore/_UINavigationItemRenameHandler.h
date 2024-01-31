@class UINavigationItem;

@interface _UINavigationItemRenameHandler : NSObject

@property (weak, nonatomic) UINavigationItem *associatedItem;
@property (copy, nonatomic) id /* block */ shouldBeginRenamingHandler;
@property (copy, nonatomic) id /* block */ willBeginRenamingHandler;
@property (copy, nonatomic) id /* block */ didEndRenamingHandler;
@property (copy, nonatomic) id /* block */ willBeginRenamingWithRangeHandler;
@property (copy, nonatomic) id /* block */ shouldEndRenamingHandler;
@property (copy, nonatomic) id /* block */ fileURLForRenaming;
@property (copy, nonatomic) id /* block */ fileRenameDidFail;
@property (copy, nonatomic) id /* block */ fileRenameDidEnd;

+ (void)defaultNavigationItem:(id)a0 didEndRenamingWithTitle:(id)a1;
+ (BOOL)defaultNavigationItem:(id)a0 shouldEndRenamingWithTitle:(id)a1;
+ (id)defaultNavigationItem:(id)a0 willBeginRenamingWithSuggestedTitle:(id)a1 selectedRange:(inout struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
+ (BOOL)defaultNavigationItemShouldBeginRenaming:(id)a0 forValidDelegate:(BOOL)a1;
+ (id)handlerWithDidEndRenamingHandler:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_canRename;
- (void)_didEndRenamingWithTitle:(id)a0;
- (void)_fileRenameDidEndWithFinalURL:(id)a0;
- (void)_fileRenameDidFailWithError:(id)a0;
- (id)_fileURLForRenaming;
- (BOOL)_shouldEndRenamingWithTitle:(id)a0;
- (id)_willBeginRenamingWithTitle:(id)a0 selectedRange:(inout struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)initWithDidEndRenamingHandler:(id /* block */)a0;

@end
