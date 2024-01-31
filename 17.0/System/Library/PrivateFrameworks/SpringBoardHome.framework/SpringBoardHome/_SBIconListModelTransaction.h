@class NSString, NSMutableSet;

@interface _SBIconListModelTransaction : NSObject {
    NSMutableSet *_addedNodeIdentifiers;
    NSMutableSet *_deletedNodeIdentifiers;
}

@property (readonly, copy, nonatomic) NSString *requestID;

- (id)initWithRequestID:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)addNodeIdentifiers:(id)a0;
- (void)commitChangesToObservers:(id)a0 forNode:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)removeNodeIdentifiers:(id)a0;

@end
