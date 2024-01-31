@class NSArray;

@interface PXSettingsIndex : NSObject

@property (readonly, nonatomic) NSArray *entries;

+ (id)_entriesForSettingsController:(id)a0 usingProgress:(id)a1;
+ (id)createIndexForSettings:(id)a0 resultHandler:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (id)_initWithEntries:(id)a0;
- (id)searchForText:(id)a0 resultHandler:(id /* block */)a1;

@end
