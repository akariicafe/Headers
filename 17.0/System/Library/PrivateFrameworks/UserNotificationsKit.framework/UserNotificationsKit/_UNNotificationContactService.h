@class NSCache, CNContactStore, _UNCNContactResolver;

@interface _UNNotificationContactService : NSObject {
    NSCache *_resultsByServiceRecord;
    _UNCNContactResolver *_resolver;
    CNContactStore *_curatedContactStore;
}

+ (id)sharedInstance;

- (id)initWithResolver:(id)a0;
- (void).cxx_destruct;
- (BOOL)canAddToCuratedContacts:(id)a0 bundleIdentifier:(id)a1;
- (void)confirmCuratedContactSuggestion:(BOOL)a0 forContact:(id)a1 bundleIdentifier:(id)a2;
- (id)curatedContactMatchDetailsForContact:(id)a0 bundleIdentifier:(id)a1;
- (void)didAddToCuratedContactsForContact:(id)a0 bundleIdentifier:(id)a1 cnContactIdentifier:(id)a2;
- (id)newCuratedContactForContact:(id)a0 imageData:(id)a1 bundleIdentifier:(id)a2;
- (id)updateServiceWithContact:(id)a0 bundleIdentifier:(id)a1;
- (id)_matchForContact:(id)a0 bundleIdentifier:(id)a1;
- (void)_setResult:(id)a0 forContact:(id)a1 bundleIdentifier:(id)a2;
- (id)curatedContactForContact:(id)a0 bundleIdentifier:(id)a1 keysToFetch:(id)a2;

@end
