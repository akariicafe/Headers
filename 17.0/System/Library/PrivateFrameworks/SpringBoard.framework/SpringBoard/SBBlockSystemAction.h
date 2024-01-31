@class NSString;

@interface SBBlockSystemAction : SBSystemAction {
    id /* block */ _actionBlock;
    NSString *_name;
}

- (void)appendDescriptionToFormatter:(id)a0;
- (id)analyticsIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)newExecutor;

@end
