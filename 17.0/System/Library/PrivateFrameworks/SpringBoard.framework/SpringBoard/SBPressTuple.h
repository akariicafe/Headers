@class NSString;

@interface SBPressTuple : NSObject <BSDescriptionProviding>

@property (nonatomic) double durationDown;
@property (nonatomic) double durationUp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithDurationDown:(double)a0 durationUp:(double)a1;

@end
