@class NSString;

@interface SLInteractionHandler : NSObject

@property (retain, nonatomic) NSString *appIdentifier;

- (id)init;
- (void)dealloc;
- (id)fetchInteractionsWithLimit:(unsigned long long)a0 variant:(id)a1 error:(id *)a2;
- (id)initWithAppIdentifier:(id)a0;
- (id)fetchAttributionForAttributionIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)feedbackForHighlightIdentifier:(id)a0 withType:(unsigned long long)a1 variant:(id)a2 completionBlock:(id /* block */)a3;

@end
