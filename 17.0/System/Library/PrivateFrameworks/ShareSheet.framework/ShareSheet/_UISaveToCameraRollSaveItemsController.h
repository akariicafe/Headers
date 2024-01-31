@class NSArray, NSError;

@interface _UISaveToCameraRollSaveItemsController : NSObject

@property (readonly, nonatomic) id /* block */ saveCompletionBlock;
@property (readonly, nonatomic) NSArray *itemsToSchedule;
@property (readonly, nonatomic) long long pendingSaveCount;
@property (readonly, nonatomic) NSError *errorToReport;
@property (readonly, nonatomic) BOOL successToReport;

- (void).cxx_destruct;
- (void)_saveImageData:(id)a0;
- (void)_didCompleteSavingItem:(id)a0 error:(id)a1 contextInfo:(void *)a2;
- (void)_invokeSaveCompletionBlock;
- (void)_noteDidCompleteSavingItem:(id)a0 error:(id)a1;
- (void)_saveImage:(id)a0;
- (void)_saveVideoAtPath:(id)a0;
- (void)beginSaving;
- (void)beginSavingItem:(id)a0;
- (id)initWithItems:(id)a0 saveCompletionBlock:(id /* block */)a1;

@end
