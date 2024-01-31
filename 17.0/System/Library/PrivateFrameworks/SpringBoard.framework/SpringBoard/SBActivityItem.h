@class NSString, ACActivityContentUpdate, ACActivityDescriptor;

@interface SBActivityItem : NSObject <BSDescriptionProviding>

@property (retain, nonatomic) ACActivityContentUpdate *contentUpdate;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) ACActivityDescriptor *descriptor;
@property (readonly, nonatomic) double relevanceScore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithContentUpdate:(id)a0;

@end
