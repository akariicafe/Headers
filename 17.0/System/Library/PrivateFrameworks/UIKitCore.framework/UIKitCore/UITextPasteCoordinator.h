@class NSMutableArray, NSObject;
@protocol UITextPasteCoordinatorDelegate, OS_dispatch_group;

@interface UITextPasteCoordinator : NSObject {
    NSMutableArray *_items;
    NSObject<OS_dispatch_group> *_wait;
}

@property (readonly, weak, nonatomic) id<UITextPasteCoordinatorDelegate> delegate;

- (void)addItem:(id)a0;
- (void)_finish;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)_determineFinished;
- (BOOL)performBlockingWait:(double)a0;
- (void)setResult:(id)a0 forItem:(id)a1;

@end
