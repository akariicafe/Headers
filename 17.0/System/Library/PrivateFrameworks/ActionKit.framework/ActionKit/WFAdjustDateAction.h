@interface WFAdjustDateAction : WFAction

- (void)runAsynchronouslyWithInput:(id)a0;
- (void)finishWithInput:(id)a0 dateTransform:(id /* block */)a1;
- (id)transformDate:(id)a0 operation:(unsigned long long)a1;

@end
