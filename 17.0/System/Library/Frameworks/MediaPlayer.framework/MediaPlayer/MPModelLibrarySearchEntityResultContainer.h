@class MPModelLibrarySearchScope, MPMediaLibraryEntityTranslationContext;

@interface MPModelLibrarySearchEntityResultContainer : NSObject

@property (readonly, nonatomic) struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult *__ptr_; struct __shared_weak_count *__cntrl_; } entityQueryResult;
@property (readonly, copy, nonatomic) MPModelLibrarySearchScope *scope;
@property (readonly, nonatomic) MPMediaLibraryEntityTranslationContext *entityTranslationContext;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEntityQueryResult:(struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult *x0; struct __shared_weak_count *x1; })a0 forScope:(id)a1 entityTranslationContext:(id)a2;

@end
