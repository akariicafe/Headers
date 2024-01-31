@class NSArray, NSString, NSTextRange, NSTextLayoutManager, NSMutableArray;
@protocol NSTextContentManagerDelegate;

@interface NSTextContentManager : NSObject <NSTextElementProvider, NSSecureCoding> {
    NSTextLayoutManager *_primaryTextLayoutManager;
    _Atomic unsigned long long _transactionStack;
    NSMutableArray *_editHistory;
    NSMutableArray *_textLayoutManagers;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long maximumNumberOfUncachedElements;
@property (weak) id<NSTextContentManagerDelegate> delegate;
@property (readonly, copy) NSArray *textLayoutManagers;
@property (retain) NSTextLayoutManager *primaryTextLayoutManager;
@property (readonly) BOOL hasEditingTransaction;
@property BOOL automaticallySynchronizesTextLayoutManagers;
@property BOOL automaticallySynchronizesToBackingStore;
@property (readonly) NSTextRange *documentRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)textElementsForRange:(id)a0;
- (void)dealloc;
- (id)enumerateTextElementsFromLocation:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)recordEditActionInRange:(id)a0 newTextRange:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void)_incrementTransactionStack;
- (id)textLayoutManagers;
- (void)_decrementTransactionStack;
- (void)replaceContentsInRange:(id)a0 withTextElements:(id)a1;
- (void)synchronizeTextLayoutManagers:(id /* block */)a0;
- (BOOL)containsExtraLineFragment;
- (id)primaryTextLayoutManager;
- (void)removeTextLayoutManager:(id)a0;
- (void).cxx_destruct;
- (void)performEditingTransactionWithBlock:(id /* block */)a0;
- (void)setPrimaryTextLayoutManager:(id)a0;
- (void)synchronizeToBackingStore:(id /* block */)a0;
- (id)locationFromLocation:(id)a0 withOffset:(long long)a1;
- (BOOL)isCountableDataSource;
- (long long)offsetFromLocation:(id)a0 toLocation:(id)a1;
- (void)performEditingTransactionUsingBlock:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (void)addTextLayoutManager:(id)a0;

@end
