@class SPUIResultsViewStateRestorationContext, NSArray;

@interface SPUISearchStateRestorationContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) SPUIResultsViewStateRestorationContext *searchViewContext;
@property double timeAtDismissal;
@property (retain) NSArray *viewControllerContexts;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
