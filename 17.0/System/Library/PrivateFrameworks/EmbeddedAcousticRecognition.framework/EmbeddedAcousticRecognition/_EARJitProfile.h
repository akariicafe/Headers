@class _EARUserProfileBuilder;

@interface _EARJitProfile : NSObject {
    _EARUserProfileBuilder *_profileBuilder;
}

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 ncsRoot:(id)a1 language:(id)a2;
- (id)jitProfileFromContextualStrings:(id)a0;

@end
