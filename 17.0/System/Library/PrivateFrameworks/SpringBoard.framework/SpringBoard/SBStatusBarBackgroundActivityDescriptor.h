@class NSString;

@interface SBStatusBarBackgroundActivityDescriptor : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *backgroundActivityIdentifier;
@property (readonly, nonatomic) int pid;

- (unsigned long long)hash;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBackgroundActivityIdentifier:(id)a0 pid:(int)a1;

@end
