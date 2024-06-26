@class NSString, UISPasteSharingToken, NSObject;
@protocol OS_dispatch_group;

@interface _UIConcretePasteboard : UIPasteboard

@property (copy, nonatomic) NSString *name;
@property (copy) UISPasteSharingToken *sharingToken;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *saveCompletionGroup;

+ (void)_attemptAuthenticationWithMessage:(id)a0;
+ (void)_asynchronouslyEnumerateItemSet:(id)a0 itemsCompletionHandler:(id /* block */)a1 usingItemBlock:(id /* block */)a2;
+ (void)_clearPinnedItemProvidersForPasteboardNamed:(id)a0;
+ (void)_detectPatternsForPatterns:(id)a0 atIndex:(unsigned long long)a1 itemCollection:(id)a2 completionHandler:(id /* block */)a3;
+ (void)_detectValuesForPatterns:(id)a0 atIndex:(unsigned long long)a1 itemCollection:(id)a2 completionHandler:(id /* block */)a3;
+ (id)_loadRequestContextForBlockingUIKitCall;
+ (id)_loadRequestContextForBlockingUIKitCall:(BOOL)a0;
+ (id)_loadRequestContextForNonBlockingUIKitCall;
+ (id)_pasteboardNamed:(id)a0 createIfNotFound:(BOOL)a1;
+ (id)_pasteboardWithName:(id)a0 create:(BOOL)a1;
+ (id)_pasteboardWithUniqueName;
+ (void)_pinItemProviders:(id)a0 forPasteboardNamed:(id)a1 withExpirationDate:(id)a2;
+ (id)_remoteContentForLayerContextWithId:(unsigned long long)a0 slotStyle:(id)a1 pasteButtonTag:(id)a2;
+ (id)clientValueForValue:(id)a0 pattern:(id)a1;
+ (id)generalPasteboard;
+ (id)pasteboardWithName:(id)a0 create:(BOOL)a1;
+ (id)pasteboardWithUniqueName;
+ (void)removePasteboardWithName:(id)a0;

- (void)setObjects:(id)a0;
- (void)setItems:(id)a0;
- (BOOL)isPersistent;
- (long long)changeCount;
- (id)colors;
- (void)setColors:(id)a0;
- (id)color;
- (id)image;
- (id)strings;
- (void)setString:(id)a0;
- (void)addItems:(id)a0;
- (void)setPersistent:(BOOL)a0;
- (id)images;
- (id)items;
- (void)setStrings:(id)a0;
- (id)URL;
- (id)_initWithName:(id)a0;
- (void)setURLs:(id)a0;
- (id)string;
- (void)setColor:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)setImages:(id)a0;
- (void)setURL:(id)a0;
- (id)URLs;
- (id)pasteSharingToken;
- (id)itemProvidersWithRetryBehavior:(BOOL)a0;
- (void)_setPersistent:(BOOL)a0;
- (BOOL)hasURLs;
- (id)pasteboardTypes;
- (long long)_changeCountIgnoringPinningActivity;
- (void)_clearItems;
- (void)_clearPinnedItemProviders;
- (id)_detectedPasteboardTypeStringsForTypes:(id)a0;
- (id)_detectedPasteboardTypesForTypes:(id)a0;
- (id)_itemsCoercibleToClass:(Class)a0;
- (BOOL)_pasteboardCacheQueue_isPersistent;
- (BOOL)_pasteboardCacheQueue_saveItemCollection:(id)a0 currentNotificationState:(unsigned long long)a1 outNewNotificationState:(unsigned long long *)a2;
- (BOOL)_pasteboardCacheQueue_setPersistent:(BOOL)a0 currentNotificationState:(unsigned long long)a1 outNewNotificationState:(unsigned long long *)a2;
- (void)_pinItemCollection:(id)a0;
- (void)_pinItemProviders:(id)a0 expirationDate:(id)a1;
- (void)_requestSecurePasteAuthenticationMessageWithContext:(unsigned long long)a0 forClientVersionedPID:(long long)a1 completionBlock:(id /* block */)a2;
- (void)_saveItemCollection:(id)a0;
- (void)_sendPasteboardTypesChangedNotificationOldTypes:(id)a0 newTypes:(id)a1;
- (void)_setItemsAndSave:(id)a0 options:(id)a1;
- (void)_setItemsAndSave:(id)a0 options:(id)a1 coerceStringsToURLs:(BOOL)a2;
- (void)_setItemsAndSave:(id)a0 options:(id)a1 coerceStringsToURLs:(BOOL)a2 dataOwner:(long long)a3;
- (void)_setItemsAndSaveFromObjects:(id)a0 ofClass:(Class)a1;
- (id)availableTypes;
- (BOOL)canInstantiateObjectsOfClass:(Class)a0;
- (BOOL)containsPasteboardTypes:(id)a0;
- (BOOL)containsPasteboardTypes:(id)a0 inItemSet:(id)a1;
- (id)dataForPasteboardType:(id)a0;
- (id)dataForPasteboardType:(id)a0 inItemSet:(id)a1;
- (void)detectPatternsForPatterns:(id)a0 completionHandler:(id /* block */)a1;
- (void)detectPatternsForPatterns:(id)a0 inItemSet:(id)a1 completionHandler:(id /* block */)a2;
- (void)detectValuesForPatterns:(id)a0 completionHandler:(id /* block */)a1;
- (void)detectValuesForPatterns:(id)a0 inItemSet:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)hasColors;
- (BOOL)hasImages;
- (BOOL)hasStrings;
- (id)itemProviders;
- (id)itemProvidersForInstantiatingObjectsOfClass:(Class)a0;
- (id)itemSetWithPasteboardTypes:(id)a0;
- (id)pasteboardTypesForItemSet:(id)a0;
- (void)setData:(id)a0 forPasteboardType:(id)a1;
- (void)setItemProviders:(id)a0;
- (void)setItemProviders:(id)a0 localOnly:(BOOL)a1 expirationDate:(id)a2;
- (void)setItemProviders:(id)a0 options:(id)a1;
- (void)setItems:(id)a0 options:(id)a1;
- (void)setObjects:(id)a0 localOnly:(BOOL)a1 expirationDate:(id)a2;
- (void)setObjects:(id)a0 options:(id)a1;
- (void)setValue:(id)a0 forPasteboardType:(id)a1;
- (id)valueForPasteboardType:(id)a0;
- (id)valuesForPasteboardType:(id)a0 inItemSet:(id)a1;

@end
