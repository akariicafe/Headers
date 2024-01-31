@class NSString;

@interface XRBlockHandledIssueResponder : NSObject <XRIssueResponder> {
    id /* block */ _handler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)handleIssue:(id)a0 type:(short)a1 from:(id)a2;

@end
