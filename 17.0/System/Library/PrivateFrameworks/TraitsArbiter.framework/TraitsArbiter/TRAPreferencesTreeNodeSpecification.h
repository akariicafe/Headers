@class TRAParticipant, NSString;

@interface TRAPreferencesTreeNodeSpecification : NSObject <NSCopying, BSDescriptionProviding>

@property (retain, nonatomic) TRAParticipant *participant;
@property (retain, nonatomic) TRAParticipant *parentParticipant;
@property (nonatomic) double order;
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
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithParticipant:(id)a0 parentParticipant:(id)a1;

@end
