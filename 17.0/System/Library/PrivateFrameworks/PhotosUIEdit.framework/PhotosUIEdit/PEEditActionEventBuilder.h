@class NSString, NSDictionary, PEEditAction;

@interface PEEditActionEventBuilder : NSObject {
    PEEditAction *_baseAction;
    NSString *_actionDescription;
    NSDictionary *_assetsMap;
}

@property (nonatomic) BOOL hasError;

- (void).cxx_destruct;
- (id)buildEvents;
- (id)initWithBaseAction:(id)a0 assets:(id)a1;
- (void)registerAction:(id)a0 forAssets:(id)a1;
- (void)registerActionType:(id)a0 forAssets:(id)a1;
- (id)initWithActionDescription:(id)a0 assets:(id)a1;

@end
