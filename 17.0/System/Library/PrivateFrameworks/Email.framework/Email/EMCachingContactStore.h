@class CNContactStore, EFLazyCache;

@interface EMCachingContactStore : NSObject

@property (retain, nonatomic) EFLazyCache *displayNameCache;
@property (readonly, nonatomic) CNContactStore *cnStore;

- (id)init;
- (id)initWithStore:(id)a0;
- (void).cxx_destruct;
- (id)_fetchDisplayNameForEmailAddress:(id)a0 abbreviated:(BOOL)a1;
- (void)_invalidateDisplayNameCache;
- (id)displayNameForEmailAddress:(id)a0;
- (id)displayNameForEmailAddress:(id)a0 abbreviated:(BOOL)a1;

@end
