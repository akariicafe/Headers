@interface _UIPhysicalButtonMutableConfigurationSet : _UIPhysicalButtonConfigurationSet {
    unsigned long long _mutationDetector;
}

+ (id)new;

- (id)init;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setConfiguration:(id)a0 forButton:(unsigned long long)a1;
- (void)_unionWithConfigurationSet:(id)a0;

@end
