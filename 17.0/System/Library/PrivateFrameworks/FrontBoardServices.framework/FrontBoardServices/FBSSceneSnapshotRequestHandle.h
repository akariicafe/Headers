@class FBSSceneSnapshotContext, BSActionResponder;

@interface FBSSceneSnapshotRequestHandle : NSObject {
    unsigned long long _type;
    FBSSceneSnapshotContext *_context;
    BSActionResponder *_responder;
    BOOL _canceled;
}

+ (id)handleForRequestType:(unsigned long long)a0 context:(id)a1;

- (void)cancelRequest;
- (void)performRequestForScene:(id)a0;
- (void)_clearAction;
- (void).cxx_destruct;
- (id)initWithRequestType:(unsigned long long)a0 context:(id)a1;

@end
