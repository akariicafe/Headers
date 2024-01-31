@class NSSet, NSString;

@interface SBSBackgroundActivityAssertionData : NSObject <NSSecureCoding, BSDescriptionProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSSet *backgroundActivityIdentifiers;
@property (nonatomic) int pid;
@property (nonatomic, getter=isExclusive) BOOL exclusive;
@property (nonatomic) BOOL showsWhenForeground;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSString *statusString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)initWithCoder:(id)a0;
- (id)initWithBackgroundActivityIdentifiers:(id)a0 forPID:(int)a1 exclusive:(BOOL)a2 showsWhenForeground:(BOOL)a3;
- (id)initWithBackgroundActivityIdentifiers:(id)a0 forPID:(int)a1 exclusive:(BOOL)a2 showsWhenForeground:(BOOL)a3 uniqueIdentifier:(id)a4;

@end
