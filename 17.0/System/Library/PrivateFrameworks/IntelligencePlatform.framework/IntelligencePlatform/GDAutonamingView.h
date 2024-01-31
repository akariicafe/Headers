@class GDAutonamingViewInner;

@interface GDAutonamingView : NSObject {
    GDAutonamingViewInner *_inner;
}

- (void)reset;
- (id)personForIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)confirmWithIdentifier:(id)a0 ofType:(id)a1 person:(id)a2;
- (void)confirmWithIdentifier:(id)a0 ofType:(id)a1 person:(id)a2 confirmationType:(long long)a3;
- (void)confirmWithIdentifier:(id)a0 person:(id)a1 confirmationType:(long long)a2;
- (void)didUpdateUserFeedback;
- (id)initWithInner:(id)a0;
- (id)initWithViewName:(id)a0 error:(id *)a1;
- (id)personForIdentifier:(id)a0 ofType:(id)a1;
- (void)rejectWithIdentifier:(id)a0 ofType:(id)a1 person:(id)a2;
- (void)rejectWithIdentifier:(id)a0 ofType:(id)a1 person:(id)a2 confirmationType:(long long)a3;
- (void)rejectWithIdentifier:(id)a0 person:(id)a1 confirmationType:(long long)a2;

@end
