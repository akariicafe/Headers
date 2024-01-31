@class NSString, NSMutableDictionary;

@interface SBSystemActionPreviewContext : NSObject <SBSystemActionPreviewContextProviding>

@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *elementIdentifier;
@property (copy, nonatomic) NSMutableDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;

@end
