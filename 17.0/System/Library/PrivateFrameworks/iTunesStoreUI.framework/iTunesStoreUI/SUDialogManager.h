@class NSString, NSMutableArray;

@interface SUDialogManager : NSObject <ISSingleton> {
    NSMutableArray *_dialogs;
}

@property (readonly, nonatomic) long long numberOfPendingDialogs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)a0;
+ (id)newDialogWithError:(id)a0;

- (BOOL)presentDialog:(id)a0;
- (void)dealloc;
- (BOOL)presentDialog:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)_finishDialog:(id)a0 withButtonIndex:(long long)a1;
- (BOOL)_isDisplayingEquivalentDialog:(id)a0;
- (void)_performDefaultActionForDialog:(id)a0 buttonIndex:(long long)a1;
- (BOOL)presentDialogForError:(id)a0;
- (BOOL)presentDialogForError:(id)a0 withCompletionBlock:(id /* block */)a1;

@end
