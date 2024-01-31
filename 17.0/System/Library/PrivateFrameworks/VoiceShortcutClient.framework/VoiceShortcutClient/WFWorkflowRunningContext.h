@class WFContextualAction, NSString, WFWorkflowRunViewSource, NSURL, NSDate, WFContextualActionContext;

@interface WFWorkflowRunningContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *workflowIdentifier;
@property (retain, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSString *progressCategory;
@property (nonatomic) BOOL allowsDialogNotifications;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic) unsigned long long outputBehavior;
@property (retain, nonatomic) NSURL *outputRootIfRunningInFinder;
@property (retain, nonatomic) WFContextualAction *contextualAction;
@property (retain, nonatomic) WFContextualActionContext *contextualActionContext;
@property (readonly, nonatomic) BOOL isShortcutsApp;
@property (copy, nonatomic) NSString *automationType;
@property (copy, nonatomic) NSString *rootWorkflowIdentifier;
@property (copy, nonatomic) NSString *runSource;
@property (copy, nonatomic) NSString *runKind;
@property (copy, nonatomic) WFWorkflowRunViewSource *runViewSource;
@property (copy, nonatomic) NSString *originatingBundleIdentifier;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)removeProgressSubscriber:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithWorkflowIdentifier:(id)a0;
- (id)addProgressSubscriberUsingPublishingHandler:(id /* block */)a0;
- (id)copyWithNewIdentity;
- (id)progressForPublishingWithTotalUnitCount:(long long)a0 cancellationHandler:(id /* block */)a1;

@end
