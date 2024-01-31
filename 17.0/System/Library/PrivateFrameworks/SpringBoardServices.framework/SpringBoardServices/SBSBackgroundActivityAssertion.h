@class NSSet, NSString, SBSBackgroundActivityAssertionData;

@interface SBSBackgroundActivityAssertion : NSObject <BSDescriptionProviding>

@property (retain, nonatomic) SBSBackgroundActivityAssertionData *assertionData;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly, copy, nonatomic) NSSet *backgroundActivityIdentifiers;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic, getter=isExclusive) BOOL exclusive;
@property (readonly, nonatomic) BOOL showsWhenForeground;
@property (copy, nonatomic) NSString *statusString;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assertionWithBackgroundActivityIdentifier:(id)a0 forPID:(int)a1 exclusive:(BOOL)a2 showsWhenForeground:(BOOL)a3;
+ (id)assertionWithBackgroundActivityIdentifiers:(id)a0 forPID:(int)a1 exclusive:(BOOL)a2 showsWhenForeground:(BOOL)a3;
+ (id)backgroundLocationAssertionForPID:(int)a0;

- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (void)invalidate;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)acquireWithHandler:(id /* block */)a0 invalidationHandler:(id /* block */)a1;
- (void)acquireWithHandler:(id /* block */)a0 onQueue:(id)a1;
- (id)initWithBackgroundActivityAssertionData:(id)a0;
- (id)initWithBackgroundActivityIdentifiers:(id)a0 forPID:(int)a1 exclusive:(BOOL)a2 showsWhenForeground:(BOOL)a3;

@end
